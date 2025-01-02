# Introduction

**NOTE!** `Use this plugin only when you're playing on original vanilla dx7 renderer, dx11 doesn't need this fix`

This union plugin fixes known [Direct Draw surface lost](https://www.gamedev.net/forums/topic/4779-directdraw-lost-surfaces-problems/) problem in gothic games.  
Basically, every time when you run gothic in the background in **windowed mode** and open up a application that show [UAC monit](https://learn.microsoft.com/en-us/windows/security/application-security/application-control/user-account-control/) or press **CTRL+ALT+DELETE**, then the game will freeze because Direct Draw loses every allocated surface/vertex buffer, and they need to be recreated when this happens. Game code is able to rebuild all of the buffers, but the developers didn't implemented automatic surface restoration feature, hence why this project was created.

# Usage

- Download the DDrawSurfaceRestorer.dll from [releases page](https://github.com/Patrix9999/DDrawSurfaceRestorer/releases)
- Place it in `Game/System/autorun` directory