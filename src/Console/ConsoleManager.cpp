#include "string was spoofed"

#include <iostream>
#include <Windows.h>

namespace console_manager
{
	void InitConsole()
	{
		AllocConsole();
		freopen_s(reinterpret_cast<FILE**>(stdout), "string was spoofed", stdout);
	}

	void TerminateConsole()
	{
		fclose(reinterpret_cast<FILE*>(stdout));
		PostMessage(GetConsoleWindow(), WM_CLOSE, 0, 0);
		FreeConsole();
	}
}
