#include "string was spoofed"

#include <libloaderapi.h>
#include <processthreadsapi.h>
#include <Psapi.h>

#define IsInRange(x, a, b)		(x >= a && x <= b)
#define GetBits(x)				(IsInRange(x, '0', '9') ? (x - '0') : ((x&(~0x20)) - 'A' + 0xA))
#define GetByte(x)				(GetBits(x[0]) << 4 | GetBits(x[1]))

bool DataCompare(const BYTE* pbData, const BYTE* pbSig, const char* pszMask)
{
	for (; *pszMask; ++pszMask, ++pbData, ++pbSig)
	{
		if (*pszMask == 'x' && *pbData != *pbSig)
			return 0;
	}

	return (*pszMask == 0);
}

DWORD_PTR PatternScan(DWORD_PTR dwStart, DWORD_PTR dwSize, const char* pszSig, const char* pszMask)
{
	if (!dwSize)
		return 0;

	for (int i = 0; i < dwSize; i++)
	{
		if (DataCompare((PBYTE)(dwStart + i), (PBYTE)pszSig, pszMask))
			return (DWORD_PTR)(dwStart + i);
	}

	return 0;
}

PBYTE PatternScan(const std::string& ImageName, const std::string& Pattern)
{
	if (ImageName.empty() || Pattern.empty())
	{
		return 0;
	}

	HMODULE hModule = GetModuleHandleA(ImageName.c_str());

	if (!hModule)
	{
		return 0;
	}

	MODULEINFO ImageInfo;
	if (!K32GetModuleInformation(GetCurrentProcess(), hModule, &ImageInfo, sizeof(MODULEINFO)))
	{
		return 0;
	}

	const PBYTE pScanStart = (const PBYTE)(hModule);

	const PBYTE pScanEnd = (const PBYTE)(pScanStart + ImageInfo.SizeOfImage);

	PBYTE pFirstMatch = 0;

	PBYTE pByteArray = (PBYTE)(Pattern.c_str());

	for (PBYTE pCurrent = pScanStart; pCurrent < pScanEnd; ++pCurrent)
	{
		if (*(PBYTE)pByteArray == (BYTE)'\?' || *pCurrent == GetByte(pByteArray))
		{
			if (!pFirstMatch)
				pFirstMatch = pCurrent;

			if (!pByteArray[2])
				return pFirstMatch;

			pByteArray += (*(PWORD)pByteArray == (WORD)'\?\?' || *(PBYTE)pByteArray != (BYTE)'\?') ? 3 : 2;

			if (!*pByteArray)
				return pFirstMatch;
		}
		else if (pFirstMatch)
		{
			pCurrent = pFirstMatch;

			pByteArray = (PBYTE)(Pattern.c_str());

			pFirstMatch = 0;
		}
	}

	return 0;
}