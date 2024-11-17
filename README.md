# Game Logs System (GLS) Demo
![Unreal Engine Version](https://img.shields.io/badge/UE-5.2%20%7C%205.3%20%7C%205.4%20%7C%205.5-blue)

The demo version of GLS is intended for use on Windows, available only in development and debug builds. The source code is not available, and it cannot be compiled independently. The demo version works in the editor and in built games, but only on Windows.

# Game Logs System (GLS) full version
[Fab marketplace link](https://fab.com/s/43bbed079742)

Full Version of GLS is available for all platforms, supports independent compilation, and has no usage restrictions.

# Description
**Game Logs System (GLS)** is a plugin for Unreal Engine, designed for programmers and testers to help analyze logs both in the editor and at runtime during program execution on any device and platform. GLS allows you to collect logs from both the game and the engine, filter them by categories, classes, objects or custom tags.

The main goal of the plugin is to provide the ability to analyze logs on any platform in real time. Control is possible from the keyboard, joystick or touchpad.
The plugin is designed with an emphasis on high performance and ease of use, despite the potential large number of logs in the system.

The plugin is suitable for both small indie games and large AAA studios with a high load.

# Installation
Follow these steps to install the demo plugin:

1. Select the appropriate branch for your Unreal Engine version (e.g., 5.2, 5.3, 5.4, or 5.5).

2. Download or clone the repository to your local machine.

3. Extract the archive to the following directory:
**\Engine\Plugins\Marketplace\GameLogsSystemDemo**
(Ensure the folder structure matches this path in your Unreal Engine installation directory.)
Attention, the plugin must be placed in the engine, not in your project. If you place it in the project, not in the engine, you will not be able to run the project, because the plugin is distributed without the source code.

4. Open the Unreal Editor.
Go to Edit -> Plugins.
Locate GameLogsSystemDemo in the list and enable it.
Restart the editor if prompted.

# Usage Examples
The GLS plugin provides several C++ macros and functions to streamline logging with tags, categories, and verbosity settings.
Using GLS_LOG macros from GLS offers several advantages over the standard UE_LOG:
GLS_LOG supports intelligent log filtering by categories, classes, objects, and tags.
Allows for catching logs in shipping or distribution applications.
Here are some examples:
1. GLS_LOG(WorldContext, LogTemp, Warning, TEXT("An error occurred: %s"), *ErrorMessage);
2. UGLSSubsystem::PrintStringToGLS(WorldContextObject, TEXT("Some message here"), TEXT("MyCustomCategory"), EGLSLogType::Display, true, /*Print to screen*/, true, /*Print to log*/ );

[For more details, visit our dev blog](https://dev.epicgames.com/community/learning/tutorials/m36v/unreal-engine-fab-game-logs-system-gls-real-time-log-management-for-shipping-builds-on-mobile-and-console-platforms)

# Quick Start Guide
1. Configure necessary settings in Project Settings -> Plugins -> Game Logs System (GLS) Demo.
2. You can set up key bindings to open the GLS log overlay during runtime.
3. To open the GLS overlay in the editor or during gameplay, press and hold Alt + Shift + G.  
4. To open the overlay on a mobile device, press and hold two fingers on an empty area of the screen.
5. To open the overlay on a console, press and hold the Gamepad Special Right button.  

# License
This plugin is provided for evaluation purposes only. The GLS plugin distributed without the source code.

# Support
[Documetation](https://fergius-engineering.gitbook.io/gamelogssystem)
[gamelogssystem@gmail.com](gamelogssystem@gmail.com)

# Product stage
The product is in beta testing.