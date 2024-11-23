#pragma once
#include <Windows.h>
#include <iostream>
#include <string>
#include <TlHelp32.h>
#include "spoof.h"

uintptr_t base_address;
uintptr_t cr3;

#define RW_CALL CTL_CODE(FILE_DEVICE_UNKNOWN, 0x763, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) 
#define BASE_CALL CTL_CODE(FILE_DEVICE_UNKNOWN, 0x764, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // like in the um, we need to define our ctl codes, make sure these match the usermode ones
#define DATA_CALL CTL_CODE(FILE_DEVICE_UNKNOWN, 0x765, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) 


typedef struct _RW_STRUC {
    INT32 security;
    INT32 process_id;
    ULONGLONG address, buffer, size;
    BOOLEAN write;
} readm, * process_read;

typedef struct _BASE_STRUC {
    INT32 security;
    INT32 process_id;
    ULONGLONG* address;
} base, * process_base;

typedef struct _DIR_STRUC {
    INT32 process_id;
    bool* operation;
} dir, * process_dir;


namespace mem
{
    HANDLE driver_handle;
    INT32 process_id;

    bool GetDrv()
    {
        SPOOF_FUNC;
        driver_handle = CreateFileW((L"\\\\.\\\\{382dfc-fdus324-342a-34xa-34sf-2934ughf7456}"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);

        if (!driver_handle || (driver_handle == INVALID_HANDLE_VALUE))
            return false;

        return true;
    }

    void read_physical(PVOID address, PVOID buffer, DWORD size)
    {
        SPOOF_FUNC;

        _RW_STRUC arguments = { NULL };

        arguments.address = (ULONGLONG)address;
        arguments.buffer = (ULONGLONG)buffer;
        arguments.size = size;
        arguments.process_id = process_id;
        arguments.write = FALSE;

        DeviceIoControl(driver_handle, RW_CALL, &arguments, sizeof(arguments), nullptr, NULL, NULL, NULL);
    }



    uintptr_t GetBase()
    {
        SPOOF_FUNC;

        uintptr_t image_address = { NULL };
        _BASE_STRUC arguments = { NULL };

        arguments.process_id = process_id;
        arguments.address = (ULONGLONG*)&image_address;

        DeviceIoControl(driver_handle, BASE_CALL, &arguments, sizeof(arguments), nullptr, NULL, NULL, NULL);

        return image_address;
    }

    uintptr_t GetDir() {
        SPOOF_FUNC;

        bool recievce = false;
        _DIR_STRUC arguments = { NULL };
        arguments.process_id = process_id;
        arguments.operation = (bool*)&recievce;
        DeviceIoControl(driver_handle, DATA_CALL, &arguments, sizeof(arguments), nullptr, NULL, NULL, NULL);

        return recievce;
    }

    INT32 find_process(LPCTSTR process_name)
    {
        PROCESSENTRY32 pt;
        HANDLE hsnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        pt.dwSize = sizeof(PROCESSENTRY32);
        if (Process32First(hsnap, &pt)) {
            do {
                if (!lstrcmpi(pt.szExeFile, process_name)) {
                    CloseHandle(hsnap);
                    process_id = pt.th32ProcessID;
                    return pt.th32ProcessID;
                }
            } while (Process32Next(hsnap, &pt));
        }
        CloseHandle(hsnap);

        return { NULL };
    }

}

template <typename T>
T read(uint64_t address)
{
    T buffer{ };
    mem::read_physical((PVOID)address, &buffer, sizeof(T));

    return buffer;
}

template<typename T>
bool read_array(uintptr_t address, T out[], size_t len)
{
    for (size_t i = 0; i < len; ++i)
    {
        out[i] = read<T>(address + i * sizeof(T));
    }
    return true;
}



bool is_valid(const uint64_t adress)
{
    if (adress <= 0x400000 || adress == 0xCCCCCCCCCCCCCCCC || reinterpret_cast<void*>(adress) == nullptr || adress >
        0x7FFFFFFFFFFFFFFF) {
        return false;
    }
    return true;
}