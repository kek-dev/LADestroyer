// Lost Ark (1.148.153.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include <Windows.h>

#include "string was spoofed"
#include "string was spoofed"

namespace SDK
{
	TArray<FNameEntry*>* FName::GNames = nullptr;
	TArray<UObject*>* UObject::GObjects = nullptr;

	bool ObjectInitialize()
	{
		BYTE* _GObjects = 0;

		BYTE* __GObjects = (BYTE*)PatternScan("string was spoofed");
		if (__GObjects == nullptr)
		{
			return false;
		}

		_GObjects = (BYTE*)*(DWORD*)(__GObjects + 0x03);
		_GObjects += (unsigned __int64)__GObjects + 0x03 + sizeof(DWORD);

		UObject::GObjects = reinterpret_cast<decltype(UObject::GObjects)>(_GObjects);
		if (UObject::GObjects == nullptr)
			return false;

		return true;
	}

	bool NamesInitialize()
	{
		BYTE* _GNames = 0;

		BYTE* __GNames = (BYTE*)PatternScan("string was spoofed",
		                                    "string was spoofed");
		if (__GNames == nullptr)
			return false;

		_GNames = (BYTE*)*(DWORD*)(__GNames + 0x03);
		_GNames += (unsigned __int64)__GNames + 0x03 + sizeof(DWORD);

		FName::GNames = reinterpret_cast<decltype(FName::GNames)>(_GNames);
		if (FName::GNames == nullptr)
			return false;

		return true;
	}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
