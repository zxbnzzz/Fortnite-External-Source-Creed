
enum bone : int
{
    HumanBase = 0,
    HumanPelvis = 2,
    HumanLThigh1 = 71,
    HumanLThigh2 = 77,
    HumanLThigh3 = 72,
    HumanLCalf = 74,
    HumanLFoot2 = 73,
    HumanLFoot = 86,
    HumanLToe = 76,
    HumanRThigh1 = 78,
    HumanRThigh2 = 84,
    HumanRThigh3 = 79,
    HumanRCalf = 81,
    HumanRFoot2 = 82,
    HumanRFoot = 87,
    HumanRToe = 83,
    HumanSpine1 = 7,
    HumanSpine2 = 5,
    HumanSpine3 = 2,
    HumanLCollarbone = 9,
    HumanLUpperarm = 35,
    HumanLForearm1 = 36,
    HumanLForearm23 = 10,
    HumanLForearm2 = 34,
    HumanLForearm3 = 33,
    HumanLPalm = 32,
    HumanLHand = 11,
    HumanRCollarbone = 98,
    HumanRUpperarm = 64,
    HumanRForearm1 = 65,
    HumanRForearm23 = 39,
    HumanRForearm2 = 63,
    HumanRForearm3 = 62,
    HumanRHand = 40,
    HumanRPalm = 58,
    HumanNeck = 67,
    HumanHead = 110, //110
    HumanLowerHead = 106,

    HumanChest = 65
};

__int64 dynamic_uworld;
enum offset {
    uworld = 0x12ED8E38, // OFFSET_GWORLD
    levels = 0x1a0, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UWorld&member=Levels
    gnames = 0x1233C1C0,
    game_instance = 0x1f0, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UWorld&member=OwningGameInstance
    game_state = 0x178, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UWorld&member=GameState
    local_player = 0x38, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UGameInstance&member=LocalPlayers
    player_controller = 0x30, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UPlayer&member=PlayerController
    acknowledged_pawn = 0x350, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=APlayerController&member=AcknowledgedPawn
    aactor = 0xa0, // idk
    actor_count = 0xA8,
    skeletal_mesh = 0x328, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=ACharacter&member=Mesh
    player_state = 0x2c8, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=APawn&member=PlayerState
    player_id = 0x2ac, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=APlayerState&member=PlayerId
    root_component = 0x1b0, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AActor&member=RootComponent
    persistent_level = 0x40, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UWorld&member=PersistentLevel
    OwningWorld = 0xc0,
    velocity = 0x168, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=USceneComponent&member=ComponentVelocity
    relative_location = 0x120, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=USceneComponent&member=RelativeLocation
    relative_rotation = 0x138, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=USceneComponent&member=RelativeRotation
    current_weapon = 0x9f8, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPawn&member=CurrentWeapon
    weapon_data = 0x568, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortWeapon&member=WeaponData
    tier = 0xEB, // idk
    team_index = 0x1239, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerStateAthena&member=TeamIndex
    player_array = 0x2c0, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AGameStateBase&member=PlayerArray
    pawn_private = 0x320, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=APlayerState&member=PawnPrivate
    component_to_world = 0x1c0, // idk
    bone_array = 0x580, // idk
    kill_score = 0x1214, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerStateAthena&member=KillScore
    fLastSubmitTime = 0x2E0, // idk
    fLastRenderTimeOnScreen = 0x2E8, // idk
    location_under_reticle = 0x2700, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerController&member=LocationUnderReticle
    fname = 0x121B1400, // not sure
    current_vehicle = 0x2a38, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerPawn&member=CurrentVehicle

};
//
enum weaponoffsets {
    CurrentWeapon = 0x9d8, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPawn&member=CurrentWeapon
    AmmoCount = 0xf0c, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortWeapon&member=AmmoCount
    WeaponData = 0x510, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortWeapon&member=WeaponData
    Tier = 0xa2, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UFortItemDefinition&member=Rarity
    ItemName = 0x40, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UItemDefinitionBase&member=ItemName i think
};

enum cameraoffsetss {
    PlayerCameraManager = 0x348, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=APlayerController&member=PlayerCameraManager
    ViewPitchMin = 0x248c,
    ViewPitchMax = 0x2490,
    ViewYawMin = 0x2494,
    ViewYawMax = 0x2498,
    ViewRollMin = 0x249c,
    ViewRollMax = 0x24a0,
    ViewTarget = 0x320,
    AimPitchMin = 0x1830,
    AimPitchMax = 0x1834,
};