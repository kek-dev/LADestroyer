#ifndef FINDPATTERN_H
#define FINDPATTERN_H

#include <Windows.h>
#include <string>

DWORD_PTR PatternScan(DWORD_PTR dwStart, DWORD_PTR dwSize, const char* pszSig, const char* pszMask);
PBYTE PatternScan(const std::string& ImageName, const std::string& Pattern);
#endif