/*----------------------------------------------------------
OpenKey - The Cross platform Open source Vietnamese Keyboard application.

Copyright (C) 2020 Maple
Github: https://github.com/doanhmaple/OpenKey
Fanpage: https://www.facebook.com/OpenKeyVN

This file is belong to the OpenKey project, Win32 version
which is released under GPL license.
You can fork, modify, improve this program. If you
redistribute your new version, it MUST be open source.
-----------------------------------------------------------*/
#pragma once
#include "stdafx.h"

class SystemTrayHelper {
private:
	static HWND createFakeWindow(const HINSTANCE& hIns);
	static void createPopupMenu();
public:
	static void createSystemTrayIcon(const HINSTANCE& hIns);
	static void updateData();
	static void removeSystemTray();
};

