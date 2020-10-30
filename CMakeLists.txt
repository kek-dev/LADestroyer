cmake_minimum_required(VERSION 3.17)
project(Destroyer)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "string was spoofed")

include_directories(
        SYSTEM embed-libs/la-sdk
        SYSTEM embed-libs/vmt-hook
        src)

set(LA_SDK
        embed-libs/la-sdk/SDK.hpp
        embed-libs/la-sdk/FindPattern.h
        embed-libs/la-sdk/FindPattern.cpp
        embed-libs/la-sdk/LA_AkAudio_classes.hpp
        embed-libs/la-sdk/LA_AkAudio_functions.cpp
        embed-libs/la-sdk/LA_AkAudio_parameters.hpp
        embed-libs/la-sdk/LA_AkAudio_structs.hpp
        embed-libs/la-sdk/LA_Basic.cpp
        embed-libs/la-sdk/LA_Basic.hpp
        embed-libs/la-sdk/LA_Core_classes.hpp
        embed-libs/la-sdk/LA_Core_functions.cpp
        embed-libs/la-sdk/LA_Core_parameters.hpp
        embed-libs/la-sdk/LA_Core_structs.hpp
        embed-libs/la-sdk/LA_EFGame_classes.hpp
        embed-libs/la-sdk/LA_EFGame_functions.cpp
        embed-libs/la-sdk/LA_EFGame_parameters.hpp
        embed-libs/la-sdk/LA_EFGame_structs.hpp
        embed-libs/la-sdk/LA_Engine_classes.hpp
        embed-libs/la-sdk/LA_Engine_functions.cpp
        embed-libs/la-sdk/LA_Engine_parameters.hpp
        embed-libs/la-sdk/LA_Engine_structs.hpp
        embed-libs/la-sdk/LA_GameFramework_classes.hpp
        embed-libs/la-sdk/LA_GameFramework_functions.cpp
        embed-libs/la-sdk/LA_GameFramework_parameters.hpp
        embed-libs/la-sdk/LA_GameFramework_structs.hpp
        embed-libs/la-sdk/LA_GFxUI_classes.hpp
        embed-libs/la-sdk/LA_GFxUI_functions.cpp
        embed-libs/la-sdk/LA_GFxUI_parameters.hpp
        embed-libs/la-sdk/LA_GFxUI_structs.hpp
        embed-libs/la-sdk/LA_WinDrv_classes.hpp
        embed-libs/la-sdk/LA_WinDrv_functions.cpp
        embed-libs/la-sdk/LA_WinDrv_parameters.hpp
        embed-libs/la-sdk/LA_WinDrv_structs.hpp
        embed-libs/la-sdk/LA_XAudio2_classes.hpp
        embed-libs/la-sdk/LA_XAudio2_functions.cpp
        embed-libs/la-sdk/LA_XAudio2_parameters.hpp
        embed-libs/la-sdk/LA_XAudio2_structs.hpp)

set(SOURCE_FILES
        main.cpp
        src/Hooks/HookInstigator.h
        src/Hooks/HookInstigator.cpp
        src/Modules/AnimationSpeedModifier/AnimationSpeedModifier.h
        src/Modules/AnimationSpeedModifier/AnimationSpeedModifier.cpp
        src/Console/ConsoleManager.h
        src/Console/ConsoleManager.cpp
        src/Modules/CustomFOV/CustomFOV.h
        src/Modules/CustomFOV/CustomFOV.cpp
        src/Modules/DebugDrawer/DebugDrawer.h
        src/Modules/DebugDrawer/DebugDrawer.cpp
        src/Modules/DebugDrawer/DebugInfoDrawer.h
        src/Modules/DebugDrawer/DebugInfoDrawer.cpp
        src/Geometry/Geometry.h
        src/Geometry/Geometry.cpp
        src/DataStore/Globals.h
        src/DataStore/Globals.cpp
        src/Hooks/HookCoordinator.h
        src/Hooks/HookCoordinator.cpp
        src/Hooks/HookInstigator.h
        src/Hooks/HookInstigator.cpp
        src/HotkeyManager/HotkeyManager.h
        src/HotkeyManager/HotkeyManager.cpp
        src/HotkeyManager/HotkeyModel.h
        src/Modules/DebugDrawer/HudDebugDrawer.h
        src/Modules/DebugDrawer/HudDebugDrawer.cpp
        src/Modules/ModuleCoordinator.h
        src/Modules/ModuleCoordinator.cpp
        src/Modules/SwiftMove/SwiftMove.h
        src/Modules/SwiftMove/SwiftMove.cpp
        src/Modules/Teleport/Teleport.h
        src/Modules/Teleport/Teleport.cpp
        src/Modules/Drawer/TextDrawer.h
        src/Modules/Drawer/TextDrawer.cpp src/Modules/AutoCargoCarrying/AutoCargoCarrying.h src/Modules/AutoCargoCarrying/AutoCargoCarrying.cpp src/Modules/PvpMode/PvpMode.h src/Modules/PvpMode/PvpMode.cpp)

add_library(Destroyer MODULE ${SOURCE_FILES} ${LA_SDK})

add_definitions(-DWINDOWS_IGNORE_PACKING_MISMATCH)