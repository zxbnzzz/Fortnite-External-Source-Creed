#include "requirements/includes.h"
#include "kernel/spoof.h"
#include <iostream>
#include <filesystem>
#include "requirements/auth.h"

void SetPath(std::string path)
{
	std::filesystem::current_path(path);
}
void DeleteFile(const std::string& filePath)
{
	try
	{
		if (std::filesystem::remove(filePath))
		{
		}
		else
		{
		}
	}
	catch (const std::filesystem::filesystem_error& e)
	{
	}
}


HWND console = GetConsoleWindow();

int main()
{
	mem::GetDrv();
	HWND fn_win = NULL;
	D3DX11CreateShaderResourceViewFromMemory();
	SetConsoleTitle(" [<>] Creed Private Build | creed.sellsn.io");


   std::cout << _(" [>] Once you are in the lobby, press ENTER to Load the Cheat.") << "\n";
   system(_("pause"));

	mem::process_id = mem::find_process(("FortniteClient-Win64-Shipping.exe"));
	base_address = mem::GetBase();
	mem::GetDir();

	width = GetSystemMetrics(SM_CXSCREEN); height = GetSystemMetrics(SM_CYSCREEN);
	std::cout << skCrypt("[!] Kernel Image Adress: ") << base_address << std::endl;


	if (Render->Setup() != true) ExitProcess(0);
	Render->Render();

}