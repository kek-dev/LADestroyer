// Lost Ark (1.148.153.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "string was spoofed"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EFGame.EFCharacterParts.OnParticleSystemFinished
// (Defined, Simulated, Public)
// Parameters:
// class UParticleSystemComponent* PSC                            (Parm, EditInline)

void AEFCharacterParts::OnParticleSystemFinished(class UParticleSystemComponent* PSC)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFCharacterParts_OnParticleSystemFinished_Params params;
	params.PSC = PSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.ClearAttachedPSIIndex
// (Native, Public)

void AEFCharacterParts::ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFCharacterParts_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.NotifyChangedBase
// (Native, Public)

void AEFCharacterParts::NotifyChangedBase()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFCharacterParts_NotifyChangedBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.BaseChange
// (Defined, Singular, Event, Public)

void AEFCharacterParts::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFCharacterParts_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.EncroachingOn
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AEFCharacterParts::EncroachingOn(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFCharacterParts_EncroachingOn_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFCharacterParts.EncroachedBy
// (Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AEFCharacterParts::EncroachedBy(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFCharacterParts_EncroachedBy_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.Destroyed
// (Defined, Simulated, Event, Public)

void AEFCharacterParts::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFCharacterParts_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalDebugLookAt
// (Native, Public)

void UEFCheatManager::InternalDebugLookAt()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalDebugLookAt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalVisualizePhysicsCompartmentUsage
// (Native, Public)

void UEFCheatManager::InternalVisualizePhysicsCompartmentUsage()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalVisualizePhysicsCompartmentUsage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalSetPhysicsCompartmentCount
// (Native, Public)
// Parameters:
// int                            inCount                        (Parm)

void UEFCheatManager::InternalSetPhysicsCompartmentCount(int inCount)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalSetPhysicsCompartmentCount_Params params;
	params.inCount = inCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalTogglePhysicsCompartmentForEFPawns
// (Native, Public)

void UEFCheatManager::InternalTogglePhysicsCompartmentForEFPawns()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalTogglePhysicsCompartmentForEFPawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalSetCamTargetBlendTime
// (Native, Public)
// Parameters:
// float                          a_Time                         (Parm)
// float                          a_Exp                          (Parm)

void UEFCheatManager::InternalSetCamTargetBlendTime(float a_Time, float a_Exp)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalSetCamTargetBlendTime_Params params;
	params.a_Time = a_Time;
	params.a_Exp = a_Exp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalClearCamTarget
// (Native, Public)

void UEFCheatManager::InternalClearCamTarget()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalClearCamTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalSetCamTarget
// (Native, Public)
// Parameters:
// struct FString                 a_Nickname                     (Parm, NeedCtorLink)

void UEFCheatManager::InternalSetCamTarget(const struct FString& a_Nickname)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalSetCamTarget_Params params;
	params.a_Nickname = a_Nickname;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalCamPrevTarget
// (Native, Public)

void UEFCheatManager::InternalCamPrevTarget()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalCamPrevTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalCamNextTarget
// (Native, Public)

void UEFCheatManager::InternalCamNextTarget()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalCamNextTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalGetPlayerCamera
// (Native, Public)
// Parameters:
// class AEFPlayerCamera*         ReturnValue                    (Parm, OutParm, ReturnParm)

class AEFPlayerCamera* UEFCheatManager::InternalGetPlayerCamera()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalGetPlayerCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFCheatManager.InternalToggleCullDistanceVolume
// (Native, Public)

void UEFCheatManager::InternalToggleCullDistanceVolume()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalToggleCullDistanceVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleCPUSkinning
// (Native, Public)
// Parameters:
// struct FString                 InMeshName                     (Parm, NeedCtorLink)

void UEFCheatManager::InternalToggleCPUSkinning(const struct FString& InMeshName)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalToggleCPUSkinning_Params params;
	params.InMeshName = InMeshName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleOneFrameThreadLag
// (Native, Public)

void UEFCheatManager::InternalToggleOneFrameThreadLag()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalToggleOneFrameThreadLag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleUpdateDLEOptimize
// (Native, Public)

void UEFCheatManager::InternalToggleUpdateDLEOptimize()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalToggleUpdateDLEOptimize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleMeshObjectUpdateOptimize
// (Native, Public)

void UEFCheatManager::InternalToggleMeshObjectUpdateOptimize()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalToggleMeshObjectUpdateOptimize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleUpdateBoundsOptimize
// (Native, Public)

void UEFCheatManager::InternalToggleUpdateBoundsOptimize()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalToggleUpdateBoundsOptimize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleDynamicFoliageOptimize
// (Native, Public)

void UEFCheatManager::InternalToggleDynamicFoliageOptimize()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalToggleDynamicFoliageOptimize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleCameraODAOptimize
// (Native, Public)

void UEFCheatManager::InternalToggleCameraODAOptimize()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalToggleCameraODAOptimize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleParticleOptimizeILG
// (Native, Public)

void UEFCheatManager::InternalToggleParticleOptimizeILG()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCheatManager_InternalToggleParticleOptimizeILG_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFConsole.IsValidEFCommand
// (Final, Native, Public)
// Parameters:
// int                            Idx                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFConsole::IsValidEFCommand(int Idx)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFConsole_IsValidEFCommand_Params params;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFConsole.InputAxis
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   Key                            (Parm)
// float                          Delta                          (Parm)
// float                          DeltaTime                      (Parm)
// bool                           bGamepad                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFConsole::InputAxis(int ControllerId, const struct FName& Key, float Delta, float DeltaTime, bool bGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFConsole_InputAxis_Params params;
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Delta = Delta;
	params.DeltaTime = DeltaTime;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFConsole.InputKey
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   Key                            (Parm)
// TEnumAsByte<EInputEvent>       Event                          (Parm)
// float                          AmountDepressed                (OptionalParm, Parm)
// bool                           bGamepad                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFConsole::InputKey(int ControllerId, const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed, bool bGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFConsole_InputKey_Params params;
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFDecalFloorActor.GetBoundingCylinder
// (Native, Public, HasOutParms)
// Parameters:
// float                          CollisionRadius                (Parm, OutParm)
// float                          CollisionHeight                (Parm, OutParm)

void AEFDecalFloorActor::GetBoundingCylinder(float* CollisionRadius, float* CollisionHeight)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFDecalFloorActor_GetBoundingCylinder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CollisionRadius != nullptr)
		*CollisionRadius = params.CollisionRadius;
	if (CollisionHeight != nullptr)
		*CollisionHeight = params.CollisionHeight;
}


// Function EFGame.EFDecalManager.SpawnDecalMinimal
// (Defined, Event, Public)
// Parameters:
// class UMaterialInterface*      DecalMaterial                  (Parm)
// struct FVector                 DecalLocation                  (Parm)
// struct FRotator                DecalOrientation               (Parm)
// float                          Width                          (Parm)
// float                          Height                         (Parm)
// float                          InLifeSpan                     (Parm)
// float                          Thickness                      (Parm)
// bool                           bNoClip                        (Parm)
// float                          DecalRotation                  (Parm)
// class UDecalComponent*         ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UDecalComponent* AEFDecalManager::SpawnDecalMinimal(class UMaterialInterface* DecalMaterial, const struct FVector& DecalLocation, const struct FRotator& DecalOrientation, float Width, float Height, float InLifeSpan, float Thickness, bool bNoClip, float DecalRotation)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFDecalManager_SpawnDecalMinimal_Params params;
	params.DecalMaterial = DecalMaterial;
	params.DecalLocation = DecalLocation;
	params.DecalOrientation = DecalOrientation;
	params.Width = Width;
	params.Height = Height;
	params.InLifeSpan = InLifeSpan;
	params.Thickness = Thickness;
	params.bNoClip = bNoClip;
	params.DecalRotation = DecalRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGameInfo.AllowCheats
// (Defined, Public)
// Parameters:
// class APlayerController*       P                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AEFGameInfo::AllowCheats(class APlayerController* P)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFGameInfo_AllowCheats_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGameInfo.PostSeamlessTravel
// (Native, Event, Public)

void AEFGameInfo::PostSeamlessTravel()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFGameInfo_PostSeamlessTravel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.GameEnding
// (Native, Event, Public)

void AEFGameInfo::GameEnding()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFGameInfo_GameEnding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.NotifyMapLoaded
// (Native, Event, Public)

void AEFGameInfo::NotifyMapLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFGameInfo_NotifyMapLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.NotfiyLoadingStep
// (Native, Event, Public)
// Parameters:
// struct FString                 InStepName                     (Parm, NeedCtorLink)

void AEFGameInfo::NotfiyLoadingStep(const struct FString& InStepName)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFGameInfo_NotfiyLoadingStep_Params params;
	params.InStepName = InStepName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.Tick
// (Defined, Event, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void AEFGameInfo::Tick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFGameInfo_Tick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.PostLogin
// (Defined, Event, Public)
// Parameters:
// class APlayerController*       NewPlayer                      (Parm)

void AEFGameInfo::PostLogin(class APlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFGameInfo_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.Login
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FString                 Portal                         (Parm, NeedCtorLink)
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FUniqueNetId            UniqueId                       (Const, Parm)
// struct FString                 ErrorMessage                   (Parm, OutParm, NeedCtorLink)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ReturnParm)

class APlayerController* AEFGameInfo::Login(const struct FString& Portal, const struct FString& Options, const struct FUniqueNetId& UniqueId, struct FString* ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFGameInfo_Login_Params params;
	params.Portal = Portal;
	params.Options = Options;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorMessage != nullptr)
		*ErrorMessage = params.ErrorMessage;

	return params.ReturnValue;
}


// Function EFGame.EFGameInfo.LoadLevel
// (Defined, Public)
// Parameters:
// struct FString                 LevelName                      (Parm, NeedCtorLink)

void AEFGameInfo::LoadLevel(const struct FString& LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFGameInfo_LoadLevel_Params params;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.RestartPlayer
// (Defined, Public)
// Parameters:
// class AController*             NewPlayer                      (Parm)

void AEFGameInfo::RestartPlayer(class AController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFGameInfo_RestartPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.InitGame
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FString                 ErrorMessage                   (Parm, OutParm, NeedCtorLink)

void AEFGameInfo::InitGame(const struct FString& Options, struct FString* ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFGameInfo_InitGame_Params params;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorMessage != nullptr)
		*ErrorMessage = params.ErrorMessage;
}


// Function EFGame.EFGameInfo.GenericPlayerInitialization
// (Defined, Public)
// Parameters:
// class AController*             C                              (Parm)

void AEFGameInfo::GenericPlayerInitialization(class AController* C)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFGameInfo_GenericPlayerInitialization_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.StopAfterImageEffect
// (Native, Public)
// Parameters:
// bool                           bForceRemoveAllChildren        (Parm)

void AEFPawn::StopAfterImageEffect(bool bForceRemoveAllChildren)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_StopAfterImageEffect_Params params;
	params.bForceRemoveAllChildren = bForceRemoveAllChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.StartAfterImageEffect
// (Native, Public, HasOutParms)
// Parameters:
// struct FEFCharacterAfterImageEffectInfo EffectParams                   (Const, Parm, OutParm)

void AEFPawn::StartAfterImageEffect(struct FEFCharacterAfterImageEffectInfo* EffectParams)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_StartAfterImageEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EffectParams != nullptr)
		*EffectParams = params.EffectParams;
}


// Function EFGame.EFPawn.GetAnimTrailParticleSystem
// (Native, Public)
// Parameters:
// class UAnimNotify_Trails*      AnimNotifyData                 (Const, Parm)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UParticleSystem* AEFPawn::GetAnimTrailParticleSystem(class UAnimNotify_Trails* AnimNotifyData)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_GetAnimTrailParticleSystem_Params params;
	params.AnimNotifyData = AnimNotifyData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPawn.ApplyFluidSurfaceContinuousForce
// (Simulated, Native, Public)
// Parameters:
// class AFluidSurfaceActor*      Fluid                          (Parm)

void AEFPawn::ApplyFluidSurfaceContinuousForce(class AFluidSurfaceActor* Fluid)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_ApplyFluidSurfaceContinuousForce_Params params;
	params.Fluid = Fluid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.ApplyFluidSurfaceImpact
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// class AFluidSurfaceActor*      Fluid                          (Parm)
// struct FVector                 HitLocation                    (Const, Parm, OutParm)

void AEFPawn::ApplyFluidSurfaceImpact(class AFluidSurfaceActor* Fluid, struct FVector* HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_ApplyFluidSurfaceImpact_Params params;
	params.Fluid = Fluid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
}


// Function EFGame.EFPawn.NotifyChangedBase
// (Native, Public)

void AEFPawn::NotifyChangedBase()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_NotifyChangedBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.BaseChange
// (Defined, Singular, Event, Public)

void AEFPawn::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.MAT_FinishAnimControl
// (Native, Public)
// Parameters:
// class UInterpGroup*            InInterpGroup                  (Parm)

void AEFPawn::MAT_FinishAnimControl(class UInterpGroup* InInterpGroup)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_MAT_FinishAnimControl_Params params;
	params.InInterpGroup = InInterpGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.MAT_BeginAnimControl
// (Native, Public)
// Parameters:
// class UInterpGroup*            InInterpGroup                  (Parm)

void AEFPawn::MAT_BeginAnimControl(class UInterpGroup* InInterpGroup)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_MAT_BeginAnimControl_Params params;
	params.InInterpGroup = InInterpGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.InterpolationFinished
// (Simulated, Native, Event, Public)
// Parameters:
// class USeqAct_Interp*          InterpAction                   (Parm)

void AEFPawn::InterpolationFinished(class USeqAct_Interp* InterpAction)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_InterpolationFinished_Params params;
	params.InterpAction = InterpAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.InterpolationStarted
// (Simulated, Native, Event, Public)
// Parameters:
// class USeqAct_Interp*          InterpAction                   (Parm)
// class UInterpGroupInst*        GroupInst                      (Parm)

void AEFPawn::InterpolationStarted(class USeqAct_Interp* InterpAction, class UInterpGroupInst* GroupInst)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_InterpolationStarted_Params params;
	params.InterpAction = InterpAction;
	params.GroupInst = GroupInst;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.RigidBodyCollision
// (Simulated, Native, Event, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, EditInline)
// class UPrimitiveComponent*     OtherComponent                 (Parm, EditInline)
// struct FCollisionImpactData    RigidCollisionData             (Const, Parm, OutParm, NeedCtorLink)
// int                            ContactIndex                   (Parm)

void AEFPawn::RigidBodyCollision(class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_RigidBodyCollision_Params params;
	params.HitComponent = HitComponent;
	params.OtherComponent = OtherComponent;
	params.ContactIndex = ContactIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RigidCollisionData != nullptr)
		*RigidCollisionData = params.RigidCollisionData;
}


// Function EFGame.EFPawn.DoKismetAttachment
// (Defined, Public)
// Parameters:
// class AActor*                  Attachment                     (Parm)
// class USeqAct_AttachToActor*   Action                         (Parm)

void AEFPawn::DoKismetAttachment(class AActor* Attachment, class USeqAct_AttachToActor* Action)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_DoKismetAttachment_Params params;
	params.Attachment = Attachment;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.AttachmentCameraActor
// (Native, Public)
// Parameters:
// class AActor*                  Attachment                     (Parm)
// struct FVector                 RelativeViewOffset             (Parm)

void AEFPawn::AttachmentCameraActor(class AActor* Attachment, const struct FVector& RelativeViewOffset)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_AttachmentCameraActor_Params params;
	params.Attachment = Attachment;
	params.RelativeViewOffset = RelativeViewOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.GetGravityZ
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AEFPawn::GetGravityZ()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_GetGravityZ_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPawn.OnForceFieldDestroy
// (Defined, Simulated, Public)
// Parameters:
// class UNxForceFieldComponent*  FFC                            (Parm, EditInline)

void AEFPawn::OnForceFieldDestroy(class UNxForceFieldComponent* FFC)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_OnForceFieldDestroy_Params params;
	params.FFC = FFC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.CreateForceField
// (Defined, Event, Public)
// Parameters:
// class UAnimNotify_ForceField*  AnimNotifyData                 (Const, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AEFPawn::CreateForceField(class UAnimNotify_ForceField* AnimNotifyData)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_CreateForceField_Params params;
	params.AnimNotifyData = AnimNotifyData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPawn.ExplodeActor
// (Native, Public)
// Parameters:
// class AActor*                  ExplodeActor                   (Parm)

void AEFPawn::ExplodeActor(class AActor* ExplodeActor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_ExplodeActor_Params params;
	params.ExplodeActor = ExplodeActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.FinishDyingDelay
// (Native, Public)

void AEFPawn::FinishDyingDelay()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_FinishDyingDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetDefaultStateColor
// (Native, Public)

void AEFPawn::SetDefaultStateColor()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_SetDefaultStateColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetStateColor
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FLinearColor            StateColor                     (Parm)
// float                          fIntensity                     (OptionalParm, Parm)

void AEFPawn::SetStateColor(const struct FLinearColor& StateColor, float fIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_SetStateColor_Params params;
	params.StateColor = StateColor;
	params.fIntensity = fIntensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.AttackFreezeAnim
// (Native, HasOptionalParms, Public)
// Parameters:
// float                          PauseTime                      (OptionalParm, Parm)

void AEFPawn::AttackFreezeAnim(float PauseTime)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_AttackFreezeAnim_Params params;
	params.PauseTime = PauseTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.AttackContinueAnim
// (Native, Public)

void AEFPawn::AttackContinueAnim()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_AttackContinueAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetPPOutlineWidth
// (Native, Public)
// Parameters:
// float                          Width                          (Parm)

void AEFPawn::SetPPOutlineWidth(float Width)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_SetPPOutlineWidth_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetPPOutlineColor
// (Native, Public)
// Parameters:
// struct FVector                 InColor                        (Parm)

void AEFPawn::SetPPOutlineColor(const struct FVector& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_SetPPOutlineColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetPPOutline
// (Native, Public)
// Parameters:
// bool                           bPPOutline                     (Parm)

void AEFPawn::SetPPOutline(bool bPPOutline)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_SetPPOutline_Params params;
	params.bPPOutline = bPPOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetCloakMode
// (Native, Public)
// Parameters:
// bool                           bEnable                        (Parm)
// float                          CloakAlpha                     (Parm)
// bool                           bRimLight                      (Parm)

void AEFPawn::SetCloakMode(bool bEnable, float CloakAlpha, bool bRimLight)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_SetCloakMode_Params params;
	params.bEnable = bEnable;
	params.CloakAlpha = CloakAlpha;
	params.bRimLight = bRimLight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetOccludedOutlineColor
// (Native, Public)
// Parameters:
// struct FVector                 InColor                        (Parm)
// float                          InScale                        (Parm)

void AEFPawn::SetOccludedOutlineColor(const struct FVector& InColor, float InScale)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_SetOccludedOutlineColor_Params params;
	params.InColor = InColor;
	params.InScale = InScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetOccludedOutline
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bOutline                       (Parm)
// float                          Width                          (OptionalParm, Parm)

void AEFPawn::SetOccludedOutline(bool bOutline, float Width)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_SetOccludedOutline_Params params;
	params.bOutline = bOutline;
	params.Width = Width;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.OutsideWorldBounds
// (Singular, Simulated, Native, Event, Public)

void AEFPawn::OutsideWorldBounds()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_OutsideWorldBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.FellOutOfWorld
// (Simulated, Native, Event, Public)
// Parameters:
// class UClass*                  dmgType                        (Parm)

void AEFPawn::FellOutOfWorld(class UClass* dmgType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_FellOutOfWorld_Params params;
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.Landed
// (Native, Event, Public)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  FloorActor                     (Parm)

void AEFPawn::Landed(const struct FVector& HitNormal, class AActor* FloorActor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_Landed_Params params;
	params.HitNormal = HitNormal;
	params.FloorActor = FloorActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.Falling
// (Native, Event, Public)

void AEFPawn::Falling()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_Falling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetDesiredRotation
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FRotator                TargetDesiredRotation          (Parm)
// bool                           InLockDesiredRotation          (OptionalParm, Parm)
// bool                           InUnlockWhenReached            (OptionalParm, Parm)
// float                          InterpolationTime              (OptionalParm, Parm)
// bool                           bResetRotationRate             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AEFPawn::SetDesiredRotation(const struct FRotator& TargetDesiredRotation, bool InLockDesiredRotation, bool InUnlockWhenReached, float InterpolationTime, bool bResetRotationRate)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_SetDesiredRotation_Params params;
	params.TargetDesiredRotation = TargetDesiredRotation;
	params.InLockDesiredRotation = InLockDesiredRotation;
	params.InUnlockWhenReached = InUnlockWhenReached;
	params.InterpolationTime = InterpolationTime;
	params.bResetRotationRate = bResetRotationRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPawn.OnParticleSystemFinished
// (Defined, Simulated, Public)
// Parameters:
// class UParticleSystemComponent* PSC                            (Parm, EditInline)

void AEFPawn::OnParticleSystemFinished(class UParticleSystemComponent* PSC)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_OnParticleSystemFinished_Params params;
	params.PSC = PSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.PostInitAll
// (Defined, Event, Public)

void AEFPawn::PostInitAll()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_PostInitAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.ClearAttachedPSIIndex
// (Native, Public)

void AEFPawn::ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.Destroyed
// (Defined, Simulated, Event, Public)

void AEFPawn::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.GetDefaultCameraMode
// (Defined, Simulated, Public)
// Parameters:
// class APlayerController*       RequestedBy                    (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName AEFPawn::GetDefaultCameraMode(class APlayerController* RequestedBy)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_GetDefaultCameraMode_Params params;
	params.RequestedBy = RequestedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPawn.GetObjectCameraStyle
// (Native, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName AEFPawn::GetObjectCameraStyle()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_GetObjectCameraStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPawn.EncroachingOn
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AEFPawn::EncroachingOn(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_EncroachingOn_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPawn.EncroachedBy
// (Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AEFPawn::EncroachedBy(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPawn_EncroachedBy_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayer.OnUpdatePropertyDrawScale
// (Native, Public)

void AEFPlayer::OnUpdatePropertyDrawScale()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayer_OnUpdatePropertyDrawScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayer.OnUpdatePropertyDrawScale3D
// (Native, Public)

void AEFPlayer::OnUpdatePropertyDrawScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayer_OnUpdatePropertyDrawScale3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTransit.EncroachingOn
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AEFTransit::EncroachingOn(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFTransit_EncroachingOn_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPlayerController.ConsoleCommand
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// bool                           bWriteToLog                    (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AEFPlayerController::ConsoleCommand(const struct FString& Command, bool bWriteToLog)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerController_ConsoleCommand_Params params;
	params.Command = Command;
	params.bWriteToLog = bWriteToLog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPlayerController.ProcessCinematic
// (Exec, Native, Public)
// Parameters:
// bool                           bInCinematicMode               (Parm)

void AEFPlayerController::ProcessCinematic(bool bInCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerController_ProcessCinematic_Params params;
	params.bInCinematicMode = bInCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.GetPlayerInitPosition
// (Native, Public, HasOutParms)
// Parameters:
// struct FVector                 out_Location                   (Parm, OutParm)
// struct FRotator                out_Rotation                   (Parm, OutParm)

void AEFPlayerController::GetPlayerInitPosition(struct FVector* out_Location, struct FRotator* out_Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerController_GetPlayerInitPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Location != nullptr)
		*out_Location = params.out_Location;
	if (out_Rotation != nullptr)
		*out_Rotation = params.out_Rotation;
}


// Function EFGame.EFPlayerController.GetPlayerViewPointQuat
// (Simulated, Native, Event, Public, HasOutParms)
// Parameters:
// struct FVector                 out_Location                   (Parm, OutParm)
// struct FQuat                   out_Quaternion                 (Parm, OutParm)

void AEFPlayerController::GetPlayerViewPointQuat(struct FVector* out_Location, struct FQuat* out_Quaternion)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerController_GetPlayerViewPointQuat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Location != nullptr)
		*out_Location = params.out_Location;
	if (out_Quaternion != nullptr)
		*out_Quaternion = params.out_Quaternion;
}


// Function EFGame.EFPlayerController.GetPlayerViewPoint
// (Defined, Simulated, Event, Public, HasOutParms)
// Parameters:
// struct FVector                 out_Location                   (Parm, OutParm)
// struct FRotator                out_Rotation                   (Parm, OutParm)

void AEFPlayerController::GetPlayerViewPoint(struct FVector* out_Location, struct FRotator* out_Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerController_GetPlayerViewPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Location != nullptr)
		*out_Location = params.out_Location;
	if (out_Rotation != nullptr)
		*out_Rotation = params.out_Rotation;
}


// Function EFGame.EFPlayerController.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AEFPlayerController::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerController_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function EFGame.EFPlayerController.DrawHUD
// (Defined, Public)
// Parameters:
// class AHUD*                    H                              (Parm)

void AEFPlayerController::DrawHUD(class AHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerController_DrawHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.SpawnDefaultHUD
// (Defined, Public)

void AEFPlayerController::SpawnDefaultHUD()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerController_SpawnDefaultHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.IsStopMovieLoading
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AEFPlayerController::IsStopMovieLoading()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerController_IsStopMovieLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPlayerController.PlayerTick
// (Native, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AEFPlayerController::PlayerTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerController_PlayerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.UpdateRotation
// (Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AEFPlayerController::UpdateRotation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerController_UpdateRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.StopMovieLoading
// (Defined, Public)

void AEFPlayerController::StopMovieLoading()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerController_StopMovieLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.Destroyed
// (Defined, Event, Public)

void AEFPlayerController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerController_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AEFPlayerController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.InitInputSystem
// (Defined, Event, Public)

void AEFPlayerController::InitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerController_InitInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.DefaultPositionControlPanel
// (Exec, Native, Public)

void UEFPlayerInput::DefaultPositionControlPanel()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFPlayerInput_DefaultPositionControlPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.FocusControlPanel
// (Exec, Native, Public)

void UEFPlayerInput::FocusControlPanel()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFPlayerInput_FocusControlPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.ToggleControlPanel
// (Exec, Native, Public)

void UEFPlayerInput::ToggleControlPanel()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFPlayerInput_ToggleControlPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.OnMouseScrollDown
// (Exec, Native, Public)

void UEFPlayerInput::OnMouseScrollDown()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFPlayerInput_OnMouseScrollDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.OnMouseScrollUp
// (Exec, Native, Public)

void UEFPlayerInput::OnMouseScrollUp()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFPlayerInput_OnMouseScrollUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.PlayerInput
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UEFPlayerInput::PlayerInput(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFPlayerInput_PlayerInput_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.InputAxis
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   Key                            (Parm)
// float                          Delta                          (Parm)
// float                          DeltaTime                      (Parm)
// bool                           bGamepad                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFPlayerInput::InputAxis(int ControllerId, const struct FName& Key, float Delta, float DeltaTime, bool bGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFPlayerInput_InputAxis_Params params;
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Delta = Delta;
	params.DeltaTime = DeltaTime;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFProjectile.ClearAttachedPSIIndex
// (Native, Public)

void AEFProjectile::ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFProjectile_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFProjectile.Destroyed
// (Defined, Simulated, Event, Public)

void AEFProjectile::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFProjectile_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFProjectile.BaseChange
// (Defined, Event, Public)

void AEFProjectile::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFProjectile_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFProjectile.NotifyBaseChange
// (Native, Public)

void AEFProjectile::NotifyBaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFProjectile_NotifyBaseChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFProjectile.ProcessTouch
// (Simulated, Native, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AEFProjectile::ProcessTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFProjectile_ProcessTouch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSkeletalMeshActor.ClearAttachedPSIIndex
// (Native, Public)

void AEFSkeletalMeshActor::ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFSkeletalMeshActor_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSkeletalMeshActor.NotifyChangedBase
// (Native, Public)

void AEFSkeletalMeshActor::NotifyChangedBase()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFSkeletalMeshActor_NotifyChangedBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSkeletalMeshActor.BaseChange
// (Defined, Singular, Event, Public)

void AEFSkeletalMeshActor::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFSkeletalMeshActor_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSkeletalMeshActor.Destroyed
// (Defined, Simulated, Event, Public)

void AEFSkeletalMeshActor::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFSkeletalMeshActor_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFStaticMeshActor.ClearAttachedPSIIndex
// (Native, Public)

void AEFStaticMeshActor::ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFStaticMeshActor_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFStaticMeshActor.NotifyChangedBase
// (Native, Public)

void AEFStaticMeshActor::NotifyChangedBase()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFStaticMeshActor_NotifyChangedBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFStaticMeshActor.BaseChange
// (Defined, Singular, Event, Public)

void AEFStaticMeshActor::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFStaticMeshActor_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFStaticMeshActor.Destroyed
// (Defined, Simulated, Event, Public)

void AEFStaticMeshActor::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFStaticMeshActor_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolume.UnTouch
// (Native, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AEFVolume::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFVolume_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolume.Touch
// (Native, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AEFVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameEngine.TranslateGFxUIMessage
// (Native, Public)
// Parameters:
// struct FString                 MessageCode                    (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFGameEngine::TranslateGFxUIMessage(const struct FString& MessageCode)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGameEngine_TranslateGFxUIMessage_Params params;
	params.MessageCode = MessageCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGameEngine.ShowLineChecks
// (Native, Public)
// Parameters:
// bool                           bLineCheck                     (Parm)
// bool                           bExtentLineCheck               (Parm)

void UEFGameEngine::ShowLineChecks(bool bLineCheck, bool bExtentLineCheck)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGameEngine_ShowLineChecks_Params params;
	params.bLineCheck = bLineCheck;
	params.bExtentLineCheck = bExtentLineCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMapInfo.SaveCameraValue
// (Defined, Public)
// Parameters:
// class UEFCameraBase*           Camera                         (Parm)

void UEFMapInfo::SaveCameraValue(class UEFCameraBase* Camera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFMapInfo_SaveCameraValue_Params params;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMapInfo.LoadCameraValue
// (Defined, Public)
// Parameters:
// class UEFCameraBase*           Camera                         (Parm)

void UEFMapInfo::LoadCameraValue(class UEFCameraBase* Camera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFMapInfo_LoadCameraValue_Params params;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.GetCurrentFOV
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFCameraBase::GetCurrentFOV()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_GetCurrentFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFCameraBase.GetDefaultFOV
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFCameraBase::GetDefaultFOV()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_GetDefaultFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFCameraBase.SetDefaultFOV
// (Defined, Public)
// Parameters:
// float                          FOV                            (Parm)

void UEFCameraBase::SetDefaultFOV(float FOV)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_SetDefaultFOV_Params params;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void UEFCameraBase::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function EFGame.EFCameraBase.UpdateRotation
// (Public)

void UEFCameraBase::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.ProcessBlendingStyle
// (Native, Public, HasOutParms)
// Parameters:
// struct FTPOV                   OutPOV                         (Parm, OutParm)
// float                          InDeltaSeconds                 (Parm)

void UEFCameraBase::ProcessBlendingStyle(float InDeltaSeconds, struct FTPOV* OutPOV)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_ProcessBlendingStyle_Params params;
	params.InDeltaSeconds = InDeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;
}


// Function EFGame.EFCameraBase.ActivateBlendingStyle
// (Native, Public)
// Parameters:
// class UEFCameraBase*           InOldCamera                    (Parm)

void UEFCameraBase::ActivateBlendingStyle(class UEFCameraBase* InOldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_ActivateBlendingStyle_Params params;
	params.InOldCamera = InOldCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.SetCurrentCameraCut
// (Native, Public)
// Parameters:
// struct FVector                 InPos                          (Parm)
// float                          InLimitDistSeq                 (Parm)

void UEFCameraBase::SetCurrentCameraCut(const struct FVector& InPos, float InLimitDistSeq)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_SetCurrentCameraCut_Params params;
	params.InPos = InPos;
	params.InLimitDistSeq = InLimitDistSeq;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.SetContentsSettingTable
// (Native, Public)
// Parameters:
// int                            InTableId                      (Parm)

void UEFCameraBase::SetContentsSettingTable(int InTableId)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_SetContentsSettingTable_Params params;
	params.InTableId = InTableId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.SetSettingTable
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            InTableId                      (Parm)
// bool                           InImmediateFlag                (OptionalParm, Parm)

void UEFCameraBase::SetSettingTable(int InTableId, bool InImmediateFlag)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_SetSettingTable_Params params;
	params.InTableId = InTableId;
	params.InImmediateFlag = InImmediateFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.InActivateSkeletalMeshForceLOD
// (Native, Public)
// Parameters:
// class UEFCameraBase*           InNextCamera                   (Parm)

void UEFCameraBase::InActivateSkeletalMeshForceLOD(class UEFCameraBase* InNextCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_InActivateSkeletalMeshForceLOD_Params params;
	params.InNextCamera = InNextCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.ActivateSkeletalMeshForceLOD
// (Native, Public)

void UEFCameraBase::ActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_ActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.ChangeZoomStep
// (Native, Public)
// Parameters:
// int                            iStep                          (Parm)

void UEFCameraBase::ChangeZoomStep(int iStep)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_ChangeZoomStep_Params params;
	params.iStep = iStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.CheckZoom
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFCameraBase::CheckZoom()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_CheckZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFCameraBase.ZoomOut
// (Native, Public)

void UEFCameraBase::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.ZoomIn
// (Native, Public)

void UEFCameraBase::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.BecomeViewTarget
// (Simulated, Public)
// Parameters:
// class AEFPlayerController*     PC                             (Parm)

void UEFCameraBase::BecomeViewTarget(class AEFPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_BecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.UpdateCamera
// (Native, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AEFPlayerCamera*         CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UEFCameraBase::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFCameraBase.ResetInterpolation
// (Native, Public)

void UEFCameraBase::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.OnBecomeInActive
// (Event, Public)
// Parameters:
// class UEFCameraBase*           NewCamera                      (Parm)

void UEFCameraBase::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_OnBecomeInActive_Params params;
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.OnBecomeActive
// (Event, Public)
// Parameters:
// class UEFCameraBase*           OldCamera                      (Parm)

void UEFCameraBase::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.Init
// (Public)

void UEFCameraBase::Init()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraBase_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFBackViewCamera.UpdateCamera
// (Native, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AEFPlayerCamera*         CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UEFBackViewCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFBackViewCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFCustomizingCamera.UpdateCamera
// (Native, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AEFPlayerCamera*         CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UEFCustomizingCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCustomizingCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFCustomizingCamera.ZoomOut
// (Native, Public)

void UEFCustomizingCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCustomizingCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCustomizingCamera.ZoomIn
// (Native, Public)

void UEFCustomizingCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCustomizingCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCustomizingCamera.Init
// (Defined, Public, HasDefaults)

void UEFCustomizingCamera::Init()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCustomizingCamera_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEditorViewCamera.OnBecomeInActive
// (Defined, Event, Public)
// Parameters:
// class UEFCameraBase*           NewCamera                      (Parm)

void UEFEditorViewCamera::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFEditorViewCamera_OnBecomeInActive_Params params;
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEditorViewCamera.OnBecomeActive
// (Defined, Event, Public)
// Parameters:
// class UEFCameraBase*           OldCamera                      (Parm)

void UEFEditorViewCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFEditorViewCamera_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEditorViewCamera.ZoomOut
// (Native, Public)

void UEFEditorViewCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFEditorViewCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEditorViewCamera.ZoomIn
// (Native, Public)

void UEFEditorViewCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFEditorViewCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEditorViewCamera.UpdateCamera
// (Native, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AEFPlayerCamera*         CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UEFEditorViewCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFEditorViewCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFFreeCamera.OnBecomeInActive
// (Defined, Event, Public)
// Parameters:
// class UEFCameraBase*           NewCamera                      (Parm)

void UEFFreeCamera::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFFreeCamera_OnBecomeInActive_Params params;
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.OnBecomeActive
// (Defined, Event, Public)
// Parameters:
// class UEFCameraBase*           OldCamera                      (Parm)

void UEFFreeCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFFreeCamera_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.HideOwnerPlayer
// (Native, Public)

void UEFFreeCamera::HideOwnerPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFFreeCamera_HideOwnerPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.ShowOwnerPlayer
// (Native, Public)

void UEFFreeCamera::ShowOwnerPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFFreeCamera_ShowOwnerPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.ZoomOut
// (Native, Public)

void UEFFreeCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFFreeCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.ZoomIn
// (Native, Public)

void UEFFreeCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFFreeCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.UpdateCamera
// (Native, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AEFPlayerCamera*         CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UEFFreeCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFFreeCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFInteractionCamera.UpdateCamera
// (Native, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AEFPlayerCamera*         CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UEFInteractionCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFInteractionCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFInteractionCamera.GetCurrentFOV
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFInteractionCamera::GetCurrentFOV()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFInteractionCamera_GetCurrentFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFIsometricCamera.SetOverrideIsometricZoomStep
// (Native, Public)
// Parameters:
// int                            InTableId                      (Parm)

void UEFIsometricCamera::SetOverrideIsometricZoomStep(int InTableId)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_SetOverrideIsometricZoomStep_Params params;
	params.InTableId = InTableId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetFixedCameraInterpSpeed
// (Native, Public)
// Parameters:
// float                          speedXY                        (Parm)
// float                          speedZ                         (Parm)

void UEFIsometricCamera::SetFixedCameraInterpSpeed(float speedXY, float speedZ)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_SetFixedCameraInterpSpeed_Params params;
	params.speedXY = speedXY;
	params.speedZ = speedZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.IsFixedCameraMode
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFIsometricCamera::IsFixedCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_IsFixedCameraMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFIsometricCamera.ResetFixedCamera
// (Native, Public)

void UEFIsometricCamera::ResetFixedCamera()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_ResetFixedCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetFixedLookAtPos
// (Native, Public)
// Parameters:
// struct FVector                 InPos                          (Parm)

void UEFIsometricCamera::SetFixedLookAtPos(const struct FVector& InPos)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_SetFixedLookAtPos_Params params;
	params.InPos = InPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetCurIsometricZoomStep
// (Native, Public)
// Parameters:
// int                            iClassID                       (Parm)

void UEFIsometricCamera::SetCurIsometricZoomStep(int iClassID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_SetCurIsometricZoomStep_Params params;
	params.iClassID = iClassID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.UpdateCamera
// (Native, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AEFPlayerCamera*         CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UEFIsometricCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFIsometricCamera.OnBecomeActive
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class UEFCameraBase*           OldCamera                      (Parm)

void UEFIsometricCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.ActivateBlendingStyle
// (Native, Public)
// Parameters:
// class UEFCameraBase*           InOldCamera                    (Parm)

void UEFIsometricCamera::ActivateBlendingStyle(class UEFCameraBase* InOldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_ActivateBlendingStyle_Params params;
	params.InOldCamera = InOldCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetContentsSettingTable
// (Native, Public)
// Parameters:
// int                            InTableId                      (Parm)

void UEFIsometricCamera::SetContentsSettingTable(int InTableId)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_SetContentsSettingTable_Params params;
	params.InTableId = InTableId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetSettingTable
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            InTableId                      (Parm)
// bool                           InImmediateFlag                (OptionalParm, Parm)

void UEFIsometricCamera::SetSettingTable(int InTableId, bool InImmediateFlag)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_SetSettingTable_Params params;
	params.InTableId = InTableId;
	params.InImmediateFlag = InImmediateFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.RefineFOV
// (Native, Public)
// Parameters:
// float                          FOV                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFIsometricCamera::RefineFOV(float FOV)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_RefineFOV_Params params;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFIsometricCamera.InActivateSkeletalMeshForceLOD
// (Native, Public)
// Parameters:
// class UEFCameraBase*           InNextCamera                   (Parm)

void UEFIsometricCamera::InActivateSkeletalMeshForceLOD(class UEFCameraBase* InNextCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_InActivateSkeletalMeshForceLOD_Params params;
	params.InNextCamera = InNextCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.ActivateSkeletalMeshForceLOD
// (Native, Public)

void UEFIsometricCamera::ActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_ActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.ChangeZoomStep
// (Native, Public)
// Parameters:
// int                            iStep                          (Parm)

void UEFIsometricCamera::ChangeZoomStep(int iStep)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_ChangeZoomStep_Params params;
	params.iStep = iStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.CheckZoom
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFIsometricCamera::CheckZoom()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_CheckZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFIsometricCamera.ZoomOut
// (Native, Public)

void UEFIsometricCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.ZoomIn
// (Native, Public)

void UEFIsometricCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.ResetInterpolation
// (Native, Public)

void UEFIsometricCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFIsometricCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCamera.UpdateRotation
// (Defined, Public, HasDefaults)

void UEFMacroCamera::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFMacroCamera_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCamera.ZoomOut
// (Native, Public)

void UEFMacroCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFMacroCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCamera.ZoomIn
// (Native, Public)

void UEFMacroCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFMacroCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCamera.UpdateCamera
// (Native, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AEFPlayerCamera*         CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UEFMacroCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFMacroCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFPanningCamera.OnBecomeInActive
// (Defined, Event, Public)
// Parameters:
// class UEFCameraBase*           NewCamera                      (Parm)

void UEFPanningCamera::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFPanningCamera_OnBecomeInActive_Params params;
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.OnBecomeActive
// (Defined, Event, Public)
// Parameters:
// class UEFCameraBase*           OldCamera                      (Parm)

void UEFPanningCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFPanningCamera_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.EndPanningCamera
// (Native, Public)

void UEFPanningCamera::EndPanningCamera()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFPanningCamera_EndPanningCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.StartPanningCamera
// (Native, Public)

void UEFPanningCamera::StartPanningCamera()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFPanningCamera_StartPanningCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.ZoomOut
// (Native, Public)

void UEFPanningCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFPanningCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.ZoomIn
// (Native, Public)

void UEFPanningCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFPanningCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.UpdateCamera
// (Native, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AEFPlayerCamera*         CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UEFPanningCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFPanningCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFSelfCamera.SetContentsSettingTable
// (Native, Public)
// Parameters:
// int                            InTableId                      (Parm)

void UEFSelfCamera::SetContentsSettingTable(int InTableId)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSelfCamera_SetContentsSettingTable_Params params;
	params.InTableId = InTableId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSelfCamera.SetSettingTable
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            InTableId                      (Parm)
// bool                           InImmediateFlag                (OptionalParm, Parm)

void UEFSelfCamera::SetSettingTable(int InTableId, bool InImmediateFlag)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSelfCamera_SetSettingTable_Params params;
	params.InTableId = InTableId;
	params.InImmediateFlag = InImmediateFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSelfCamera.ChangeZoomStep
// (Native, Public)
// Parameters:
// int                            iStep                          (Parm)

void UEFSelfCamera::ChangeZoomStep(int iStep)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSelfCamera_ChangeZoomStep_Params params;
	params.iStep = iStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSelfCamera.CheckZoom
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFSelfCamera::CheckZoom()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSelfCamera_CheckZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFSelfCamera.ZoomOut
// (Native, Public)

void UEFSelfCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSelfCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSelfCamera.ZoomIn
// (Native, Public)

void UEFSelfCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSelfCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSelfCamera.UpdateCamera
// (Native, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AEFPlayerCamera*         CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UEFSelfCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSelfCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFSelfCamera.ResetInterpolation
// (Native, Public)

void UEFSelfCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSelfCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSelfCamera.OnBecomeInActive
// (Defined, Event, Public)
// Parameters:
// class UEFCameraBase*           NewCamera                      (Parm)

void UEFSelfCamera::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSelfCamera_OnBecomeInActive_Params params;
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSelfCamera.OnBecomeActive
// (Defined, Event, Public)
// Parameters:
// class UEFCameraBase*           OldCamera                      (Parm)

void UEFSelfCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSelfCamera_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSelfCamera.InActivateOperationMode
// (Native, Public)
// Parameters:
// class UEFCameraBase*           OldCamera                      (Parm)

void UEFSelfCamera::InActivateOperationMode(class UEFCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSelfCamera_InActivateOperationMode_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSelfCamera.ActivateOperationMode
// (Native, Public)
// Parameters:
// class UEFCameraBase*           OldCamera                      (Parm)

void UEFSelfCamera::ActivateOperationMode(class UEFCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSelfCamera_ActivateOperationMode_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFThirdPersonCamera.UpdateRotation
// (Defined, Public, HasDefaults)

void UEFThirdPersonCamera::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFThirdPersonCamera_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFThirdPersonCamera.ZoomOut
// (Native, Public)

void UEFThirdPersonCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFThirdPersonCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFThirdPersonCamera.ZoomIn
// (Native, Public)

void UEFThirdPersonCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFThirdPersonCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFThirdPersonCamera.UpdateCamera
// (Native, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AEFPlayerCamera*         CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UEFThirdPersonCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFThirdPersonCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFThirdPersonCamera.GetCurrentFOV
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFThirdPersonCamera::GetCurrentFOV()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFThirdPersonCamera_GetCurrentFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFTopViewCamera.UpdateCamera
// (Native, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AEFPlayerCamera*         CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UEFTopViewCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTopViewCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFTopViewCamera.OnBecomeInActive
// (Defined, Event, Public)
// Parameters:
// class UEFCameraBase*           NewCamera                      (Parm)

void UEFTopViewCamera::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTopViewCamera_OnBecomeInActive_Params params;
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.OnBecomeActive
// (Defined, Event, Public)
// Parameters:
// class UEFCameraBase*           OldCamera                      (Parm)

void UEFTopViewCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTopViewCamera_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ProcessInActivateCameraType
// (Native, Public)
// Parameters:
// class UEFCameraBase*           OldCamera                      (Parm)

void UEFTopViewCamera::ProcessInActivateCameraType(class UEFCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTopViewCamera_ProcessInActivateCameraType_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ProcessActivateCameraType
// (Native, Public)
// Parameters:
// class UEFCameraBase*           OldCamera                      (Parm)

void UEFTopViewCamera::ProcessActivateCameraType(class UEFCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTopViewCamera_ProcessActivateCameraType_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.SetContentsSettingTable
// (Native, Public)
// Parameters:
// int                            InTableId                      (Parm)

void UEFTopViewCamera::SetContentsSettingTable(int InTableId)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTopViewCamera_SetContentsSettingTable_Params params;
	params.InTableId = InTableId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.SetSettingTable
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            InTableId                      (Parm)
// bool                           InImmediateFlag                (OptionalParm, Parm)

void UEFTopViewCamera::SetSettingTable(int InTableId, bool InImmediateFlag)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTopViewCamera_SetSettingTable_Params params;
	params.InTableId = InTableId;
	params.InImmediateFlag = InImmediateFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.InActivateSkeletalMeshForceLOD
// (Native, Public)
// Parameters:
// class UEFCameraBase*           InNextCamera                   (Parm)

void UEFTopViewCamera::InActivateSkeletalMeshForceLOD(class UEFCameraBase* InNextCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTopViewCamera_InActivateSkeletalMeshForceLOD_Params params;
	params.InNextCamera = InNextCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ActivateSkeletalMeshForceLOD
// (Native, Public)

void UEFTopViewCamera::ActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTopViewCamera_ActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ChangeZoomStep
// (Native, Public)
// Parameters:
// int                            iStep                          (Parm)

void UEFTopViewCamera::ChangeZoomStep(int iStep)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTopViewCamera_ChangeZoomStep_Params params;
	params.iStep = iStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.CheckZoom
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFTopViewCamera::CheckZoom()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTopViewCamera_CheckZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFTopViewCamera.ZoomOut
// (Native, Public)

void UEFTopViewCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTopViewCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ZoomIn
// (Native, Public)

void UEFTopViewCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTopViewCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ResetInterpolation
// (Native, Public)

void UEFTopViewCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTopViewCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.SetFixedCameraInterpSpeed
// (Native, Public)
// Parameters:
// float                          speedXY                        (Parm)
// float                          speedZ                         (Parm)

void UEFTPSCamera::SetFixedCameraInterpSpeed(float speedXY, float speedZ)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTPSCamera_SetFixedCameraInterpSpeed_Params params;
	params.speedXY = speedXY;
	params.speedZ = speedZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.IsFixedCameraMode
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFTPSCamera::IsFixedCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTPSCamera_IsFixedCameraMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFTPSCamera.ResetFixedCamera
// (Native, Public)

void UEFTPSCamera::ResetFixedCamera()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTPSCamera_ResetFixedCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.SetFixedLookAtPos
// (Native, Public)
// Parameters:
// struct FVector                 InPos                          (Parm)

void UEFTPSCamera::SetFixedLookAtPos(const struct FVector& InPos)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTPSCamera_SetFixedLookAtPos_Params params;
	params.InPos = InPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.UpdateCamera
// (Native, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AEFPlayerCamera*         CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UEFTPSCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTPSCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFTPSCamera.OnBecomeActive
// (Defined, Event, Public)
// Parameters:
// class UEFCameraBase*           OldCamera                      (Parm)

void UEFTPSCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTPSCamera_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.SetContentsSettingTable
// (Native, Public)
// Parameters:
// int                            InTableId                      (Parm)

void UEFTPSCamera::SetContentsSettingTable(int InTableId)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTPSCamera_SetContentsSettingTable_Params params;
	params.InTableId = InTableId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.SetSettingTable
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            InTableId                      (Parm)
// bool                           InImmediateFlag                (OptionalParm, Parm)

void UEFTPSCamera::SetSettingTable(int InTableId, bool InImmediateFlag)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTPSCamera_SetSettingTable_Params params;
	params.InTableId = InTableId;
	params.InImmediateFlag = InImmediateFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.InActivateSkeletalMeshForceLOD
// (Native, Public)
// Parameters:
// class UEFCameraBase*           InNextCamera                   (Parm)

void UEFTPSCamera::InActivateSkeletalMeshForceLOD(class UEFCameraBase* InNextCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTPSCamera_InActivateSkeletalMeshForceLOD_Params params;
	params.InNextCamera = InNextCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.ActivateSkeletalMeshForceLOD
// (Native, Public)

void UEFTPSCamera::ActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTPSCamera_ActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.ChangeZoomStep
// (Native, Public)
// Parameters:
// int                            iStep                          (Parm)

void UEFTPSCamera::ChangeZoomStep(int iStep)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTPSCamera_ChangeZoomStep_Params params;
	params.iStep = iStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.CheckZoom
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFTPSCamera::CheckZoom()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTPSCamera_CheckZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFTPSCamera.ZoomOut
// (Native, Public)

void UEFTPSCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTPSCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.ZoomIn
// (Native, Public)

void UEFTPSCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTPSCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.ResetInterpolation
// (Native, Public)

void UEFTPSCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFTPSCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolumeCamera.OnBecomeInActive
// (Defined, Event, Public)
// Parameters:
// class UEFCameraBase*           NewCamera                      (Parm)

void UEFVolumeCamera::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFVolumeCamera_OnBecomeInActive_Params params;
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolumeCamera.OnBecomeActive
// (Defined, Event, Public)
// Parameters:
// class UEFCameraBase*           OldCamera                      (Parm)

void UEFVolumeCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFVolumeCamera_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolumeCamera.NotifyActivate
// (Native, Public)
// Parameters:
// bool                           InActivated                    (Parm)

void UEFVolumeCamera::NotifyActivate(bool InActivated)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFVolumeCamera_NotifyActivate_Params params;
	params.InActivated = InActivated;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolumeCamera.SetContentsSettingTable
// (Native, Public)
// Parameters:
// int                            InTableId                      (Parm)

void UEFVolumeCamera::SetContentsSettingTable(int InTableId)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFVolumeCamera_SetContentsSettingTable_Params params;
	params.InTableId = InTableId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolumeCamera.SetSettingTable
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            InTableId                      (Parm)
// bool                           InImmediateFlag                (OptionalParm, Parm)

void UEFVolumeCamera::SetSettingTable(int InTableId, bool InImmediateFlag)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFVolumeCamera_SetSettingTable_Params params;
	params.InTableId = InTableId;
	params.InImmediateFlag = InImmediateFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolumeCamera.InActivateSkeletalMeshForceLOD
// (Native, Public)
// Parameters:
// class UEFCameraBase*           InNextCamera                   (Parm)

void UEFVolumeCamera::InActivateSkeletalMeshForceLOD(class UEFCameraBase* InNextCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFVolumeCamera_InActivateSkeletalMeshForceLOD_Params params;
	params.InNextCamera = InNextCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolumeCamera.ActivateSkeletalMeshForceLOD
// (Native, Public)

void UEFVolumeCamera::ActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFVolumeCamera_ActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolumeCamera.ChangeZoomStep
// (Native, Public)
// Parameters:
// int                            iStep                          (Parm)

void UEFVolumeCamera::ChangeZoomStep(int iStep)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFVolumeCamera_ChangeZoomStep_Params params;
	params.iStep = iStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolumeCamera.CheckZoom
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFVolumeCamera::CheckZoom()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFVolumeCamera_CheckZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFVolumeCamera.ZoomOut
// (Native, Public)

void UEFVolumeCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFVolumeCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolumeCamera.ZoomIn
// (Native, Public)

void UEFVolumeCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFVolumeCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolumeCamera.UpdateCamera
// (Native, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AEFPlayerCamera*         CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UEFVolumeCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFVolumeCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFVolumeCamera.ResetInterpolation
// (Native, Public)

void UEFVolumeCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFVolumeCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolumeCamera.ActivateBlendingStyle
// (Native, Public)
// Parameters:
// class UEFCameraBase*           InOldCamera                    (Parm)

void UEFVolumeCamera::ActivateBlendingStyle(class UEFCameraBase* InOldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFVolumeCamera_ActivateBlendingStyle_Params params;
	params.InOldCamera = InOldCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.SetFixedLookAtPos
// (Native, Public)
// Parameters:
// struct FVector                 InPos                          (Parm)

void UEFWatchCamera::SetFixedLookAtPos(const struct FVector& InPos)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFWatchCamera_SetFixedLookAtPos_Params params;
	params.InPos = InPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.SetWatchCameraType
// (Native, Public)
// Parameters:
// TEnumAsByte<EFWatchCameraMode> InType                         (Parm)

void UEFWatchCamera::SetWatchCameraType(TEnumAsByte<EFWatchCameraMode> InType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFWatchCamera_SetWatchCameraType_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.UpdateCamera
// (Native, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AEFPlayerCamera*         CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UEFWatchCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFWatchCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFWatchCamera.OnBecomeActive
// (Defined, Event, Public)
// Parameters:
// class UEFCameraBase*           OldCamera                      (Parm)

void UEFWatchCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFWatchCamera_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.ZoomOut
// (Native, Public)

void UEFWatchCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFWatchCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.ZoomIn
// (Native, Public)

void UEFWatchCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFWatchCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.AddCameraShakeGame
// (Defined, HasOptionalParms, Public)
// Parameters:
// class UCameraShake*            NewShake                       (Parm)
// float                          Scale                          (Parm)
// struct FString                 ShakeType                      (Parm, NeedCtorLink)
// TEnumAsByte<ECameraAnimPlaySpace> PlaySpace                      (OptionalParm, Parm)
// struct FRotator                UserPlaySpaceRot               (OptionalParm, Parm)

void UEFCameraModifier_CameraShake::AddCameraShakeGame(class UCameraShake* NewShake, float Scale, const struct FString& ShakeType, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraModifier_CameraShake_AddCameraShakeGame_Params params;
	params.NewShake = NewShake;
	params.Scale = Scale;
	params.ShakeType = ShakeType;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.RemoveGameCameraShake
// (Defined, Public)
// Parameters:
// class UCameraShake*            Shake                          (Parm)
// struct FString                 ShakeType                      (Parm, NeedCtorLink)

void UEFCameraModifier_CameraShake::RemoveGameCameraShake(class UCameraShake* Shake, const struct FString& ShakeType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraModifier_CameraShake_RemoveGameCameraShake_Params params;
	params.Shake = Shake;
	params.ShakeType = ShakeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.OnRemoveGameCameraShake
// (Defined, Event, Public)
// Parameters:
// class UCameraShake*            Shake                          (Parm)
// struct FString                 ShakeType                      (Parm, NeedCtorLink)

void UEFCameraModifier_CameraShake::OnRemoveGameCameraShake(class UCameraShake* Shake, const struct FString& ShakeType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraModifier_CameraShake_OnRemoveGameCameraShake_Params params;
	params.Shake = Shake;
	params.ShakeType = ShakeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.OnAddGameCameraShake
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class UCameraShake*            NewShake                       (Parm)
// float                          Scale                          (Parm)
// struct FString                 ShakeType                      (Parm, NeedCtorLink)
// TEnumAsByte<ECameraAnimPlaySpace> PlaySpace                      (OptionalParm, Parm)
// struct FRotator                UserPlaySpaceRot               (OptionalParm, Parm)

void UEFCameraModifier_CameraShake::OnAddGameCameraShake(class UCameraShake* NewShake, float Scale, const struct FString& ShakeType, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraModifier_CameraShake_OnAddGameCameraShake_Params params;
	params.NewShake = NewShake;
	params.Scale = Scale;
	params.ShakeType = ShakeType;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.ModifyCamera
// (Native, Public, HasOutParms)
// Parameters:
// class ACamera*                 Camera                         (Parm)
// float                          DeltaTime                      (Parm)
// struct FTPOV                   OutPOV                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFCameraModifier_CameraShake::ModifyCamera(class ACamera* Camera, float DeltaTime, struct FTPOV* OutPOV)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraModifier_CameraShake_ModifyCamera_Params params;
	params.Camera = Camera;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;

	return params.ReturnValue;
}


// Function EFGame.EFCameraModifier_CameraShake.RemoveAllEFViewShakes
// (Native, Public)

void UEFCameraModifier_CameraShake::RemoveAllEFViewShakes()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraModifier_CameraShake_RemoveAllEFViewShakes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.RemoveEFViewShake
// (Native, Public)
// Parameters:
// struct FEFCameraViewShakePlayID InPlayID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFCameraModifier_CameraShake::RemoveEFViewShake(const struct FEFCameraViewShakePlayID& InPlayID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraModifier_CameraShake_RemoveEFViewShake_Params params;
	params.InPlayID = InPlayID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFCameraModifier_CameraShake.AddEFCameraViewShake
// (Native, HasOptionalParms, Public)
// Parameters:
// class UEFCameraViewShake*      InShake                        (Parm)
// class UEFCameraViewShakeAnim*  InAnim                         (Parm)
// bool                           InLocalPlayer                  (Parm)
// float                          InPlayrate                     (OptionalParm, Parm)
// struct FVector                 InLocation                     (OptionalParm, Parm)
// class AActor*                  InProvidedActor                (OptionalParm, Parm)
// TEnumAsByte<ECameraAnimPlaySpace> InPlaySpace                    (OptionalParm, Parm)
// struct FRotator                InUserPlaySpaceRot             (OptionalParm, Parm)
// struct FEFCameraViewShakePlayID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEFCameraViewShakePlayID UEFCameraModifier_CameraShake::AddEFCameraViewShake(class UEFCameraViewShake* InShake, class UEFCameraViewShakeAnim* InAnim, bool InLocalPlayer, float InPlayrate, const struct FVector& InLocation, class AActor* InProvidedActor, TEnumAsByte<ECameraAnimPlaySpace> InPlaySpace, const struct FRotator& InUserPlaySpaceRot)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraModifier_CameraShake_AddEFCameraViewShake_Params params;
	params.InShake = InShake;
	params.InAnim = InAnim;
	params.InLocalPlayer = InLocalPlayer;
	params.InPlayrate = InPlayrate;
	params.InLocation = InLocation;
	params.InProvidedActor = InProvidedActor;
	params.InPlaySpace = InPlaySpace;
	params.InUserPlaySpaceRot = InUserPlaySpaceRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFCameraModifier_CameraShake.RemoveAllCameraShakes
// (Defined, Public)

void UEFCameraModifier_CameraShake::RemoveAllCameraShakes()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraModifier_CameraShake_RemoveAllCameraShakes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraShakePlayGroup.UpdateViewShake
// (Native, Public, HasOutParms)
// Parameters:
// class ACamera*                 InCameraOwner                  (Parm)
// float                          InDeltaTime                    (Parm)
// float                          InModifierAlpha                (Parm)
// struct FTPOV                   OutPOV                         (Parm, OutParm)

void UEFCameraShakePlayGroup::UpdateViewShake(class ACamera* InCameraOwner, float InDeltaTime, float InModifierAlpha, struct FTPOV* OutPOV)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraShakePlayGroup_UpdateViewShake_Params params;
	params.InCameraOwner = InCameraOwner;
	params.InDeltaTime = InDeltaTime;
	params.InModifierAlpha = InModifierAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;
}


// Function EFGame.EFCameraShakePlayGroup.PreUpdateViewShake
// (Native, Public, HasOutParms)
// Parameters:
// class ACamera*                 InCameraOwner                  (Parm)
// struct FVector                 InPlayerLocation               (Const, Parm, OutParm)
// float                          InDeltaTime                    (Parm)
// TEnumAsByte<EFShakePlayGroupState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFShakePlayGroupState> UEFCameraShakePlayGroup::PreUpdateViewShake(class ACamera* InCameraOwner, float InDeltaTime, struct FVector* InPlayerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraShakePlayGroup_PreUpdateViewShake_Params params;
	params.InCameraOwner = InCameraOwner;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InPlayerLocation != nullptr)
		*InPlayerLocation = params.InPlayerLocation;

	return params.ReturnValue;
}


// Function EFGame.EFCameraShakePlayGroup.RemoveAllViewShake
// (Native, Public)
// Parameters:
// class ACamera*                 InCameraOwner                  (Parm)

void UEFCameraShakePlayGroup::RemoveAllViewShake(class ACamera* InCameraOwner)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraShakePlayGroup_RemoveAllViewShake_Params params;
	params.InCameraOwner = InCameraOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraShakePlayGroup.RemoveViewShake
// (Native, HasOptionalParms, Public)
// Parameters:
// class ACamera*                 InCameraOwner                  (Parm)
// int                            InShakeID                      (Parm)
// bool                           InForceStop                    (OptionalParm, Parm)

void UEFCameraShakePlayGroup::RemoveViewShake(class ACamera* InCameraOwner, int InShakeID, bool InForceStop)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraShakePlayGroup_RemoveViewShake_Params params;
	params.InCameraOwner = InCameraOwner;
	params.InShakeID = InShakeID;
	params.InForceStop = InForceStop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraShakePlayGroup.AddViewShakeInstance
// (Native, Protected, HasOutParms)
// Parameters:
// struct FEFShakeInstance        OutShakeInstance               (Parm, OutParm)
// class ACamera*                 InCameraOwner                  (Parm)
// class UEFCameraViewShake*      InShake                        (Parm)
// class UEFCameraViewShakeAnim*  InAnim                         (Parm)
// int                            InAmplitudeSize                (Parm)
// float                          InPlayrate                     (Parm)
// struct FVector                 InLocation                     (Parm)
// TEnumAsByte<ECameraAnimPlaySpace> InPlaySpace                    (Parm)
// struct FRotator                InUserPlaySpaceRot             (Parm)

void UEFCameraShakePlayGroup::AddViewShakeInstance(class ACamera* InCameraOwner, class UEFCameraViewShake* InShake, class UEFCameraViewShakeAnim* InAnim, int InAmplitudeSize, float InPlayrate, const struct FVector& InLocation, TEnumAsByte<ECameraAnimPlaySpace> InPlaySpace, const struct FRotator& InUserPlaySpaceRot, struct FEFShakeInstance* OutShakeInstance)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraShakePlayGroup_AddViewShakeInstance_Params params;
	params.InCameraOwner = InCameraOwner;
	params.InShake = InShake;
	params.InAnim = InAnim;
	params.InAmplitudeSize = InAmplitudeSize;
	params.InPlayrate = InPlayrate;
	params.InLocation = InLocation;
	params.InPlaySpace = InPlaySpace;
	params.InUserPlaySpaceRot = InUserPlaySpaceRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutShakeInstance != nullptr)
		*OutShakeInstance = params.OutShakeInstance;
}


// Function EFGame.EFCameraShakePlayGroup.AddViewShake
// (Native, HasOptionalParms, Public)
// Parameters:
// class ACamera*                 InCameraOwner                  (Parm)
// class UEFCameraViewShake*      InShake                        (Parm)
// class UEFCameraViewShakeAnim*  InAnim                         (Parm)
// float                          InPlayrate                     (Parm)
// struct FVector                 InLocation                     (Parm)
// class AActor*                  InProvidedActor                (OptionalParm, Parm)
// TEnumAsByte<ECameraAnimPlaySpace> InPlaySpace                    (OptionalParm, Parm)
// struct FRotator                InUserPlaySpaceRot             (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFCameraShakePlayGroup::AddViewShake(class ACamera* InCameraOwner, class UEFCameraViewShake* InShake, class UEFCameraViewShakeAnim* InAnim, float InPlayrate, const struct FVector& InLocation, class AActor* InProvidedActor, TEnumAsByte<ECameraAnimPlaySpace> InPlaySpace, const struct FRotator& InUserPlaySpaceRot)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraShakePlayGroup_AddViewShake_Params params;
	params.InCameraOwner = InCameraOwner;
	params.InShake = InShake;
	params.InAnim = InAnim;
	params.InPlayrate = InPlayrate;
	params.InLocation = InLocation;
	params.InProvidedActor = InProvidedActor;
	params.InPlaySpace = InPlaySpace;
	params.InUserPlaySpaceRot = InUserPlaySpaceRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFCameraViewShake.GetAmplitudeSize
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFCameraViewShake::GetAmplitudeSize()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFCameraViewShake_GetAmplitudeSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFInputRotCameraActor.GetCameraView
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FTPOV                   OutPOV                         (Parm, OutParm)

void AEFInputRotCameraActor::GetCameraView(float DeltaTime, struct FTPOV* OutPOV)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFInputRotCameraActor_GetCameraView_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;
}


// Function EFGame.EFInputRotCameraActor.EndViewTarget
// (Defined, Event, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)

void AEFInputRotCameraActor::EndViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFInputRotCameraActor_EndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInputRotCameraActor.BecomeViewTarget
// (Defined, Event, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)

void AEFInputRotCameraActor::BecomeViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFInputRotCameraActor_BecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInputRotCameraActor.ActivateInputRotMode
// (Native, Public)
// Parameters:
// bool                           InFlag                         (Parm)
// class APlayerController*       PC                             (Parm)

void AEFInputRotCameraActor::ActivateInputRotMode(bool InFlag, class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFInputRotCameraActor_ActivateInputRotMode_Params params;
	params.InFlag = InFlag;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCameraSplineActor.BreakAllConnections
// (Native, Public)

void AEFMacroCameraSplineActor::BreakAllConnections()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFMacroCameraSplineActor_BreakAllConnections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCameraSplineActor.BreakConnectionTo
// (Native, Public)
// Parameters:
// class AEFMacroCameraSplineActor* NextActor                      (Parm)

void AEFMacroCameraSplineActor::BreakConnectionTo(class AEFMacroCameraSplineActor* NextActor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFMacroCameraSplineActor_BreakConnectionTo_Params params;
	params.NextActor = NextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCameraSplineActor.IsConnectedTo
// (Native, Public)
// Parameters:
// class AEFMacroCameraSplineActor* NextActor                      (Parm)
// bool                           bCheckForDisableDestination    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AEFMacroCameraSplineActor::IsConnectedTo(class AEFMacroCameraSplineActor* NextActor, bool bCheckForDisableDestination)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFMacroCameraSplineActor_IsConnectedTo_Params params;
	params.NextActor = NextActor;
	params.bCheckForDisableDestination = bCheckForDisableDestination;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFMacroCameraSplineActor.AddConnectionTo
// (Native, Public)
// Parameters:
// class AEFMacroCameraSplineActor* NextActor                      (Parm)

void AEFMacroCameraSplineActor::AddConnectionTo(class AEFMacroCameraSplineActor* NextActor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFMacroCameraSplineActor_AddConnectionTo_Params params;
	params.NextActor = NextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCameraSplineActor.UpdateConnectedSplineComponents
// (Native, Public)
// Parameters:
// bool                           bFinish                        (Parm)

void AEFMacroCameraSplineActor::UpdateConnectedSplineComponents(bool bFinish)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFMacroCameraSplineActor_UpdateConnectedSplineComponents_Params params;
	params.bFinish = bFinish;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCameraSplineActor.UpdateSplineComponents
// (Native, Public)

void AEFMacroCameraSplineActor::UpdateSplineComponents()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFMacroCameraSplineActor_UpdateSplineComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.LoadOutlineData
// (Native, Public)

void AEFPlayerCamera::LoadOutlineData()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_LoadOutlineData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.UpdateTranslucentActorBlend
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AEFPlayerCamera::UpdateTranslucentActorBlend(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_UpdateTranslucentActorBlend_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.UpdateOccludedActorBlend
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AEFPlayerCamera::UpdateOccludedActorBlend(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_UpdateOccludedActorBlend_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AEFPlayerCamera::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function EFGame.EFPlayerCamera.FOV
// (Defined, Event, Public)
// Parameters:
// float                          NewFOV                         (Parm)

void AEFPlayerCamera::FOV(float NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_FOV_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.AdjustViewportFOV
// (Defined, Public, HasOutParms)
// Parameters:
// float                          InOutFOV                       (Parm, OutParm)

void AEFPlayerCamera::AdjustViewportFOV(float* InOutFOV)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_AdjustViewportFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutFOV != nullptr)
		*InOutFOV = params.InOutFOV;
}


// Function EFGame.EFPlayerCamera.SaveCameraValue
// (Defined, Event, Public)

void AEFPlayerCamera::SaveCameraValue()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_SaveCameraValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.SetCameraType
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// int                            InType                         (Parm)
// bool                           bUpdateValue                   (OptionalParm, Parm)

void AEFPlayerCamera::SetCameraType(int InType, bool bUpdateValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_SetCameraType_Params params;
	params.InType = InType;
	params.bUpdateValue = bUpdateValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.UpdateRotation
// (Defined, Event, Public)

void AEFPlayerCamera::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ZoomOut
// (Native, Event, Public)

void AEFPlayerCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ZoomIn
// (Native, Event, Public)

void AEFPlayerCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.UpdateViewTarget
// (Defined, Public, HasOutParms)
// Parameters:
// struct FTViewTarget            OutVT                          (Parm, OutParm)
// float                          DeltaTime                      (Parm)

void AEFPlayerCamera::UpdateViewTarget(float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_UpdateViewTarget_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function EFGame.EFPlayerCamera.DoUpdateCamera
// (Defined, Simulated, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AEFPlayerCamera::DoUpdateCamera(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_DoUpdateCamera_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ProcessTestInputCameraActor
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ACameraActor*            InCamera                       (Parm)
// struct FTPOV                   OutPOV                         (Parm, OutParm)

void AEFPlayerCamera::ProcessTestInputCameraActor(class ACameraActor* InCamera, struct FTPOV* OutPOV)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_ProcessTestInputCameraActor_Params params;
	params.InCamera = InCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;
}


// Function EFGame.EFPlayerCamera.DeactivateVolumeCamera
// (Native, Public)
// Parameters:
// class AActor*                  InTriggerActor                 (Parm)

void AEFPlayerCamera::DeactivateVolumeCamera(class AActor* InTriggerActor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_DeactivateVolumeCamera_Params params;
	params.InTriggerActor = InTriggerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ActivateVolumeCamera
// (Native, Public)
// Parameters:
// class AActor*                  InTriggerActor                 (Parm)

void AEFPlayerCamera::ActivateVolumeCamera(class AActor* InTriggerActor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_ActivateVolumeCamera_Params params;
	params.InTriggerActor = InTriggerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.RestoreCameraMode
// (Native, Public)

void AEFPlayerCamera::RestoreCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_RestoreCameraMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ChangeCameraMode
// (Native, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<ECameraStyle>      InEnum                         (Parm)
// bool                           InImmediateFlag                (OptionalParm, Parm)
// bool                           InBlendCameraMode              (OptionalParm, Parm)

void AEFPlayerCamera::ChangeCameraMode(TEnumAsByte<ECameraStyle> InEnum, bool InImmediateFlag, bool InBlendCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_ChangeCameraMode_Params params;
	params.InEnum = InEnum;
	params.InImmediateFlag = InImmediateFlag;
	params.InBlendCameraMode = InBlendCameraMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ChangeCameraContentsSetting
// (Native, Public)
// Parameters:
// int                            InTableId                      (Parm)

void AEFPlayerCamera::ChangeCameraContentsSetting(int InTableId)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_ChangeCameraContentsSetting_Params params;
	params.InTableId = InTableId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ChangeCameraZoomStep
// (Native, Public)
// Parameters:
// int                            InZoomStep                     (Parm)

void AEFPlayerCamera::ChangeCameraZoomStep(int InZoomStep)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_ChangeCameraZoomStep_Params params;
	params.InZoomStep = InZoomStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ChangeCameraSetting
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            InTableId                      (Parm)
// bool                           InImmediateFlag                (OptionalParm, Parm)
// bool                           InBlendCameraMode              (OptionalParm, Parm)

void AEFPlayerCamera::ChangeCameraSetting(int InTableId, bool InImmediateFlag, bool InBlendCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_ChangeCameraSetting_Params params;
	params.InTableId = InTableId;
	params.InImmediateFlag = InImmediateFlag;
	params.InBlendCameraMode = InBlendCameraMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ApplyVehicleFOVAngle
// (Native, Public, HasOutParms)
// Parameters:
// float                          OutFOV                         (Parm, OutParm)

void AEFPlayerCamera::ApplyVehicleFOVAngle(float* OutFOV)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_ApplyVehicleFOVAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFOV != nullptr)
		*OutFOV = params.OutFOV;
}


// Function EFGame.EFPlayerCamera.SetVehicleFOVAngle
// (Native, Public)
// Parameters:
// float                          InFOV                          (Parm)

void AEFPlayerCamera::SetVehicleFOVAngle(float InFOV)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_SetVehicleFOVAngle_Params params;
	params.InFOV = InFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ApplyCamOverrideFogSetting
// (Native, Public)

void AEFPlayerCamera::ApplyCamOverrideFogSetting()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_ApplyCamOverrideFogSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ProcessTargetCameraActorBlend
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AEFPlayerCamera::ProcessTargetCameraActorBlend(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_ProcessTargetCameraActorBlend_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ResetAttachCameraActor
// (Native, Public)

void AEFPlayerCamera::ResetAttachCameraActor()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_ResetAttachCameraActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.FindBestCameraType
// (Defined, Protected)
// Parameters:
// class AActor*                  CameraTarget                   (Parm)
// class UEFCameraBase*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UEFCameraBase* AEFPlayerCamera::FindBestCameraType(class AActor* CameraTarget)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_FindBestCameraType_Params params;
	params.CameraTarget = CameraTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPlayerCamera.GetCurrentCameraMode
// (Native, Public)
// Parameters:
// class UEFCameraBase*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UEFCameraBase* AEFPlayerCamera::GetCurrentCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_GetCurrentCameraMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPlayerCamera.CreateCamera
// (Defined, Protected)
// Parameters:
// class UClass*                  CameraClass                    (Parm)
// class UEFCameraBase*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UEFCameraBase* AEFPlayerCamera::CreateCamera(class UClass* CameraClass)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_CreateCamera_Params params;
	params.CameraClass = CameraClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPlayerCamera.PostBeginPlay
// (Defined, Public)

void AEFPlayerCamera::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.GetFOV
// (Defined, Event, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AEFPlayerCamera::GetFOV()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_GetFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPlayerCamera.GetCameraDistance
// (Defined, Event, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AEFPlayerCamera::GetCameraDistance()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_GetCameraDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPlayerCamera.Destroyed
// (Defined, Event, Public)

void AEFPlayerCamera::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.CalcVerticalFOV
// (Final, Native, Public, HasOutParms)
// Parameters:
// float                          OutFOV                         (Parm, OutParm)

void AEFPlayerCamera::CalcVerticalFOV(float* OutFOV)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPlayerCamera_CalcVerticalFOV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFOV != nullptr)
		*OutFOV = params.OutFOV;
}


// Function EFGame.EFEmitter.HideSelf
// (Defined, Simulated, Public)

void AEFEmitter::HideSelf()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFEmitter_HideSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEmitter.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AEFEmitter::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFEmitter_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentActionEmitter.ClearExtendPool
// (Simulated, Native, Public)
// Parameters:
// class UParticleSystemComponent* PSC                            (Parm, EditInline)

void AEFEnvironmentActionEmitter::ClearExtendPool(class UParticleSystemComponent* PSC)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFEnvironmentActionEmitter_ClearExtendPool_Params params;
	params.PSC = PSC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentActionEmitter.OnParticleSystemFinished
// (Simulated, Native, Public)
// Parameters:
// class UParticleSystemComponent* FinishedComponent              (Parm, EditInline)

void AEFEnvironmentActionEmitter::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFEnvironmentActionEmitter_OnParticleSystemFinished_Params params;
	params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSpawnedEmitter.HideBecauseFinished
// (Final, Defined, Public)
// Parameters:
// class UParticleSystemComponent* FinishedComponent              (Parm, EditInline)

void AEFSpawnedEmitter::HideBecauseFinished(class UParticleSystemComponent* FinishedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFSpawnedEmitter_HideBecauseFinished_Params params;
	params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSpawnedEmitter.ClearExtendPool
// (Simulated, Native, Public)
// Parameters:
// class UParticleSystemComponent* PSC                            (Parm, EditInline)

void AEFSpawnedEmitter::ClearExtendPool(class UParticleSystemComponent* PSC)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFSpawnedEmitter_ClearExtendPool_Params params;
	params.PSC = PSC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSpawnedEmitter.OnParticleSystemFinished
// (Simulated, Native, Public)
// Parameters:
// class UParticleSystemComponent* FinishedComponent              (Parm, EditInline)

void AEFSpawnedEmitter::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFSpawnedEmitter_OnParticleSystemFinished_Params params;
	params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEmitterPool.ClearPoolPSInfoComponents
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bClearActive                   (OptionalParm, Parm)

void AEFEmitterPool::ClearPoolPSInfoComponents(bool bClearActive)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFEmitterPool_ClearPoolPSInfoComponents_Params params;
	params.bClearActive = bClearActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEmitterPool.OnPSInfoFinished
// (Native, Public)
// Parameters:
// class UParticleSystemComponent* PSC                            (Parm, EditInline)

void AEFEmitterPool::OnPSInfoFinished(class UParticleSystemComponent* PSC)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFEmitterPool_OnPSInfoFinished_Params params;
	params.PSC = PSC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEmitterPool.ClearExtendPool
// (Native, Public)

void AEFEmitterPool::ClearExtendPool()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFEmitterPool_ClearExtendPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPickingEmitter.IsActivateEffect
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AEFPickingEmitter::IsActivateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPickingEmitter_IsActivateEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFPickingEmitter.DeactivateEffect
// (Native, Public)
// Parameters:
// bool                           bForceKill                     (Parm)

void AEFPickingEmitter::DeactivateEffect(bool bForceKill)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPickingEmitter_DeactivateEffect_Params params;
	params.bForceKill = bForceKill;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPickingEmitter.ActivateEffect
// (Native, Public)
// Parameters:
// class AActor*                  BaseActor                      (Parm)

void AEFPickingEmitter::ActivateEffect(class AActor* BaseActor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPickingEmitter_ActivateEffect_Params params;
	params.BaseActor = BaseActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPickingEmitter.OnParticleSystemFinished
// (Defined, Simulated, Public)
// Parameters:
// class UParticleSystemComponent* FinishedComponent              (Parm, EditInline)

void AEFPickingEmitter::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPickingEmitter_OnParticleSystemFinished_Params params;
	params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.Update
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFSeqAct_NPCController::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_NPCController_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFSeqAct_NPCController.Activated
// (Defined, Event, Public)

void UEFSeqAct_NPCController::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_NPCController_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.BackupMainMovingState
// (Native, Public)

void UEFSeqAct_NPCController::BackupMainMovingState()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_NPCController_BackupMainMovingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.SetEventMoveCompleteProcess
// (Native, Public)
// Parameters:
// TEnumAsByte<EUNM_SNPC_workCompletedState> swState                        (Parm)

void UEFSeqAct_NPCController::SetEventMoveCompleteProcess(TEnumAsByte<EUNM_SNPC_workCompletedState> swState)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_NPCController_SetEventMoveCompleteProcess_Params params;
	params.swState = swState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.SetMoving
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UEFSeqAct_NPCController::SetMoving(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_NPCController_SetMoving_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.SettingReady
// (Native, Public)
// Parameters:
// struct FSNPC_MovingState       CData                          (Parm, NeedCtorLink)

void UEFSeqAct_NPCController::SettingReady(const struct FSNPC_MovingState& CData)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_NPCController_SettingReady_Params params;
	params.CData = CData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.setPlayWaitAnimation
// (Native, Public)
// Parameters:
// struct FString                 aniName                        (Parm, NeedCtorLink)
// bool                           isLoop                         (Parm)
// float                          BlendTime                      (Parm)
// bool                           isRandomStart                  (Parm)

void UEFSeqAct_NPCController::setPlayWaitAnimation(const struct FString& aniName, bool isLoop, float BlendTime, bool isRandomStart)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_NPCController_setPlayWaitAnimation_Params params;
	params.aniName = aniName;
	params.isLoop = isLoop;
	params.BlendTime = BlendTime;
	params.isRandomStart = isRandomStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.setPlayAnimation
// (Native, Public)
// Parameters:
// TEnumAsByte<ENUM_SNPC_PlayAnimationName> aniEnumName                    (Parm)
// bool                           isLoop                         (Parm)
// float                          BlendTime                      (Parm)
// bool                           isRandomStart                  (Parm)

void UEFSeqAct_NPCController::setPlayAnimation(TEnumAsByte<ENUM_SNPC_PlayAnimationName> aniEnumName, bool isLoop, float BlendTime, bool isRandomStart)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_NPCController_setPlayAnimation_Params params;
	params.aniEnumName = aniEnumName;
	params.isLoop = isLoop;
	params.BlendTime = BlendTime;
	params.isRandomStart = isRandomStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.GetAnimationName
// (Native, Public)
// Parameters:
// TEnumAsByte<ENUM_SNPC_PlayAnimationName> typAnim                        (Parm)
// bool                           isSet                          (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UEFSeqAct_NPCController::GetAnimationName(TEnumAsByte<ENUM_SNPC_PlayAnimationName> typAnim, bool isSet)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_NPCController_GetAnimationName_Params params;
	params.typAnim = typAnim;
	params.isSet = isSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFSeqAct_NPCController.initial
// (Native, Public)

void UEFSeqAct_NPCController::initial()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_NPCController_initial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFChangePlayerCameraVolume.UnTouch
// (Native, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AEFChangePlayerCameraVolume::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFChangePlayerCameraVolume_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFChangePlayerCameraVolume.Touch
// (Native, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AEFChangePlayerCameraVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFChangePlayerCameraVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentInfoVolume.UnTouch
// (Native, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AEFEnvironmentInfoVolume::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFEnvironmentInfoVolume_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentInfoVolume.Touch
// (Native, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AEFEnvironmentInfoVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFEnvironmentInfoVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentInfoVolume.UpdateEnvironment
// (Native, HasOptionalParms, Public)
// Parameters:
// float                          InAlpha                        (Parm)
// bool                           bUpdateComponent               (OptionalParm, Parm)
// bool                           bIgnoreOverride                (OptionalParm, Parm)

void AEFEnvironmentInfoVolume::UpdateEnvironment(float InAlpha, bool bUpdateComponent, bool bIgnoreOverride)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFEnvironmentInfoVolume_UpdateEnvironment_Params params;
	params.InAlpha = InAlpha;
	params.bUpdateComponent = bUpdateComponent;
	params.bIgnoreOverride = bIgnoreOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentInfoVolume.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AEFEnvironmentInfoVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFEnvironmentInfoVolume_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPathBlockingVolume.StopsProjectile
// (Defined, Simulated, Public)
// Parameters:
// class AProjectile*             P                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AEFPathBlockingVolume::StopsProjectile(class AProjectile* P)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFPathBlockingVolume_StopsProjectile_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFTranslucentVolume.OnChangeTranslucentVolumeAction
// (Native, Public)
// Parameters:
// class UEFSeqAct_ChangeTranslucentVolumeAction* InSeqAction                    (Parm)

void AEFTranslucentVolume::OnChangeTranslucentVolumeAction(class UEFSeqAct_ChangeTranslucentVolumeAction* InSeqAction)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFTranslucentVolume_OnChangeTranslucentVolumeAction_Params params;
	params.InSeqAction = InSeqAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.GetStringINI
// (Defined, Public)
// Parameters:
// struct FString                 Type                           (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFGFxMoviePlayer::GetStringINI(const struct FString& Type)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMoviePlayer_GetStringINI_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxMoviePlayer.SetStringINI
// (Defined, Public, HasDefaults)
// Parameters:
// struct FString                 Type                           (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, NeedCtorLink)

void UEFGFxMoviePlayer::SetStringINI(const struct FString& Type, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMoviePlayer_SetStringINI_Params params;
	params.Type = Type;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.CreateArrayEx
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 SourceFile                     (OptionalParm, Parm, NeedCtorLink)
// int                            SourceLine                     (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UEFGFxMoviePlayer::CreateArrayEx(const struct FString& SourceFile, int SourceLine)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMoviePlayer_CreateArrayEx_Params params;
	params.SourceFile = SourceFile;
	params.SourceLine = SourceLine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxMoviePlayer.CreateObjectEx
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 ASClass                        (Parm, NeedCtorLink)
// class UClass*                  Type                           (OptionalParm, Parm)
// TArray<struct FASValue>        args                           (OptionalParm, Parm, NeedCtorLink)
// struct FString                 SourceFile                     (OptionalParm, Parm, NeedCtorLink)
// int                            SourceLine                     (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UEFGFxMoviePlayer::CreateObjectEx(const struct FString& ASClass, class UClass* Type, TArray<struct FASValue> args, const struct FString& SourceFile, int SourceLine)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMoviePlayer_CreateObjectEx_Params params;
	params.ASClass = ASClass;
	params.Type = Type;
	params.args = args;
	params.SourceFile = SourceFile;
	params.SourceLine = SourceLine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxMoviePlayer.PostAdvance
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UEFGFxMoviePlayer::PostAdvance(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMoviePlayer_PostAdvance_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.WidgetUnloaded
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFGFxMoviePlayer::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMoviePlayer_WidgetUnloaded_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxMoviePlayer.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFGFxMoviePlayer::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMoviePlayer_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxEditorMoviePlayer.Start
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           StartPaused                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFGFxEditorMoviePlayer::Start(bool StartPaused)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxEditorMoviePlayer_Start_Params params;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxMovieWidget.GetExternalTexture
// (Final, Native, Public)
// Parameters:
// struct FString                 Resource                       (Parm, NeedCtorLink)
// class UTexture*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture* UEFGFxMovieWidget::GetExternalTexture(const struct FString& Resource)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidget_GetExternalTexture_Params params;
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxMovieWidget.HasGFxObjectBinding
// (Final, Native, Public)
// Parameters:
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFGFxMovieWidget::HasGFxObjectBinding(class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidget_HasGFxObjectBinding_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxMovieWidget.DelGFxObjectBinding
// (Final, Native, Public)
// Parameters:
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFGFxMovieWidget::DelGFxObjectBinding(class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidget_DelGFxObjectBinding_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxMovieWidget.AddGFxObjectBinding
// (Final, Native, Public)
// Parameters:
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFGFxMovieWidget::AddGFxObjectBinding(class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidget_AddGFxObjectBinding_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxMovieWidget.SetVisible
// (Final, Native, Public)
// Parameters:
// bool                           bVisible                       (Parm)

void UEFGFxMovieWidget::SetVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidget_SetVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.GFxFristFrameCallback
// (Final, Native, Public)

void UEFGFxMovieWidget::GFxFristFrameCallback()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidget_GFxFristFrameCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.PostWidgetInit
// (Native, Event, Public)

void UEFGFxMovieWidget::PostWidgetInit()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidget_PostWidgetInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.Start
// (Native, Event, HasOptionalParms, Public)
// Parameters:
// bool                           StartPaused                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFGFxMovieWidget::Start(bool StartPaused)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidget_Start_Params params;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxMovieWidgetMain.ActivateFrame
// (Defined, Event, Public)
// Parameters:
// class UGFxObject*              FrameObject                    (Parm)
// bool                           ActivateWhenShow               (Parm)
// bool                           OnlyModal                      (Parm)

void UEFGFxMovieWidgetMain::ActivateFrame(class UGFxObject* FrameObject, bool ActivateWhenShow, bool OnlyModal)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidgetMain_ActivateFrame_Params params;
	params.FrameObject = FrameObject;
	params.ActivateWhenShow = ActivateWhenShow;
	params.OnlyModal = OnlyModal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseDoubleClick
// (Native, Public)
// Parameters:
// class UEFUISlot*               SlotObj                        (Parm)

void UEFGFxMovieWidgetMain::ARKSlotMouseDoubleClick(class UEFUISlot* SlotObj)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidgetMain_ARKSlotMouseDoubleClick_Params params;
	params.SlotObj = SlotObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseRightClick
// (Native, Public)
// Parameters:
// class UEFUISlot*               SlotObj                        (Parm)

void UEFGFxMovieWidgetMain::ARKSlotMouseRightClick(class UEFUISlot* SlotObj)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidgetMain_ARKSlotMouseRightClick_Params params;
	params.SlotObj = SlotObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseLeftClick
// (Native, Public)
// Parameters:
// class UEFUISlot*               SlotObj                        (Parm)

void UEFGFxMovieWidgetMain::ARKSlotMouseLeftClick(class UEFUISlot* SlotObj)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidgetMain_ARKSlotMouseLeftClick_Params params;
	params.SlotObj = SlotObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByName
// (Final, Native, Public)
// Parameters:
// struct FName                   WidgetPath                     (Parm)

void UEFGFxMovieWidgetMain::ClearBindWidgetByName(const struct FName& WidgetPath)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidgetMain_ClearBindWidgetByName_Params params;
	params.WidgetPath = WidgetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByWidget
// (Final, Native, Public)
// Parameters:
// class UGFxObject*              Widget                         (Parm)

void UEFGFxMovieWidgetMain::ClearBindWidgetByWidget(class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidgetMain_ClearBindWidgetByWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.UnBindWidget
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFGFxMovieWidgetMain::UnBindWidget(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidgetMain_UnBindWidget_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxMovieWidgetMain.BindWidget
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFGFxMovieWidgetMain::BindWidget(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidgetMain_BindWidget_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxMovieWidgetMain.WidgetUnloaded
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFGFxMovieWidgetMain::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidgetMain_WidgetUnloaded_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxMovieWidgetMain.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFGFxMovieWidgetMain::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxMovieWidgetMain_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIComponent.InvalidateSize
// (Final, Native, Public)

void UEFUIComponent::InvalidateSize()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_InvalidateSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.InvalidateData
// (Final, Native, Public)

void UEFUIComponent::InvalidateData()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_InvalidateData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.Invalidate
// (Final, Native, Public)
// Parameters:
// struct FString                 Keyword                        (Parm, NeedCtorLink)

void UEFUIComponent::Invalidate(const struct FString& Keyword)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_Invalidate_Params params;
	params.Keyword = Keyword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.ValidateNow
// (Final, Native, Public)

void UEFUIComponent::ValidateNow()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_ValidateNow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.HasFocus
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFUIComponent::HasFocus()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_HasFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIComponent.GetY
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFUIComponent::GetY()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_GetY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIComponent.SetY
// (Final, Native, Public)
// Parameters:
// float                          Y                              (Parm)

void UEFUIComponent::SetY(float Y)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_SetY_Params params;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetX
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFUIComponent::GetX()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_GetX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIComponent.SetX
// (Final, Native, Public)
// Parameters:
// float                          X                              (Parm)

void UEFUIComponent::SetX(float X)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_SetX_Params params;
	params.X = X;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetHeight
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFUIComponent::GetHeight()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_GetHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIComponent.SetHeight
// (Final, Native, Public)
// Parameters:
// float                          Height                         (Parm)

void UEFUIComponent::SetHeight(float Height)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_SetHeight_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetWidth
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFUIComponent::GetWidth()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_GetWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIComponent.SetWidth
// (Final, Native, Public)
// Parameters:
// float                          Width                          (Parm)

void UEFUIComponent::SetWidth(float Width)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_SetWidth_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetEnabled
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFUIComponent::GetEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_GetEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIComponent.SetEnabled
// (Final, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm)

void UEFUIComponent::SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetVisible
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFUIComponent::GetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_GetVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIComponent.SetVisible
// (Native, Public)
// Parameters:
// bool                           Visible                        (Parm)

void UEFUIComponent::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetName
// (Final, Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUIComponent::GetName()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_GetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIComponent.SetName
// (Final, Native, Public)
// Parameters:
// struct FString                 strName                        (Parm, NeedCtorLink)

void UEFUIComponent::SetName(const struct FString& strName)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_SetName_Params params;
	params.strName = strName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFUIComponent::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIComponent_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetItemData
// (Defined, Event, Public)
// Parameters:
// class UGFxObject*              SlotDataObject                 (Parm)

void UEFUISlot::SetItemData(class UGFxObject* SlotDataObject)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetItemData_Params params;
	params.SlotDataObject = SlotDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetDisableType
// (Native, Public)
// Parameters:
// int                            iType                          (Parm)

void UEFUISlot::SetDisableType(int iType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetDisableType_Params params;
	params.iType = iType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetUniqueData
// (Native, Public)
// Parameters:
// struct FString                 NewUniqueData                  (Parm, NeedCtorLink)

void UEFUISlot::SetUniqueData(const struct FString& NewUniqueData)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetUniqueData_Params params;
	params.NewUniqueData = NewUniqueData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetUniqueData
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUISlot::GetUniqueData()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetUniqueData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetLocked
// (Native, Public)
// Parameters:
// int                            iLockType                      (Parm)

void UEFUISlot::SetLocked(int iLockType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetLocked_Params params;
	params.iLockType = iLockType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.IsLocked
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFUISlot::IsLocked()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetItemGrade
// (Native, Public)
// Parameters:
// int                            NewGrade                       (Parm)

void UEFUISlot::SetItemGrade(int NewGrade)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetItemGrade_Params params;
	params.NewGrade = NewGrade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetItemGrade
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlot::GetItemGrade()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetItemGrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetSoundTheme
// (Native, Public)
// Parameters:
// struct FString                 NewSoundTheme                  (Parm, NeedCtorLink)

void UEFUISlot::SetSoundTheme(const struct FString& NewSoundTheme)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetSoundTheme_Params params;
	params.NewSoundTheme = NewSoundTheme;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetSoundTheme
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUISlot::GetSoundTheme()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetSoundTheme_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetDisabled
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUISlot::SetDisabled(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetDisabled_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.IsDisabled
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFUISlot::IsDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_IsDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetCooltime
// (Native, Public)
// Parameters:
// float                          NewRemainTime                  (Parm)
// float                          NewTotalTime                   (Parm)

void UEFUISlot::SetCooltime(float NewRemainTime, float NewTotalTime)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetCooltime_Params params;
	params.NewRemainTime = NewRemainTime;
	params.NewTotalTime = NewTotalTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetTotalCoolTime
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFUISlot::GetTotalCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetTotalCoolTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.GetRemainCoolTime
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFUISlot::GetRemainCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetRemainCoolTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetIconHeight
// (Native, Public)
// Parameters:
// int                            NewIconHeight                  (Parm)

void UEFUISlot::SetIconHeight(int NewIconHeight)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetIconHeight_Params params;
	params.NewIconHeight = NewIconHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconHeight
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlot::GetIconHeight()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetIconHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetIconWidth
// (Native, Public)
// Parameters:
// int                            NewIconWidth                   (Parm)

void UEFUISlot::SetIconWidth(int NewIconWidth)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetIconWidth_Params params;
	params.NewIconWidth = NewIconWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconWidth
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlot::GetIconWidth()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetIconWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetIconY
// (Native, Public)
// Parameters:
// int                            NewIconY                       (Parm)

void UEFUISlot::SetIconY(int NewIconY)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetIconY_Params params;
	params.NewIconY = NewIconY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconY
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlot::GetIconY()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetIconY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetIconX
// (Native, Public)
// Parameters:
// int                            NewIconX                       (Parm)

void UEFUISlot::SetIconX(int NewIconX)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetIconX_Params params;
	params.NewIconX = NewIconX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconX
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlot::GetIconX()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetIconX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetIconCount
// (Native, Public)
// Parameters:
// int                            NewIconIndex                   (Parm)

void UEFUISlot::SetIconCount(int NewIconIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetIconCount_Params params;
	params.NewIconIndex = NewIconIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconCount
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlot::GetIconCount()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetIconCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetIconPath
// (Native, Public)
// Parameters:
// struct FString                 NewIconPath                    (Parm, NeedCtorLink)

void UEFUISlot::SetIconPath(const struct FString& NewIconPath)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetIconPath_Params params;
	params.NewIconPath = NewIconPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconPath
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUISlot::GetIconPath()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetIconPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetWindowType
// (Native, Public)
// Parameters:
// int                            NewWindowType                  (Parm)

void UEFUISlot::SetWindowType(int NewWindowType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetWindowType_Params params;
	params.NewWindowType = NewWindowType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetWindowType
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlot::GetWindowType()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetWindowType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetSlotIndex
// (Native, Public)
// Parameters:
// int                            NewSlotIndex                   (Parm)

void UEFUISlot::SetSlotIndex(int NewSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetSlotIndex_Params params;
	params.NewSlotIndex = NewSlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetSlotIndex
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlot::GetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetBindID
// (Native, Public)
// Parameters:
// struct FString                 NewSlotID                      (Parm, NeedCtorLink)

void UEFUISlot::SetBindID(const struct FString& NewSlotID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetBindID_Params params;
	params.NewSlotID = NewSlotID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetBindID
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUISlot::GetBindID()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetBindID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetSlotType
// (Native, Public)
// Parameters:
// int                            NewSlotType                    (Parm)

void UEFUISlot::SetSlotType(int NewSlotType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetSlotType_Params params;
	params.NewSlotType = NewSlotType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetSlotType
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlot::GetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetSlotType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlot.SetIconData
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            SlotType                       (Parm)
// int                            SlotIndex                      (Parm)
// struct FString                 BindID                         (Parm, NeedCtorLink)
// struct FString                 IconPath                       (Parm, NeedCtorLink)
// int                            IconIndex                      (Parm)
// TEnumAsByte<EItemGrade>        eItemGrade                     (Parm)
// int                            TableID                        (OptionalParm, Parm)
// int                            IconCount                      (OptionalParm, Parm)

void UEFUISlot::SetIconData(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconPath, int IconIndex, TEnumAsByte<EItemGrade> eItemGrade, int TableID, int IconCount)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_SetIconData_Params params;
	params.SlotType = SlotType;
	params.SlotIndex = SlotIndex;
	params.BindID = BindID;
	params.IconPath = IconPath;
	params.IconIndex = IconIndex;
	params.eItemGrade = eItemGrade;
	params.TableID = TableID;
	params.IconCount = IconCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetSlotItemData
// (Native, Public)
// Parameters:
// class UEFUISlotData*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UEFUISlotData* UEFUISlot::GetSlotItemData()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlot_GetSlotItemData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIChatTabControl.ChatLogInputSelectType
// (Native, Public)
// Parameters:
// int                            InChannelType                  (Parm)

void UEFUIChatTabControl::ChatLogInputSelectType(int InChannelType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIChatTabControl_ChatLogInputSelectType_Params params;
	params.InChannelType = InChannelType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogMainWidgetTabInsertGroup
// (Native, Public)
// Parameters:
// int                            InTabID                        (Parm)

void UEFUIChatTabControl::ChatLogMainWidgetTabInsertGroup(int InTabID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIChatTabControl_ChatLogMainWidgetTabInsertGroup_Params params;
	params.InTabID = InTabID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogInTabGroupElementStartDrag
// (Native, Public)
// Parameters:
// int                            InTabID                        (Parm)
// float                          InTabX                         (Parm)
// float                          InTabY                         (Parm)

void UEFUIChatTabControl::ChatLogInTabGroupElementStartDrag(int InTabID, float InTabX, float InTabY)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIChatTabControl_ChatLogInTabGroupElementStartDrag_Params params;
	params.InTabID = InTabID;
	params.InTabX = InTabX;
	params.InTabY = InTabY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogLinkClick
// (Native, Public)
// Parameters:
// struct FString                 InLinkName                     (Parm, NeedCtorLink)
// int                            InLinkCode                     (Parm)
// int                            InMouseClick                   (Parm)

void UEFUIChatTabControl::ChatLogLinkClick(const struct FString& InLinkName, int InLinkCode, int InMouseClick)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIChatTabControl_ChatLogLinkClick_Params params;
	params.InLinkName = InLinkName;
	params.InLinkCode = InLinkCode;
	params.InMouseClick = InMouseClick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogTabContextMenuShow
// (Native, Public)
// Parameters:
// int                            InTabID                        (Parm)

void UEFUIChatTabControl::ChatLogTabContextMenuShow(int InTabID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIChatTabControl_ChatLogTabContextMenuShow_Params params;
	params.InTabID = InTabID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogMainWidgetSizeUpdated
// (Native, Public)

void UEFUIChatTabControl::ChatLogMainWidgetSizeUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIChatTabControl_ChatLogMainWidgetSizeUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIList.SetSelectedIndex
// (Defined, Public)
// Parameters:
// int                            NewListIndex                   (Parm)

void UEFUIList::SetSelectedIndex(int NewListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIList_SetSelectedIndex_Params params;
	params.NewListIndex = NewListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIList.GetSelectedIndex
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUIList::GetSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIList_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIList.GetData
// (Native, Public)
// Parameters:
// int                            DataIndex                      (Parm)
// class UClass*                  ListItemClass                  (Parm)
// class UEFUIListItem*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UEFUIListItem* UEFUIList::GetData(int DataIndex, class UClass* ListItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIList_GetData_Params params;
	params.DataIndex = DataIndex;
	params.ListItemClass = ListItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItem.HasAttribute
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFUIListItem::HasAttribute()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItem_HasAttribute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetTownShow
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUIListItemSlot::SetTownShow(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetTownShow_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetFriendshipShow
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUIListItemSlot::SetFriendshipShow(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetFriendshipShow_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetSealShow
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUIListItemSlot::SetSealShow(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetSealShow_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetAdvBookShow
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUIListItemSlot::SetAdvBookShow(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetAdvBookShow_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetTemporary
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUIListItemSlot::SetTemporary(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetTemporary_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetTrash
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUIListItemSlot::SetTrash(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetTrash_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetDisableType
// (Native, Public)
// Parameters:
// int                            iType                          (Parm)

void UEFUIListItemSlot::SetDisableType(int iType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetDisableType_Params params;
	params.iType = iType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetTableID
// (Native, Public)
// Parameters:
// int                            NewTableID                     (Parm)

void UEFUIListItemSlot::SetTableID(int NewTableID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetTableID_Params params;
	params.NewTableID = NewTableID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetTableID
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUIListItemSlot::GetTableID()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetTableID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetUniqueData
// (Native, Public)
// Parameters:
// struct FString                 NewUniqueData                  (Parm, NeedCtorLink)

void UEFUIListItemSlot::SetUniqueData(const struct FString& NewUniqueData)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetUniqueData_Params params;
	params.NewUniqueData = NewUniqueData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetUniqueData
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUIListItemSlot::GetUniqueData()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetUniqueData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetLocked
// (Native, Public)
// Parameters:
// int                            iLockType                      (Parm)

void UEFUIListItemSlot::SetLocked(int iLockType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetLocked_Params params;
	params.iLockType = iLockType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.IsLocked
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFUIListItemSlot::IsLocked()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetItemGrade
// (Native, Public)
// Parameters:
// int                            NewGrade                       (Parm)

void UEFUIListItemSlot::SetItemGrade(int NewGrade)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetItemGrade_Params params;
	params.NewGrade = NewGrade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetItemGrade
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUIListItemSlot::GetItemGrade()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetItemGrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetSoundTheme
// (Native, Public)
// Parameters:
// struct FString                 NewSoundTheme                  (Parm, NeedCtorLink)

void UEFUIListItemSlot::SetSoundTheme(const struct FString& NewSoundTheme)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetSoundTheme_Params params;
	params.NewSoundTheme = NewSoundTheme;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetSoundTheme
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUIListItemSlot::GetSoundTheme()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetSoundTheme_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetDisabled
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUIListItemSlot::SetDisabled(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetDisabled_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.IsDisabled
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFUIListItemSlot::IsDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_IsDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetItemName
// (Native, Public)
// Parameters:
// struct FString                 ItemName                       (Parm, NeedCtorLink)

void UEFUIListItemSlot::SetItemName(const struct FString& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetItemName_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetItemName
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUIListItemSlot::GetItemName()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetItemName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetLabel
// (Native, Public)
// Parameters:
// struct FString                 Label                          (Parm, NeedCtorLink)

void UEFUIListItemSlot::SetLabel(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetLabel_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetLabel
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUIListItemSlot::GetLabel()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetLabel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetCooltime
// (Native, Public)
// Parameters:
// float                          NewRemainTime                  (Parm)
// float                          NewTotalTime                   (Parm)

void UEFUIListItemSlot::SetCooltime(float NewRemainTime, float NewTotalTime)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetCooltime_Params params;
	params.NewRemainTime = NewRemainTime;
	params.NewTotalTime = NewTotalTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetTotalCoolTime
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFUIListItemSlot::GetTotalCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetTotalCoolTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.GetRemainCoolTime
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFUIListItemSlot::GetRemainCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetRemainCoolTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetIconHeight
// (Native, Public)
// Parameters:
// int                            NewIconHeight                  (Parm)

void UEFUIListItemSlot::SetIconHeight(int NewIconHeight)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetIconHeight_Params params;
	params.NewIconHeight = NewIconHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconHeight
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUIListItemSlot::GetIconHeight()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetIconHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetIconWidth
// (Native, Public)
// Parameters:
// int                            NewIconWidth                   (Parm)

void UEFUIListItemSlot::SetIconWidth(int NewIconWidth)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetIconWidth_Params params;
	params.NewIconWidth = NewIconWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconWidth
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUIListItemSlot::GetIconWidth()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetIconWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetIconY
// (Native, Public)
// Parameters:
// int                            NewIconY                       (Parm)

void UEFUIListItemSlot::SetIconY(int NewIconY)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetIconY_Params params;
	params.NewIconY = NewIconY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconY
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUIListItemSlot::GetIconY()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetIconY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetIconX
// (Native, Public)
// Parameters:
// int                            NewIconX                       (Parm)

void UEFUIListItemSlot::SetIconX(int NewIconX)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetIconX_Params params;
	params.NewIconX = NewIconX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconX
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUIListItemSlot::GetIconX()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetIconX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetIconCount
// (Native, Public)
// Parameters:
// int                            NewIconIndex                   (Parm)

void UEFUIListItemSlot::SetIconCount(int NewIconIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetIconCount_Params params;
	params.NewIconIndex = NewIconIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconCount
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUIListItemSlot::GetIconCount()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetIconCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetIconPath
// (Native, Public)
// Parameters:
// struct FString                 NewIconPath                    (Parm, NeedCtorLink)

void UEFUIListItemSlot::SetIconPath(const struct FString& NewIconPath)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetIconPath_Params params;
	params.NewIconPath = NewIconPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconPath
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUIListItemSlot::GetIconPath()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetIconPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetWindowType
// (Native, Public)
// Parameters:
// int                            NewWindowType                  (Parm)

void UEFUIListItemSlot::SetWindowType(int NewWindowType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetWindowType_Params params;
	params.NewWindowType = NewWindowType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetWindowType
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUIListItemSlot::GetWindowType()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetWindowType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetSlotIndex
// (Native, Public)
// Parameters:
// int                            NewSlotIndex                   (Parm)

void UEFUIListItemSlot::SetSlotIndex(int NewSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetSlotIndex_Params params;
	params.NewSlotIndex = NewSlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetSlotIndex
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUIListItemSlot::GetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetBindID
// (Native, Public)
// Parameters:
// struct FString                 NewSlotID                      (Parm, NeedCtorLink)

void UEFUIListItemSlot::SetBindID(const struct FString& NewSlotID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetBindID_Params params;
	params.NewSlotID = NewSlotID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetBindID
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUIListItemSlot::GetBindID()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetBindID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetSlotType
// (Native, Public)
// Parameters:
// int                            NewSlotType                    (Parm)

void UEFUIListItemSlot::SetSlotType(int NewSlotType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetSlotType_Params params;
	params.NewSlotType = NewSlotType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetSlotType
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUIListItemSlot::GetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_GetSlotType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIListItemSlot.SetIconData
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            SlotType                       (Parm)
// int                            SlotIndex                      (Parm)
// struct FString                 BindID                         (Parm, NeedCtorLink)
// struct FString                 IconPath                       (Parm, NeedCtorLink)
// int                            IconIndex                      (Parm)
// int                            TableID                        (OptionalParm, Parm)
// int                            IconCount                      (OptionalParm, Parm)
// bool                           bTrash                         (OptionalParm, Parm)
// bool                           bTemporary                     (OptionalParm, Parm)

void UEFUIListItemSlot::SetIconData(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconPath, int IconIndex, int TableID, int IconCount, bool bTrash, bool bTemporary)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIListItemSlot_SetIconData_Params params;
	params.SlotType = SlotType;
	params.SlotIndex = SlotIndex;
	params.BindID = BindID;
	params.IconPath = IconPath;
	params.IconIndex = IconIndex;
	params.TableID = TableID;
	params.IconCount = IconCount;
	params.bTrash = bTrash;
	params.bTemporary = bTemporary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAchievement.AchievementRewardTakeBtnClick
// (Native, Public)
// Parameters:
// int                            iRewardIndex                   (Parm)

void UEFGFxWidgetAchievement::AchievementRewardTakeBtnClick(int iRewardIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetAchievement_AchievementRewardTakeBtnClick_Params params;
	params.iRewardIndex = iRewardIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewSkillSlotClick
// (Native, Public)
// Parameters:
// int                            slotIndexInPage                (Parm)

void UEFGFxWidgetAnchorModeCrew::AnchorCrewSkillSlotClick(int slotIndexInPage)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetAnchorModeCrew_AnchorCrewSkillSlotClick_Params params;
	params.slotIndexInPage = slotIndexInPage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewPageIndexChanged
// (Native, Public)
// Parameters:
// int                            pageIndex                      (Parm)

void UEFGFxWidgetAnchorModeCrew::AnchorCrewPageIndexChanged(int pageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetAnchorModeCrew_AnchorCrewPageIndexChanged_Params params;
	params.pageIndex = pageIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.showNew
// (Defined, Event, Public)

void UEFGFxWidgetBuddy::showNew()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetBuddy_showNew_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.setSelectedTab
// (Defined, Event, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetBuddy::setSelectedTab(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetBuddy_setSelectedTab_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.setAFK
// (Defined, Event, Public)
// Parameters:
// bool                           bAFK                           (Parm)

void UEFGFxWidgetBuddy::setAFK(bool bAFK)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetBuddy_setAFK_Params params;
	params.bAFK = bAFK;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererMouseOver
// (Native, Public)
// Parameters:
// struct FString                 strUID                         (Parm, NeedCtorLink)

void UEFGFxWidgetBuddy::FriendsGroupRendererMouseOver(const struct FString& strUID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetBuddy_FriendsGroupRendererMouseOver_Params params;
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererRightClick
// (Native, Public)
// Parameters:
// struct FString                 strUID                         (Parm, NeedCtorLink)

void UEFGFxWidgetBuddy::FriendsGroupRendererRightClick(const struct FString& strUID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetBuddy_FriendsGroupRendererRightClick_Params params;
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererExtended
// (Native, Public)
// Parameters:
// struct FString                 strUID                         (Parm, NeedCtorLink)
// bool                           bShow                          (Parm)

void UEFGFxWidgetBuddy::FriendsGroupRendererExtended(const struct FString& strUID, bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetBuddy_FriendsGroupRendererExtended_Params params;
	params.strUID = strUID;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsRendererRightClick
// (Native, Public)
// Parameters:
// struct FString                 strUID                         (Parm, NeedCtorLink)

void UEFGFxWidgetBuddy::FriendsRendererRightClick(const struct FString& strUID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetBuddy_FriendsRendererRightClick_Params params;
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsInvite
// (Native, Public)
// Parameters:
// struct FString                 strUID                         (Parm, NeedCtorLink)

void UEFGFxWidgetBuddy::FriendsInvite(const struct FString& strUID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetBuddy_FriendsInvite_Params params;
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsBlock
// (Native, Public)
// Parameters:
// struct FString                 strUID                         (Parm, NeedCtorLink)

void UEFGFxWidgetBuddy::FriendsBlock(const struct FString& strUID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetBuddy_FriendsBlock_Params params;
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsUnBlock
// (Native, Public)
// Parameters:
// struct FString                 strUID                         (Parm, NeedCtorLink)

void UEFGFxWidgetBuddy::FriendsUnBlock(const struct FString& strUID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetBuddy_FriendsUnBlock_Params params;
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsBuddyCancel
// (Native, Public)
// Parameters:
// struct FString                 strUID                         (Parm, NeedCtorLink)

void UEFGFxWidgetBuddy::FriendsBuddyCancel(const struct FString& strUID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetBuddy_FriendsBuddyCancel_Params params;
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsBuddyReject
// (Native, Public)
// Parameters:
// struct FString                 strUID                         (Parm, NeedCtorLink)

void UEFGFxWidgetBuddy::FriendsBuddyReject(const struct FString& strUID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetBuddy_FriendsBuddyReject_Params params;
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsBuddyAgree
// (Native, Public)
// Parameters:
// struct FString                 strUID                         (Parm, NeedCtorLink)

void UEFGFxWidgetBuddy::FriendsBuddyAgree(const struct FString& strUID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetBuddy_FriendsBuddyAgree_Params params;
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCandidate.SetCandidateFocus
// (Native, Public)
// Parameters:
// bool                           isFocus                        (Parm)

void UEFGFxWidgetCandidate::SetCandidateFocus(bool isFocus)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCandidate_SetCandidateFocus_Params params;
	params.isFocus = isFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetChattingOption.SetChannelColor
// (Defined, Event, Public)
// Parameters:
// int                            ChannelIndex                   (Parm)
// struct FString                 colorCode                      (Parm, NeedCtorLink)

void UEFGFxWidgetChattingOption::SetChannelColor(int ChannelIndex, const struct FString& colorCode)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetChattingOption_SetChannelColor_Params params;
	params.ChannelIndex = ChannelIndex;
	params.colorCode = colorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAddTab
// (Native, Public)
// Parameters:
// TArray<int>                    ArrFilterList                  (Parm, NeedCtorLink)

void UEFGFxWidgetChattingOption::ChatLogFilterOptionAddTab(TArray<int> ArrFilterList)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionAddTab_Params params;
	params.ArrFilterList = ArrFilterList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionOKWnd
// (Native, Public)
// Parameters:
// TArray<int>                    ArrFilterList                  (Parm, NeedCtorLink)

void UEFGFxWidgetChattingOption::ChatLogFilterOptionOKWnd(TArray<int> ArrFilterList)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionOKWnd_Params params;
	params.ArrFilterList = ArrFilterList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionResetData
// (Native, Public)

void UEFGFxWidgetChattingOption::ChatLogFilterOptionResetData()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionResetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAppliedChannelList
// (Native, Public)
// Parameters:
// TArray<int>                    ArrFilterList                  (Parm, NeedCtorLink)

void UEFGFxWidgetChattingOption::ChatLogFilterOptionAppliedChannelList(TArray<int> ArrFilterList)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionAppliedChannelList_Params params;
	params.ArrFilterList = ArrFilterList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCinematicDungeonEntrance.DungeonEntranceDifficultyIndex
// (Native, Public)
// Parameters:
// int                            InIndex                        (Parm)

void UEFGFxWidgetCinematicDungeonEntrance::DungeonEntranceDifficultyIndex(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCinematicDungeonEntrance_DungeonEntranceDifficultyIndex_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.SetTargetPosition
// (Defined, Event, Public)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)

void UEFGFxWidgetColorPicker::SetTargetPosition(float X, float Y, float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColorPicker_SetTargetPosition_Params params;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.SetTargetCode
// (Defined, Event, Public)
// Parameters:
// int                            InCode                         (Parm)

void UEFGFxWidgetColorPicker::SetTargetCode(int InCode)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColorPicker_SetTargetCode_Params params;
	params.InCode = InCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.SetColor
// (Defined, Event, Public)
// Parameters:
// struct FString                 InColor                        (Parm, NeedCtorLink)

void UEFGFxWidgetColorPicker::SetColor(const struct FString& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColorPicker_SetColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.SetDefaultColor
// (Defined, Event, Public)
// Parameters:
// struct FString                 InColor                        (Parm, NeedCtorLink)

void UEFGFxWidgetColorPicker::SetDefaultColor(const struct FString& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColorPicker_SetDefaultColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerCursorDragEnd
// (Native, Public)
// Parameters:
// struct FString                 InColor                        (Parm, NeedCtorLink)

void UEFGFxWidgetColorPicker::RequestEventColorPickerCursorDragEnd(const struct FString& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColorPicker_RequestEventColorPickerCursorDragEnd_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerProgressValueChange
// (Native, Public)
// Parameters:
// struct FString                 InColor                        (Parm, NeedCtorLink)

void UEFGFxWidgetColorPicker::RequestEventColorPickerProgressValueChange(const struct FString& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColorPicker_RequestEventColorPickerProgressValueChange_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.ChatMessageInputTextHasFocus
// (Native, Public)
// Parameters:
// bool                           InFocus                        (Parm)

void UEFGFxWidgetColorPicker::ChatMessageInputTextHasFocus(bool InFocus)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColorPicker_ChatMessageInputTextHasFocus_Params params;
	params.InFocus = InFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerDefaultSetting
// (Native, Public)

void UEFGFxWidgetColorPicker::RequestARKColorPickerDefaultSetting()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColorPicker_RequestARKColorPickerDefaultSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerSaveSetting
// (Native, Public)
// Parameters:
// struct FString                 InChannelColor                 (Parm, NeedCtorLink)
// int                            InTargetCode                   (Parm)

void UEFGFxWidgetColorPicker::RequestARKColorPickerSaveSetting(const struct FString& InChannelColor, int InTargetCode)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColorPicker_RequestARKColorPickerSaveSetting_Params params;
	params.InChannelColor = InChannelColor;
	params.InTargetCode = InTargetCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerClose
// (Native, Public)

void UEFGFxWidgetColorPicker::RequestARKColorPickerClose()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColorPicker_RequestARKColorPickerClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCurrencyInfo.CurrencyInfoTreeItemClick
// (Native, Public)
// Parameters:
// int                            InCurrencyIndex                (Parm)

void UEFGFxWidgetCurrencyInfo::CurrencyInfoTreeItemClick(int InCurrencyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCurrencyInfo_CurrencyInfoTreeItemClick_Params params;
	params.InCurrencyIndex = InCurrencyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetPosition
// (Defined, Event, Public)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)

void UEFGFxWidgetCustomColorPicker::SetTargetPosition(float X, float Y, float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCustomColorPicker_SetTargetPosition_Params params;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetCode
// (Defined, Event, Public)
// Parameters:
// int                            InCode                         (Parm)

void UEFGFxWidgetCustomColorPicker::SetTargetCode(int InCode)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCustomColorPicker_SetTargetCode_Params params;
	params.InCode = InCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.SetColor
// (Defined, Event, Public)
// Parameters:
// struct FString                 InColor                        (Parm, NeedCtorLink)

void UEFGFxWidgetCustomColorPicker::SetColor(const struct FString& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCustomColorPicker_SetColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.SetInit
// (Defined, Event, Public)
// Parameters:
// float                          InRadian                       (Parm)
// float                          InDistance                     (Parm)
// float                          InLightness                    (Parm)
// struct FString                 InColor                        (Parm, NeedCtorLink)
// struct FString                 InColorPalette                 (Parm, NeedCtorLink)
// float                          InMinLightness                 (Parm)
// float                          InMaxLightness                 (Parm)

void UEFGFxWidgetCustomColorPicker::SetInit(float InRadian, float InDistance, float InLightness, const struct FString& InColor, const struct FString& InColorPalette, float InMinLightness, float InMaxLightness)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCustomColorPicker_SetInit_Params params;
	params.InRadian = InRadian;
	params.InDistance = InDistance;
	params.InLightness = InLightness;
	params.InColor = InColor;
	params.InColorPalette = InColorPalette;
	params.InMinLightness = InMinLightness;
	params.InMaxLightness = InMaxLightness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerColorChanged
// (Native, Public)
// Parameters:
// float                          InRadian                       (Parm)
// float                          InDistance                     (Parm)

void UEFGFxWidgetCustomColorPicker::ColorPickerColorChanged(float InRadian, float InDistance)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCustomColorPicker_ColorPickerColorChanged_Params params;
	params.InRadian = InRadian;
	params.InDistance = InDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerLightnessChanged
// (Native, Public)
// Parameters:
// float                          InLightness                    (Parm)

void UEFGFxWidgetCustomColorPicker::ColorPickerLightnessChanged(float InLightness)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCustomColorPicker_ColorPickerLightnessChanged_Params params;
	params.InLightness = InLightness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerDefaultSetting
// (Native, Public)

void UEFGFxWidgetCustomColorPicker::RequestARKColorPickerDefaultSetting()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCustomColorPicker_RequestARKColorPickerDefaultSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerSaveSetting
// (Native, Public)
// Parameters:
// int                            InTargetCode                   (Parm)
// float                          InRadian                       (Parm)
// float                          InDistance                     (Parm)
// float                          InLightness                    (Parm)

void UEFGFxWidgetCustomColorPicker::RequestARKColorPickerSaveSetting(int InTargetCode, float InRadian, float InDistance, float InLightness)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCustomColorPicker_RequestARKColorPickerSaveSetting_Params params;
	params.InTargetCode = InTargetCode;
	params.InRadian = InRadian;
	params.InDistance = InDistance;
	params.InLightness = InLightness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerClose
// (Native, Public)

void UEFGFxWidgetCustomColorPicker::RequestARKColorPickerClose()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCustomColorPicker_RequestARKColorPickerClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildApplicantRightClick
// (Native, Public)
// Parameters:
// struct FString                 Uid                            (Parm, NeedCtorLink)

void UEFGFxWidgetGuild::GuildApplicantRightClick(const struct FString& Uid)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetGuild_GuildApplicantRightClick_Params params;
	params.Uid = Uid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildMemberRightClick
// (Native, Public)
// Parameters:
// struct FString                 Uid                            (Parm, NeedCtorLink)

void UEFGFxWidgetGuild::GuildMemberRightClick(const struct FString& Uid)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetGuild_GuildMemberRightClick_Params params;
	params.Uid = Uid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildReject
// (Native, Public)
// Parameters:
// struct FString                 Uid                            (Parm, NeedCtorLink)

void UEFGFxWidgetGuild::GuildReject(const struct FString& Uid)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetGuild_GuildReject_Params params;
	params.Uid = Uid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildAccept
// (Native, Public)
// Parameters:
// struct FString                 Uid                            (Parm, NeedCtorLink)

void UEFGFxWidgetGuild::GuildAccept(const struct FString& Uid)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetGuild_GuildAccept_Params params;
	params.Uid = Uid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildNoticeCopyButtonClick
// (Native, Public)
// Parameters:
// struct FString                 sNotice                        (Parm, NeedCtorLink)

void UEFGFxWidgetGuild::GuildNoticeCopyButtonClick(const struct FString& sNotice)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetGuild_GuildNoticeCopyButtonClick_Params params;
	params.sNotice = sNotice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildChangeGuildIntroduction
// (Native, Public)
// Parameters:
// struct FString                 sIntroduction                  (Parm, NeedCtorLink)

void UEFGFxWidgetGuild::GuildChangeGuildIntroduction(const struct FString& sIntroduction)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetGuild_GuildChangeGuildIntroduction_Params params;
	params.sIntroduction = sIntroduction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildChangeGuildNotice
// (Native, Public)
// Parameters:
// struct FString                 sNotice                        (Parm, NeedCtorLink)

void UEFGFxWidgetGuild::GuildChangeGuildNotice(const struct FString& sNotice)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetGuild_GuildChangeGuildNotice_Params params;
	params.sNotice = sNotice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildChangeBtnClick
// (Native, Public)
// Parameters:
// bool                           bShow                          (Parm)

void UEFGFxWidgetGuild::GuildChangeBtnClick(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetGuild_GuildChangeBtnClick_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildChangeGuildMark
// (Native, Public)
// Parameters:
// struct FString                 sMarkIdx                       (Parm, NeedCtorLink)

void UEFGFxWidgetGuild::GuildChangeGuildMark(const struct FString& sMarkIdx)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetGuild_GuildChangeGuildMark_Params params;
	params.sMarkIdx = sMarkIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildCreate
// (Native, Public)
// Parameters:
// struct FString                 imarkIdx                       (Parm, NeedCtorLink)
// struct FString                 sGuildName                     (Parm, NeedCtorLink)
// struct FString                 sGuildDesc                     (Parm, NeedCtorLink)
// bool                           bRecommend                     (Parm)

void UEFGFxWidgetGuild::GuildCreate(const struct FString& imarkIdx, const struct FString& sGuildName, const struct FString& sGuildDesc, bool bRecommend)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetGuild_GuildCreate_Params params;
	params.imarkIdx = imarkIdx;
	params.sGuildName = sGuildName;
	params.sGuildDesc = sGuildDesc;
	params.bRecommend = bRecommend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildCancel
// (Native, Public)
// Parameters:
// struct FString                 Uid                            (Parm, NeedCtorLink)

void UEFGFxWidgetGuild::GuildCancel(const struct FString& Uid)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetGuild_GuildCancel_Params params;
	params.Uid = Uid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildApply
// (Native, Public)
// Parameters:
// struct FString                 Uid                            (Parm, NeedCtorLink)

void UEFGFxWidgetGuild::GuildApply(const struct FString& Uid)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetGuild_GuildApply_Params params;
	params.Uid = Uid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.killOptionKey
// (Defined, Event, Public)

void UEFGFxWidgetHotKey::killOptionKey()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHotKey_killOptionKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.selectOptionHotKeyMainMenu
// (Defined, Event, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetHotKey::selectOptionHotKeyMainMenu(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHotKey_selectOptionHotKeyMainMenu_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyCloseBtnClick
// (Native, Public)

void UEFGFxWidgetHotKey::OptionHotKeyCloseBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHotKey_OptionHotKeyCloseBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyKillFocus
// (Native, Public)

void UEFGFxWidgetHotKey::OptionHotKeyKillFocus()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHotKey_OptionHotKeyKillFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyCancelClick
// (Native, Public)

void UEFGFxWidgetHotKey::OptionHotKeyCancelClick()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHotKey_OptionHotKeyCancelClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyAcceptClick
// (Native, Public)

void UEFGFxWidgetHotKey::OptionHotKeyAcceptClick()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHotKey_OptionHotKeyAcceptClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyConfirmClick
// (Native, Public)

void UEFGFxWidgetHotKey::OptionHotKeyConfirmClick()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHotKey_OptionHotKeyConfirmClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyResetClick
// (Native, Public)

void UEFGFxWidgetHotKey::OptionHotKeyResetClick()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHotKey_OptionHotKeyResetClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyButtonChange
// (Native, Public)
// Parameters:
// int                            mainListIndex                  (Parm)
// struct FString                 buttonType                     (Parm, NeedCtorLink)
// int                            subListIndex                   (Parm)

void UEFGFxWidgetHotKey::OptionHotKeyButtonChange(int mainListIndex, const struct FString& buttonType, int subListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHotKey_OptionHotKeyButtonChange_Params params;
	params.mainListIndex = mainListIndex;
	params.buttonType = buttonType;
	params.subListIndex = subListIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyMainListIndexChange
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetHotKey::OptionHotKeyMainListIndexChange(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHotKey_OptionHotKeyMainListIndexChange_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInstanceDungeonEntrance.DungeonEntranceDifficultyIndex
// (Native, Public)
// Parameters:
// int                            InIndex                        (Parm)

void UEFGFxWidgetInstanceDungeonEntrance::DungeonEntranceDifficultyIndex(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInstanceDungeonEntrance_DungeonEntranceDifficultyIndex_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOut
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleStoneRollOut(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneRollOut_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOver
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleStoneRollOver(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneRollOver_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.ChangeCursor
// (Native, Public)
// Parameters:
// int                            Row                            (Parm)

void UEFGFxWidgetInteractionAbility_Refine::ChangeCursor(int Row)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionAbility_Refine_ChangeCursor_Params params;
	params.Row = Row;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneClick
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleStoneClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleChangeTabClick
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleChangeTabClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleChangeTabClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneSelected
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleStoneSelected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionBarter.BarterShopPurchaseItem
// (Native, Public)
// Parameters:
// struct FString                 strUniqueData                  (Parm, NeedCtorLink)

void UEFGFxWidgetInteractionBarter::BarterShopPurchaseItem(const struct FString& strUniqueData)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionBarter_BarterShopPurchaseItem_Params params;
	params.strUniqueData = strUniqueData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotDisable
// (Defined, Event, Public)

void UEFGFxWidgetInteractionMail::SetNextSlotDisable()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionMail_SetNextSlotDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotDisable
// (Defined, Public)

void UEFGFxWidgetInteractionMail::ASSetNextSlotDisable()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionMail_ASSetNextSlotDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotEnable
// (Defined, Event, Public)

void UEFGFxWidgetInteractionMail::SetNextSlotEnable()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionMail_SetNextSlotEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotEnable
// (Defined, Public)

void UEFGFxWidgetInteractionMail::ASSetNextSlotEnable()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionMail_ASSetNextSlotEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.SetMailOpenType
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EFMailOpenType>    MailOpenType                   (Parm)

void UEFGFxWidgetInteractionMail::SetMailOpenType(TEnumAsByte<EFMailOpenType> MailOpenType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionMail_SetMailOpenType_Params params;
	params.MailOpenType = MailOpenType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.SetOpenType
// (Defined, Public)
// Parameters:
// TEnumAsByte<EFMailOpenType>    MailOpenType                   (Parm)

void UEFGFxWidgetInteractionMail::SetOpenType(TEnumAsByte<EFMailOpenType> MailOpenType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionMail_SetOpenType_Params params;
	params.MailOpenType = MailOpenType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.StopLoading
// (Native, Public)

void UEFGFxWidgetInteractionMail::StopLoading()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionMail_StopLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.StructReceiverCacheData
// (Native, Public)

void UEFGFxWidgetInteractionMail::StructReceiverCacheData()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionMail_StructReceiverCacheData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.AddReceiverData
// (Native, Public)
// Parameters:
// TEnumAsByte<EFMailReceiverType> ReceiverType                   (Parm)
// struct FString                 ReceiverName                   (Parm, NeedCtorLink)

void UEFGFxWidgetInteractionMail::AddReceiverData(TEnumAsByte<EFMailReceiverType> ReceiverType, const struct FString& ReceiverName)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionMail_AddReceiverData_Params params;
	params.ReceiverType = ReceiverType;
	params.ReceiverName = ReceiverName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelNoramlSkillClick
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetLifeSkill::LifeLevelNoramlSkillClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_LifeLevelNoramlSkillClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelMasterSkillPlusClick
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetLifeSkill::LifeLevelMasterSkillPlusClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_LifeLevelMasterSkillPlusClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelMasterSkillMinusClick
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetLifeSkill::LifeLevelMasterSkillMinusClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_LifeLevelMasterSkillMinusClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelPointPlusClick
// (Defined, Public)

void UEFGFxWidgetLifeSkill::LifeLevelPointPlusClick()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_LifeLevelPointPlusClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelPointMinusClick
// (Defined, Public)

void UEFGFxWidgetLifeSkill::LifeLevelPointMinusClick()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_LifeLevelPointMinusClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuideBtnClick
// (Defined, Public)
// Parameters:
// int                            Category                       (Parm)

void UEFGFxWidgetLifeSkill::LifeLevelGuideBtnClick(int Category)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_LifeLevelGuideBtnClick_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuideClosed
// (Defined, Public)

void UEFGFxWidgetLifeSkill::LifeLevelGuideClosed()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_LifeLevelGuideClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OnLifeNoramlSkillClick
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetLifeSkill::OnLifeNoramlSkillClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_OnLifeNoramlSkillClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OnLifeMasterSkillPlusClick
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetLifeSkill::OnLifeMasterSkillPlusClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_OnLifeMasterSkillPlusClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OnLifeMasterSkillMinusClick
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetLifeSkill::OnLifeMasterSkillMinusClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_OnLifeMasterSkillMinusClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OnLifePointPlusClick
// (Native, Public)

void UEFGFxWidgetLifeSkill::OnLifePointPlusClick()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_OnLifePointPlusClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OnLifePointMinusClick
// (Native, Public)

void UEFGFxWidgetLifeSkill::OnLifePointMinusClick()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_OnLifePointMinusClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuide
// (Native, Public)
// Parameters:
// int                            Category                       (Parm)

void UEFGFxWidgetLifeSkill::LifeLevelGuide(int Category)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_LifeLevelGuide_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OnLifeLevelGuideClosed
// (Native, Public)

void UEFGFxWidgetLifeSkill::OnLifeLevelGuideClosed()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_OnLifeLevelGuideClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OpenLifeLevelGuideUI
// (Defined, Event, Public)
// Parameters:
// int                            Category                       (Parm)

void UEFGFxWidgetLifeSkill::OpenLifeLevelGuideUI(int Category)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_OpenLifeLevelGuideUI_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OpenLifeLevelGuide
// (Defined, Public)
// Parameters:
// int                            Category                       (Parm)

void UEFGFxWidgetLifeSkill::OpenLifeLevelGuide(int Category)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_OpenLifeLevelGuide_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.SetNoSkillUI
// (Defined, Event, Public)
// Parameters:
// bool                           isNoSkill                      (Parm)

void UEFGFxWidgetLifeSkill::SetNoSkillUI(bool isNoSkill)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_SetNoSkillUI_Params params;
	params.isNoSkill = isNoSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.SetNoSkill
// (Defined, Public)
// Parameters:
// bool                           isNoSkill                      (Parm)

void UEFGFxWidgetLifeSkill::SetNoSkill(bool isNoSkill)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeSkill_SetNoSkill_Params params;
	params.isNoSkill = isNoSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMap.RequestResetMapRotation
// (Native, Public)

void UEFGFxWidgetMap::RequestResetMapRotation()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMap_RequestResetMapRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMap.RequestWorldMapUpperDepth
// (Native, Public)

void UEFGFxWidgetMap::RequestWorldMapUpperDepth()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMap_RequestWorldMapUpperDepth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMap.WorldMapZoneIndex
// (Native, Public)
// Parameters:
// int                            ZoneIndex                      (Parm)

void UEFGFxWidgetMap::WorldMapZoneIndex(int ZoneIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMap_WorldMapZoneIndex_Params params;
	params.ZoneIndex = ZoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMap.WorldMapContinentType
// (Native, Public)
// Parameters:
// int                            ContinentType                  (Parm)

void UEFGFxWidgetMap::WorldMapContinentType(int ContinentType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMap_WorldMapContinentType_Params params;
	params.ContinentType = ContinentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMODWatingInfo.MinimapAlarmListRightBtnClick
// (Native, Public)
// Parameters:
// int                            InListIndex                    (Parm)

void UEFGFxWidgetMODWatingInfo::MinimapAlarmListRightBtnClick(int InListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMODWatingInfo_MinimapAlarmListRightBtnClick_Params params;
	params.InListIndex = InListIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMoviePlayer.TestLabSendInputMessage
// (Native, Public)
// Parameters:
// struct FString                 InputText                      (Parm, NeedCtorLink)

void UEFGFxWidgetMoviePlayer::TestLabSendInputMessage(const struct FString& InputText)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMoviePlayer_TestLabSendInputMessage_Params params;
	params.InputText = InputText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetNormalBox.NormalBoxItemSelected
// (Native, Public)

void UEFGFxWidgetNormalBox::NormalBoxItemSelected()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetNormalBox_NormalBoxItemSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetNoticeMOD.NoticeModWaitListItemClick
// (Native, Public)
// Parameters:
// int                            ListIndex                      (Parm)

void UEFGFxWidgetNoticeMOD::NoticeModWaitListItemClick(int ListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetNoticeMOD_NoticeModWaitListItemClick_Params params;
	params.ListIndex = ListIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.SetMaxTreeItemCheckNumber
// (Defined, Event, Public)
// Parameters:
// int                            InMaxQuestCheckNumber          (Parm)

void UEFGFxWidgetQuestJournal::SetMaxTreeItemCheckNumber(int InMaxQuestCheckNumber)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestJournal_SetMaxTreeItemCheckNumber_Params params;
	params.InMaxQuestCheckNumber = InMaxQuestCheckNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.SetMaxQuestCheckNumber
// (Defined, Public)
// Parameters:
// int                            InMaxQuestCheckNumber          (Parm)

void UEFGFxWidgetQuestJournal::SetMaxQuestCheckNumber(int InMaxQuestCheckNumber)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestJournal_SetMaxQuestCheckNumber_Params params;
	params.InMaxQuestCheckNumber = InMaxQuestCheckNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.ARKQuestTraceButtonClicked
// (Defined, Public)
// Parameters:
// int                            InQuestIndex                   (Parm)

void UEFGFxWidgetQuestJournal::ARKQuestTraceButtonClicked(int InQuestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestJournal_ARKQuestTraceButtonClicked_Params params;
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.OnClicked_TraceQuestButton
// (Native, Public)
// Parameters:
// int                            InQuestIndex                   (Parm)

void UEFGFxWidgetQuestJournal::OnClicked_TraceQuestButton(int InQuestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestJournal_OnClicked_TraceQuestButton_Params params;
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.QuestJournalTreeItemListOverPool
// (Defined, Public)

void UEFGFxWidgetQuestJournal::QuestJournalTreeItemListOverPool()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestJournal_QuestJournalTreeItemListOverPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.OnCheckedTreeItemOverPool
// (Native, Public)

void UEFGFxWidgetQuestJournal::OnCheckedTreeItemOverPool()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestJournal_OnCheckedTreeItemOverPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.ARKQuestGiveUpButtonClicked
// (Defined, Public)
// Parameters:
// int                            InQuestIndex                   (Parm)

void UEFGFxWidgetQuestJournal::ARKQuestGiveUpButtonClicked(int InQuestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestJournal_ARKQuestGiveUpButtonClicked_Params params;
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.OnClicked_GiveUpButton
// (Native, Public)
// Parameters:
// int                            InQuestIndex                   (Parm)

void UEFGFxWidgetQuestJournal::OnClicked_GiveUpButton(int InQuestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestJournal_OnClicked_GiveUpButton_Params params;
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.QuestJournalTreeItemMultiCheck
// (Defined, Public)
// Parameters:
// class UGFxObject*              InArray                        (Parm)

void UEFGFxWidgetQuestJournal::QuestJournalTreeItemMultiCheck(class UGFxObject* InArray)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestJournal_QuestJournalTreeItemMultiCheck_Params params;
	params.InArray = InArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.OnChecked_QuestTreeItem
// (Native, Public)
// Parameters:
// TArray<int>                    InQuestIndexArray              (Parm, NeedCtorLink)

void UEFGFxWidgetQuestJournal::OnChecked_QuestTreeItem(TArray<int> InQuestIndexArray)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestJournal_OnChecked_QuestTreeItem_Params params;
	params.InQuestIndexArray = InQuestIndexArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.OnHide
// (Defined, Event, Public)

void UEFGFxWidgetQuestSummary::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestSummary_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.OnHideQuestSummary
// (Native, Public)

void UEFGFxWidgetQuestSummary::OnHideQuestSummary()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestSummary_OnHideQuestSummary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.ARKQuestSelectedRewardItem
// (Defined, Public)
// Parameters:
// int                            InIndex                        (Parm)

void UEFGFxWidgetQuestSummary::ARKQuestSelectedRewardItem(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestSummary_ARKQuestSelectedRewardItem_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.OnClicked_SelectChoiceItem
// (Native, Public)
// Parameters:
// int                            InIndex                        (Parm)

void UEFGFxWidgetQuestSummary::OnClicked_SelectChoiceItem(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestSummary_OnClicked_SelectChoiceItem_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.ARKQuestCompleteButtonClicked
// (Defined, Public)
// Parameters:
// int                            InQuestIndex                   (Parm)

void UEFGFxWidgetQuestSummary::ARKQuestCompleteButtonClicked(int InQuestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestSummary_ARKQuestCompleteButtonClicked_Params params;
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.OnClicked_CompleteButton
// (Native, Public)
// Parameters:
// int                            InQuestIndex                   (Parm)

void UEFGFxWidgetQuestSummary::OnClicked_CompleteButton(int InQuestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestSummary_OnClicked_CompleteButton_Params params;
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.ARKQuestAcceptButtonClicked
// (Defined, Public)
// Parameters:
// int                            InQuestIndex                   (Parm)

void UEFGFxWidgetQuestSummary::ARKQuestAcceptButtonClicked(int InQuestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestSummary_ARKQuestAcceptButtonClicked_Params params;
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.OnClicked_AcceptButton
// (Native, Public)
// Parameters:
// int                            InQuestIndex                   (Parm)

void UEFGFxWidgetQuestSummary::OnClicked_AcceptButton(int InQuestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestSummary_OnClicked_AcceptButton_Params params;
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.SelectChoiceRewardItem
// (Defined, Event, Public)
// Parameters:
// int                            InSelectIndex                  (Parm)

void UEFGFxWidgetQuestSummary::SelectChoiceRewardItem(int InSelectIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestSummary_SelectChoiceRewardItem_Params params;
	params.InSelectIndex = InSelectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.SetSelectedIndex_ChoiceRewardItem
// (Defined, Public)
// Parameters:
// int                            InSelectIndex                  (Parm)

void UEFGFxWidgetQuestSummary::SetSelectedIndex_ChoiceRewardItem(int InSelectIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetQuestSummary_SetSelectedIndex_ChoiceRewardItem_Params params;
	params.InSelectIndex = InSelectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRandomBox.Init
// (Defined, Event, Public)

void UEFGFxWidgetRandomBox::Init()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetRandomBox_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRandomBox.startAni
// (Defined, Event, Public)

void UEFGFxWidgetRandomBox::startAni()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetRandomBox_startAni_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRandomBox.RandomBoxComplete
// (Native, Public)

void UEFGFxWidgetRandomBox::RandomBoxComplete()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetRandomBox_RandomBoxComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRandomBox.RandomBoxClosed
// (Native, Public)

void UEFGFxWidgetRandomBox::RandomBoxClosed()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetRandomBox_RandomBoxClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemReceiveAll
// (Native, Public)
// Parameters:
// struct FString                 ItemId                         (Parm, NeedCtorLink)

void UEFGFxWidgetSelectBox::SelectBoxItemReceiveAll(const struct FString& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSelectBox_SelectBoxItemReceiveAll_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemSelected
// (Native, Public)
// Parameters:
// struct FString                 ItemId                         (Parm, NeedCtorLink)

void UEFGFxWidgetSelectBox::SelectBoxItemSelected(const struct FString& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSelectBox_SelectBoxItemSelected_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.closePreset
// (Defined, Event, Public)

void UEFGFxWidgetSkillBook::closePreset()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSkillBook_closePreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.openPreset
// (Defined, Event, Public)

void UEFGFxWidgetSkillBook::openPreset()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSkillBook_openPreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.cancelSelection
// (Defined, Event, Public)

void UEFGFxWidgetSkillBook::cancelSelection()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSkillBook_cancelSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetUnlock
// (Native, Public)
// Parameters:
// int                            iIndex                         (Parm)

void UEFGFxWidgetSkillBook::SkillBookPresetUnlock(int iIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSkillBook_SkillBookPresetUnlock_Params params;
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetApply
// (Native, Public)
// Parameters:
// int                            iIndex                         (Parm)

void UEFGFxWidgetSkillBook::SkillBookPresetApply(int iIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSkillBook_SkillBookPresetApply_Params params;
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetSelected
// (Native, Public)
// Parameters:
// int                            iIndex                         (Parm)

void UEFGFxWidgetSkillBook::SkillBookPresetSelected(int iIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSkillBook_SkillBookPresetSelected_Params params;
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookInitCancel
// (Native, Public)

void UEFGFxWidgetSkillBook::SkillBookInitCancel()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSkillBook_SkillBookInitCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookInitConfirm
// (Native, Public)
// Parameters:
// int                            iIndex                         (Parm)

void UEFGFxWidgetSkillBook::SkillBookInitConfirm(int iIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSkillBook_SkillBookInitConfirm_Params params;
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetEdit
// (Native, Public)

void UEFGFxWidgetSkillBook::SkillBookPresetEdit()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSkillBook_SkillBookPresetEdit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookListSelected
// (Native, Public)
// Parameters:
// int                            TierId                         (Parm)

void UEFGFxWidgetSkillBook::SkillBookListSelected(int TierId)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSkillBook_SkillBookListSelected_Params params;
	params.TierId = TierId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookTierBtnClick
// (Native, Public)
// Parameters:
// int                            TierId                         (Parm)

void UEFGFxWidgetSkillBook::SkillBookTierBtnClick(int TierId)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSkillBook_SkillBookTierBtnClick_Params params;
	params.TierId = TierId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookDownBtnClick
// (Native, Public)
// Parameters:
// int                            SkillId                        (Parm)

void UEFGFxWidgetSkillBook::SkillBookDownBtnClick(int SkillId)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSkillBook_SkillBookDownBtnClick_Params params;
	params.SkillId = SkillId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookUpBtnClick
// (Native, Public)
// Parameters:
// int                            SkillId                        (Parm)

void UEFGFxWidgetSkillBook::SkillBookUpBtnClick(int SkillId)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSkillBook_SkillBookUpBtnClick_Params params;
	params.SkillId = SkillId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionButtonClickHandler
// (Native, Public)
// Parameters:
// int                            iUID                           (Parm)

void UEFGFxWidgetSystemOption::SystemOptionButtonClickHandler(int iUID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSystemOption_SystemOptionButtonClickHandler_Params params;
	params.iUID = iUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionListIndexChange
// (Native, Public)
// Parameters:
// int                            iUID                           (Parm)
// int                            iIndex                         (Parm)

void UEFGFxWidgetSystemOption::SystemOptionListIndexChange(int iUID, int iIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSystemOption_SystemOptionListIndexChange_Params params;
	params.iUID = iUID;
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.OpenChattingOptionColorPicker
// (Native, Public)
// Parameters:
// int                            iUID                           (Parm)
// struct FString                 sColor                         (Parm, NeedCtorLink)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)

void UEFGFxWidgetSystemOption::OpenChattingOptionColorPicker(int iUID, const struct FString& sColor, float X, float Y, float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSystemOption_OpenChattingOptionColorPicker_Params params;
	params.iUID = iUID;
	params.sColor = sColor;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.OptionHotKeyKillFocus
// (Native, Public)

void UEFGFxWidgetSystemOption::OptionHotKeyKillFocus()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSystemOption_OptionHotKeyKillFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.OptionHotKeyButtonChange
// (Native, Public)
// Parameters:
// int                            iUID                           (Parm)
// int                            iIndex                         (Parm)

void UEFGFxWidgetSystemOption::OptionHotKeyButtonChange(int iUID, int iIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSystemOption_OptionHotKeyButtonChange_Params params;
	params.iUID = iUID;
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionWndCloseButtonClicked
// (Native, Public)

void UEFGFxWidgetSystemOption::SystemOptionWndCloseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSystemOption_SystemOptionWndCloseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionChangedSlider
// (Native, Public)
// Parameters:
// int                            iUID                           (Parm)
// int                            iValue                         (Parm)

void UEFGFxWidgetSystemOption::SystemOptionChangedSlider(int iUID, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSystemOption_SystemOptionChangedSlider_Params params;
	params.iUID = iUID;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedComboBox
// (Native, Public)
// Parameters:
// int                            iUID                           (Parm)
// int                            iIndex                         (Parm)

void UEFGFxWidgetSystemOption::SystemOptionSelectedComboBox(int iUID, int iIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSystemOption_SystemOptionSelectedComboBox_Params params;
	params.iUID = iUID;
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedCheckBox
// (Native, Public)
// Parameters:
// int                            iUID                           (Parm)
// bool                           bCheck                         (Parm)

void UEFGFxWidgetSystemOption::SystemOptionSelectedCheckBox(int iUID, bool bCheck)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetSystemOption_SystemOptionSelectedCheckBox_Params params;
	params.iUID = iUID;
	params.bCheck = bCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemComplete
// (Native, Public)

void UEFGFxWidgetUnLockBox::UnlockBoxItemComplete()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetUnLockBox_UnlockBoxItemComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemClosed
// (Native, Public)

void UEFGFxWidgetUnLockBox::UnlockBoxItemClosed()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetUnLockBox_UnlockBoxItemClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeReady
// (Defined, Event, Public)
// Parameters:
// bool                           Ready                          (Parm)

void UEFGFxWidgetUserTrade::SetOtherTradeReady(bool Ready)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetUserTrade_SetOtherTradeReady_Params params;
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeReady
// (Defined, Public)
// Parameters:
// bool                           Ready                          (Parm)

void UEFGFxWidgetUserTrade::ASSetOtherTradeReady(bool Ready)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetUserTrade_ASSetOtherTradeReady_Params params;
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.SetMyTradeReady
// (Defined, Event, Public)
// Parameters:
// bool                           Ready                          (Parm)

void UEFGFxWidgetUserTrade::SetMyTradeReady(bool Ready)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetUserTrade_SetMyTradeReady_Params params;
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeReady
// (Defined, Public)
// Parameters:
// bool                           Ready                          (Parm)

void UEFGFxWidgetUserTrade::ASSetMyTradeReady(bool Ready)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetUserTrade_ASSetMyTradeReady_Params params;
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeConfirm
// (Defined, Event, Public)

void UEFGFxWidgetUserTrade::SetOtherTradeConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetUserTrade_SetOtherTradeConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeConfirm
// (Defined, Public)

void UEFGFxWidgetUserTrade::ASSetOtherTradeConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetUserTrade_ASSetOtherTradeConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.SetMyTradeConfirm
// (Defined, Event, Public)

void UEFGFxWidgetUserTrade::SetMyTradeConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetUserTrade_SetMyTradeConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeConfirm
// (Defined, Public)

void UEFGFxWidgetUserTrade::ASSetMyTradeConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetUserTrade_ASSetMyTradeConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIFrame.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFUIFrame::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIFrame_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUIFrame.Deactivate
// (Event, Public)

void UEFUIFrame::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIFrame_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIFrame.Activate
// (Event, Public)

void UEFUIFrame::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUIFrame_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.AnnounceFrameMotionComplete
// (Native, Public)
// Parameters:
// int                            Layer                          (Parm)

void UEFGFxWidgetAnnounce::AnnounceFrameMotionComplete(int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetAnnounce_AnnounceFrameMotionComplete_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.cleanUpLayer
// (Defined, Event, Public)
// Parameters:
// int                            Layer                          (Parm)

void UEFGFxWidgetAnnounce::cleanUpLayer(int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetAnnounce_cleanUpLayer_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.setAnnouncePosition
// (Defined, Event, Public)
// Parameters:
// int                            Layer                          (Parm)
// float                          YPos                           (Parm)

void UEFGFxWidgetAnnounce::setAnnouncePosition(int Layer, float YPos)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetAnnounce_setAnnouncePosition_Params params;
	params.Layer = Layer;
	params.YPos = YPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.getAnnounceListPosition
// (Defined, Event, Public)
// Parameters:
// int                            Layer                          (Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UEFGFxWidgetAnnounce::getAnnounceListPosition(int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetAnnounce_getAnnounceListPosition_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxWidgetAnnounce.setAnnounceItemTime
// (Defined, Event, Public)
// Parameters:
// int                            Layer                          (Parm)
// int                            Index                          (Parm)
// float                          Time                           (Parm)

void UEFGFxWidgetAnnounce::setAnnounceItemTime(int Layer, int Index, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetAnnounce_setAnnounceItemTime_Params params;
	params.Layer = Layer;
	params.Index = Index;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.getAnnounceItemTime
// (Defined, Event, Public)
// Parameters:
// int                            Layer                          (Parm)
// int                            Index                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFGFxWidgetAnnounce::getAnnounceItemTime(int Layer, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetAnnounce_getAnnounceItemTime_Params params;
	params.Layer = Layer;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxWidgetAnnounce.getAnnounceListItem
// (Defined, Event, Public)
// Parameters:
// int                            Layer                          (Parm)
// int                            Index                          (Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UEFGFxWidgetAnnounce::getAnnounceListItem(int Layer, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetAnnounce_getAnnounceListItem_Params params;
	params.Layer = Layer;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxWidgetAnnounce.setAnnounceTotalItem
// (Defined, Event, Public)
// Parameters:
// int                            Layer                          (Parm)
// int                            Count                          (Parm)

void UEFGFxWidgetAnnounce::setAnnounceTotalItem(int Layer, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetAnnounce_setAnnounceTotalItem_Params params;
	params.Layer = Layer;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.getAnnounceMaxItem
// (Defined, Event, Public)
// Parameters:
// int                            Layer                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFGFxWidgetAnnounce::getAnnounceMaxItem(int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetAnnounce_getAnnounceMaxItem_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxWidgetAnnounce.getAnnounceCurrentItem
// (Defined, Event, Public)
// Parameters:
// int                            Layer                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFGFxWidgetAnnounce::getAnnounceCurrentItem(int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetAnnounce_getAnnounceCurrentItem_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxWidgetAnnounce.addAnnounceMessage
// (Defined, Event, Public)
// Parameters:
// int                            Layer                          (Parm)
// class UGFxObject*              Obj                            (Parm)

void UEFGFxWidgetAnnounce::addAnnounceMessage(int Layer, class UGFxObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetAnnounce_addAnnounceMessage_Params params;
	params.Layer = Layer;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.SetEnableResetButton
// (Defined, Event, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void UEFGFxWidgetClassPreview::SetEnableResetButton(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetClassPreview_SetEnableResetButton_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.SetShowType
// (Defined, Event, Public)
// Parameters:
// int                            Type                           (Parm)

void UEFGFxWidgetClassPreview::SetShowType(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetClassPreview_SetShowType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.SetClassUpgradeChoiceInfo
// (Defined, Event, Public)
// Parameters:
// class UGFxObject*              ClassDataList                  (Parm)

void UEFGFxWidgetClassPreview::SetClassUpgradeChoiceInfo(class UGFxObject* ClassDataList)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetClassPreview_SetClassUpgradeChoiceInfo_Params params;
	params.ClassDataList = ClassDataList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.SetPlayingClassData
// (Defined, Event, Public)
// Parameters:
// int                            ClassID                        (Parm)
// struct FString                 ClassName                      (Parm, NeedCtorLink)
// struct FString                 classInfo                      (Parm, NeedCtorLink)

void UEFGFxWidgetClassPreview::SetPlayingClassData(int ClassID, const struct FString& ClassName, const struct FString& classInfo)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetClassPreview_SetPlayingClassData_Params params;
	params.ClassID = ClassID;
	params.ClassName = ClassName;
	params.classInfo = classInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeCancelRelease
// (Native, Public)

void UEFGFxWidgetClassPreview::ClassUpgradeCancelRelease()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetClassPreview_ClassUpgradeCancelRelease_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeSelectClassID
// (Native, Public)
// Parameters:
// int                            iIndex                         (Parm)

void UEFGFxWidgetClassPreview::ClassUpgradeSelectClassID(int iIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetClassPreview_ClassUpgradeSelectClassID_Params params;
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeConfirmClass
// (Native, Public)
// Parameters:
// int                            iIndex                         (Parm)

void UEFGFxWidgetClassPreview::ClassUpgradeConfirmClass(int iIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetClassPreview_ClassUpgradeConfirmClass_Params params;
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeReturnRelease
// (Native, Public)

void UEFGFxWidgetClassPreview::ClassUpgradeReturnRelease()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetClassPreview_ClassUpgradeReturnRelease_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddBossMonster
// (Native, Public)

void UEFGFxWidgetClassPreview::ClassUpgradeAddBossMonster()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetClassPreview_ClassUpgradeAddBossMonster_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddNormalMonster
// (Native, Public)

void UEFGFxWidgetClassPreview::ClassUpgradeAddNormalMonster()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetClassPreview_ClassUpgradeAddNormalMonster_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePlayReset
// (Native, Public)

void UEFGFxWidgetClassPreview::ClassUpgradePlayReset()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetClassPreview_ClassUpgradePlayReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.RequestStopMovie
// (Native, Public)

void UEFGFxWidgetClassPreview::RequestStopMovie()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetClassPreview_RequestStopMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.RequestPlayMovieClassUpgradePreview
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetClassPreview::RequestPlayMovieClassUpgradePreview(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetClassPreview_RequestPlayMovieClassUpgradePreview_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewRequestCloseWnd
// (Native, Public)

void UEFGFxWidgetClassPreview::ClassUpgradePreviewRequestCloseWnd()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetClassPreview_ClassUpgradePreviewRequestCloseWnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewPlaySelectClass
// (Native, Public)
// Parameters:
// int                            iIndex                         (Parm)

void UEFGFxWidgetClassPreview::ClassUpgradePreviewPlaySelectClass(int iIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetClassPreview_ClassUpgradePreviewPlaySelectClass_Params params;
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.setObserverMod
// (Defined, Event, Public)
// Parameters:
// int                            iMode                          (Parm)
// int                            iSide                          (Parm)

void UEFGFxWidgetColosseum_New::setObserverMod(int iMode, int iSide)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColosseum_New_setObserverMod_Params params;
	params.iMode = iMode;
	params.iSide = iSide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.setTimerPause
// (Defined, Event, Public)
// Parameters:
// bool                           bPause                         (Parm)

void UEFGFxWidgetColosseum_New::setTimerPause(bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColosseum_New_setTimerPause_Params params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.AddItem
// (Defined, Event, Public)
// Parameters:
// class UGFxObject*              Object                         (Parm)

void UEFGFxWidgetColosseum_New::AddItem(class UGFxObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColosseum_New_AddItem_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.setModType
// (Defined, Event, Public)
// Parameters:
// int                            iType                          (Parm)

void UEFGFxWidgetColosseum_New::setModType(int iType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColosseum_New_setModType_Params params;
	params.iType = iType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.roundAnnounceShowType
// (Defined, Event, Public)
// Parameters:
// int                            iType                          (Parm)
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Subtitle                       (Parm, NeedCtorLink)
// int                            iTeamType                      (Parm)

void UEFGFxWidgetColosseum_New::roundAnnounceShowType(int iType, const struct FString& Title, const struct FString& Subtitle, int iTeamType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColosseum_New_roundAnnounceShowType_Params params;
	params.iType = iType;
	params.Title = Title;
	params.Subtitle = Subtitle;
	params.iTeamType = iTeamType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.announceShowType
// (Defined, Event, Public)
// Parameters:
// int                            iType                          (Parm)
// struct FString                 Title                          (Parm, NeedCtorLink)
// int                            iTeamType                      (Parm)

void UEFGFxWidgetColosseum_New::announceShowType(int iType, const struct FString& Title, int iTeamType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColosseum_New_announceShowType_Params params;
	params.iType = iType;
	params.Title = Title;
	params.iTeamType = iTeamType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.setStartData
// (Defined, Event, Public)
// Parameters:
// class UGFxObject*              Object                         (Parm)

void UEFGFxWidgetColosseum_New::setStartData(class UGFxObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColosseum_New_setStartData_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.setWaitData
// (Defined, Event, Public)
// Parameters:
// class UGFxObject*              Object                         (Parm)

void UEFGFxWidgetColosseum_New::setWaitData(class UGFxObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetColosseum_New_setWaitData_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCommon.SetPartyMemberValue
// (Defined, Event, Public)
// Parameters:
// struct FString                 remainPartyMember              (Parm, NeedCtorLink)

void UEFGFxWidgetCommon::SetPartyMemberValue(const struct FString& remainPartyMember)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCommon_SetPartyMemberValue_Params params;
	params.remainPartyMember = remainPartyMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCommon.SetCommonObjectAvailableSkip
// (Defined, Event, Public)
// Parameters:
// bool                           bShow                          (Parm)
// int                            skipType                       (Parm)

void UEFGFxWidgetCommon::SetCommonObjectAvailableSkip(bool bShow, int skipType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCommon_SetCommonObjectAvailableSkip_Params params;
	params.bShow = bShow;
	params.skipType = skipType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCommon.ShowCommonObjectAvailableSkip
// (Defined, Event, Public)
// Parameters:
// bool                           bShow                          (Parm)

void UEFGFxWidgetCommon::ShowCommonObjectAvailableSkip(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCommon_ShowCommonObjectAvailableSkip_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCommon.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFGFxWidgetCommon::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetCommon_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxWidgetContentsUnlock.ContentsUnlockCallbackTypeID
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetContentsUnlock::ContentsUnlockCallbackTypeID(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetContentsUnlock_ContentsUnlockCallbackTypeID_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetContentsUnlock.OnContentsUnlockCallbackTypeID
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetContentsUnlock::OnContentsUnlockCallbackTypeID(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetContentsUnlock_OnContentsUnlockCallbackTypeID_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetDamage.EFDataBinding_UpdateData
// (Defined, Public)
// Parameters:
// struct FString                 BindName                       (Parm, NeedCtorLink)
// class UGFxObject*              DataProvider                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFGFxWidgetDamage::EFDataBinding_UpdateData(const struct FString& BindName, class UGFxObject* DataProvider)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetDamage_EFDataBinding_UpdateData_Params params;
	params.BindName = BindName;
	params.DataProvider = DataProvider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxWidgetExcavationMiniGame.MiniGameStateChanged
// (Defined, Public)
// Parameters:
// struct FString                 WndName                        (Parm, NeedCtorLink)
// int                            currentGameState               (Parm)
// int                            lastGameState                  (Parm)

void UEFGFxWidgetExcavationMiniGame::MiniGameStateChanged(const struct FString& WndName, int currentGameState, int lastGameState)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetExcavationMiniGame_MiniGameStateChanged_Params params;
	params.WndName = WndName;
	params.currentGameState = currentGameState;
	params.lastGameState = lastGameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetExcavationMiniGame.OnChangeGameState
// (Native, Public)
// Parameters:
// struct FString                 WndName                        (Parm, NeedCtorLink)
// int                            currentGameState               (Parm)
// int                            lastGameState                  (Parm)

void UEFGFxWidgetExcavationMiniGame::OnChangeGameState(const struct FString& WndName, int currentGameState, int lastGameState)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetExcavationMiniGame_OnChangeGameState_Params params;
	params.WndName = WndName;
	params.currentGameState = currentGameState;
	params.lastGameState = lastGameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetExcavationMiniGame.ArcheologyResultComplete
// (Defined, Public)

void UEFGFxWidgetExcavationMiniGame::ArcheologyResultComplete()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetExcavationMiniGame_ArcheologyResultComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetExcavationMiniGame.OnResultComplete
// (Native, Public)

void UEFGFxWidgetExcavationMiniGame::OnResultComplete()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetExcavationMiniGame_OnResultComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetFishingNetMiniGame.MiniGameStateChanged
// (Defined, Public)
// Parameters:
// struct FString                 WndName                        (Parm, NeedCtorLink)
// int                            currentGameState               (Parm)
// int                            lastGameState                  (Parm)

void UEFGFxWidgetFishingNetMiniGame::MiniGameStateChanged(const struct FString& WndName, int currentGameState, int lastGameState)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetFishingNetMiniGame_MiniGameStateChanged_Params params;
	params.WndName = WndName;
	params.currentGameState = currentGameState;
	params.lastGameState = lastGameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetFishingNetMiniGame.OnChangeGameState
// (Native, Public)
// Parameters:
// struct FString                 WndName                        (Parm, NeedCtorLink)
// int                            currentGameState               (Parm)
// int                            lastGameState                  (Parm)

void UEFGFxWidgetFishingNetMiniGame::OnChangeGameState(const struct FString& WndName, int currentGameState, int lastGameState)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetFishingNetMiniGame_OnChangeGameState_Params params;
	params.WndName = WndName;
	params.currentGameState = currentGameState;
	params.lastGameState = lastGameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetFishingNetMiniGame.FishingGameOver
// (Defined, Public)
// Parameters:
// int                            overType                       (Parm)

void UEFGFxWidgetFishingNetMiniGame::FishingGameOver(int overType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetFishingNetMiniGame_FishingGameOver_Params params;
	params.overType = overType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetFishingNetMiniGame.OnFishingGameOver
// (Native, Public)
// Parameters:
// int                            overType                       (Parm)

void UEFGFxWidgetFishingNetMiniGame::OnFishingGameOver(int overType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetFishingNetMiniGame_OnFishingGameOver_Params params;
	params.overType = overType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHeadStatus.MoveHeadStatus
// (Defined, Event, Public)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)
// float                          fX                             (Parm)
// float                          fY                             (Parm)
// float                          fZ                             (Parm)

void UEFGFxWidgetHeadStatus::MoveHeadStatus(const struct FString& strID, float fX, float fY, float fZ)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHeadStatus_MoveHeadStatus_Params params;
	params.strID = strID;
	params.fX = fX;
	params.fY = fY;
	params.fZ = fZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudCommonExp.HUD_CommonTabIndex
// (Defined, Public)
// Parameters:
// int                            TabIndex                       (Parm)

void UEFGFxWidgetHudCommonExp::HUD_CommonTabIndex(int TabIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHudCommonExp_HUD_CommonTabIndex_Params params;
	params.TabIndex = TabIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudCommonExp.CommonTabIndex
// (Native, Public)
// Parameters:
// int                            TabIndex                       (Parm)

void UEFGFxWidgetHudCommonExp::CommonTabIndex(int TabIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHudCommonExp_CommonTabIndex_Params params;
	params.TabIndex = TabIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudIdentity.SummonerSkillButtonClick
// (Native, Public)
// Parameters:
// int                            iButtonIndex                   (Parm)

void UEFGFxWidgetHudIdentity::SummonerSkillButtonClick(int iButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHudIdentity_SummonerSkillButtonClick_Params params;
	params.iButtonIndex = iButtonIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListRightBtnClick
// (Native, Public)
// Parameters:
// int                            InListIndex                    (Parm)

void UEFGFxWidgetHudLeftTop::TopHUDAlarmListRightBtnClick(int InListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHudLeftTop_TopHUDAlarmListRightBtnClick_Params params;
	params.InListIndex = InListIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListLeftBtnClick
// (Native, Public)
// Parameters:
// int                            InListIndex                    (Parm)

void UEFGFxWidgetHudLeftTop::TopHUDAlarmListLeftBtnClick(int InListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHudLeftTop_TopHUDAlarmListLeftBtnClick_Params params;
	params.InListIndex = InListIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListItemClick
// (Native, Public)
// Parameters:
// int                            InListIndex                    (Parm)

void UEFGFxWidgetHudLeftTop::TopHUDAlarmListItemClick(int InListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetHudLeftTop_TopHUDAlarmListItemClick_Params params;
	params.InListIndex = InListIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.RelationShipLevelUp
// (Defined, Event, Public)

void UEFGFxWidgetInteraction::RelationShipLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_RelationShipLevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.CloseBackGround
// (Defined, Event, Public)

void UEFGFxWidgetInteraction::CloseBackGround()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_CloseBackGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionCloseBackGround
// (Defined, Public)

void UEFGFxWidgetInteraction::InteractionCloseBackGround()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_InteractionCloseBackGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.OpenBackGround
// (Defined, Event, Public)

void UEFGFxWidgetInteraction::OpenBackGround()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_OpenBackGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionOpenBackGround
// (Defined, Public)

void UEFGFxWidgetInteraction::InteractionOpenBackGround()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_InteractionOpenBackGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.SelectQuestListIndex
// (Defined, Event, Public)
// Parameters:
// int                            ListIndex                      (Parm)

void UEFGFxWidgetInteraction::SelectQuestListIndex(int ListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_SelectQuestListIndex_Params params;
	params.ListIndex = ListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.SelectQuestList
// (Defined, Public)
// Parameters:
// int                            ListIndex                      (Parm)

void UEFGFxWidgetInteraction::SelectQuestList(int ListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_SelectQuestList_Params params;
	params.ListIndex = ListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.SelectFunctionType
// (Defined, Event, Public)
// Parameters:
// int                            Type                           (Parm)

void UEFGFxWidgetInteraction::SelectFunctionType(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_SelectFunctionType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.SelectFunctionContainer
// (Defined, Public)
// Parameters:
// int                            Type                           (Parm)

void UEFGFxWidgetInteraction::SelectFunctionContainer(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_SelectFunctionContainer_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ShowMaxIntimatePoint
// (Defined, Event, Public)
// Parameters:
// bool                           B                              (Parm)

void UEFGFxWidgetInteraction::ShowMaxIntimatePoint(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_ShowMaxIntimatePoint_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ShowMaximumIntimatePoint
// (Defined, Public)
// Parameters:
// bool                           B                              (Parm)

void UEFGFxWidgetInteraction::ShowMaximumIntimatePoint(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_ShowMaximumIntimatePoint_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ClearInteractionState
// (Defined, Event, Public)

void UEFGFxWidgetInteraction::ClearInteractionState()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_ClearInteractionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ClearFunctionButtonState
// (Defined, Public)

void UEFGFxWidgetInteraction::ClearFunctionButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_ClearFunctionButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionCommonCloseBtnClick
// (Defined, Public)

void UEFGFxWidgetInteraction::InteractionCommonCloseBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_InteractionCommonCloseBtnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.EndInteractionMode
// (Native, Public)

void UEFGFxWidgetInteraction::EndInteractionMode()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_EndInteractionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionCommonPlayerTalkListClick
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetInteraction::InteractionCommonPlayerTalkListClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_InteractionCommonPlayerTalkListClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkSelectList
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetInteraction::ClickInteractionTalkSelectList(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_ClickInteractionTalkSelectList_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionCommonNPCTalkListClick
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetInteraction::InteractionCommonNPCTalkListClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_InteractionCommonNPCTalkListClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkList
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetInteraction::ClickInteractionTalkList(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_ClickInteractionTalkList_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionCommonMenuListClick
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetInteraction::InteractionCommonMenuListClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_InteractionCommonMenuListClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ClickInteractionFunctionMenu
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetInteraction::ClickInteractionFunctionMenu(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_ClickInteractionFunctionMenu_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFGFxWidgetInteraction::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteraction_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxWidgetInteractionKeyIcon.InteractionKeySelected
// (Defined, Public)

void UEFGFxWidgetInteractionKeyIcon::InteractionKeySelected()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionKeyIcon_InteractionKeySelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionKeyIcon.FinishSwitchInteractionMode
// (Native, Public)

void UEFGFxWidgetInteractionKeyIcon::FinishSwitchInteractionMode()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetInteractionKeyIcon_FinishSwitchInteractionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeToolDurability.HideLifeDurability
// (Defined, Event, Public)

void UEFGFxWidgetLifeToolDurability::HideLifeDurability()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeToolDurability_HideLifeDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeToolDurability.DecreaseLifeDurability
// (Defined, Event, Public)
// Parameters:
// int                            CurrentValue                   (Parm)
// int                            decreaseValue                  (Parm)

void UEFGFxWidgetLifeToolDurability::DecreaseLifeDurability(int CurrentValue, int decreaseValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeToolDurability_DecreaseLifeDurability_Params params;
	params.CurrentValue = CurrentValue;
	params.decreaseValue = decreaseValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeToolDurability.ShowLifeDurability
// (Defined, Event, Public)
// Parameters:
// int                            iconType                       (Parm)
// int                            CurrentValue                   (Parm)

void UEFGFxWidgetLifeToolDurability::ShowLifeDurability(int iconType, int CurrentValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeToolDurability_ShowLifeDurability_Params params;
	params.iconType = iconType;
	params.CurrentValue = CurrentValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeVessel.LifeVesselCompleteAnimationEnd
// (Native, Public)
// Parameters:
// int                            iCompleteIndex                 (Parm)

void UEFGFxWidgetLifeVessel::LifeVesselCompleteAnimationEnd(int iCompleteIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetLifeVessel_LifeVesselCompleteAnimationEnd_Params params;
	params.iCompleteIndex = iCompleteIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.QuickSlotMenuClick
// (Native, Public)
// Parameters:
// int                            iMenuIndex                     (Parm)

void UEFGFxWidgetMenu::QuickSlotMenuClick(int iMenuIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMenu_QuickSlotMenuClick_Params params;
	params.iMenuIndex = iMenuIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.GetMenu
// (Defined, Event, Public)
// Parameters:
// int                            iSlotIndex                     (Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UEFGFxWidgetMenu::GetMenu(int iSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMenu_GetMenu_Params params;
	params.iSlotIndex = iSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGFxWidgetMenu.SetEnableButton
// (Defined, Event, Public)
// Parameters:
// int                            iMenuIndex                     (Parm)
// bool                           bEnable                        (Parm)

void UEFGFxWidgetMenu::SetEnableButton(int iMenuIndex, bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMenu_SetEnableButton_Params params;
	params.iMenuIndex = iMenuIndex;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.SetToolTip
// (Defined, Event, Public)
// Parameters:
// int                            iMenuIndex                     (Parm)
// struct FString                 strToolTip                     (Parm, NeedCtorLink)

void UEFGFxWidgetMenu::SetToolTip(int iMenuIndex, const struct FString& strToolTip)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMenu_SetToolTip_Params params;
	params.iMenuIndex = iMenuIndex;
	params.strToolTip = strToolTip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.SetBindKey
// (Defined, Event, Public)
// Parameters:
// int                            iMenuIndex                     (Parm)
// struct FString                 strBindKey                     (Parm, NeedCtorLink)

void UEFGFxWidgetMenu::SetBindKey(int iMenuIndex, const struct FString& strBindKey)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMenu_SetBindKey_Params params;
	params.iMenuIndex = iMenuIndex;
	params.strBindKey = strBindKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.SetSelectButton
// (Defined, Event, Public)
// Parameters:
// int                            iMenuIndex                     (Parm)
// bool                           bSelect                        (Parm)

void UEFGFxWidgetMenu::SetSelectButton(int iMenuIndex, bool bSelect)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMenu_SetSelectButton_Params params;
	params.iMenuIndex = iMenuIndex;
	params.bSelect = bSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.SelectButton
// (Defined, Event, Public)
// Parameters:
// int                            iMenuIndex                     (Parm)
// bool                           bSelect                        (Parm)

void UEFGFxWidgetMenu::SelectButton(int iMenuIndex, bool bSelect)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMenu_SelectButton_Params params;
	params.iMenuIndex = iMenuIndex;
	params.bSelect = bSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMinimap.RequestShowMinimapChannelList
// (Native, Public)

void UEFGFxWidgetMinimap::RequestShowMinimapChannelList()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMinimap_RequestShowMinimapChannelList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.ModCommonMergeCompensation
// (Defined, Public)

void UEFGFxWidgetMOD_Cube::ModCommonMergeCompensation()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMOD_Cube_ModCommonMergeCompensation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.FinishMergeCompensation
// (Native, Public)

void UEFGFxWidgetMOD_Cube::FinishMergeCompensation()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMOD_Cube_FinishMergeCompensation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.ModCommonEndCubeEffect
// (Defined, Public)
// Parameters:
// int                            TabIndex                       (Parm)
// int                            selectZoneID                   (Parm)
// int                            selectDifficulty               (Parm)

void UEFGFxWidgetMOD_Cube::ModCommonEndCubeEffect(int TabIndex, int selectZoneID, int selectDifficulty)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMOD_Cube_ModCommonEndCubeEffect_Params params;
	params.TabIndex = TabIndex;
	params.selectZoneID = selectZoneID;
	params.selectDifficulty = selectDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.EndBuffEffect
// (Native, Public)

void UEFGFxWidgetMOD_Cube::EndBuffEffect()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMOD_Cube_EndBuffEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.PlayModCommonMergeCompensation
// (Defined, Event, Public)
// Parameters:
// bool                           bSuccess                       (Parm)

void UEFGFxWidgetMOD_Cube::PlayModCommonMergeCompensation(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMOD_Cube_PlayModCommonMergeCompensation_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonRandomState
// (Defined, Event, Public)
// Parameters:
// bool                           bStart                         (Parm)
// class UGFxObject*              Obj                            (Parm)

void UEFGFxWidgetMOD_Cube::SetModCommonRandomState(bool bStart, class UGFxObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMOD_Cube_SetModCommonRandomState_Params params;
	params.bStart = bStart;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonCurrentCompensation
// (Defined, Event, Public)
// Parameters:
// class UGFxObject*              Obj                            (Parm)

void UEFGFxWidgetMOD_Cube::SetModCommonCurrentCompensation(class UGFxObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMOD_Cube_SetModCommonCurrentCompensation_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonAccumulateCompensation
// (Defined, Event, Public)
// Parameters:
// class UGFxObject*              Obj                            (Parm)

void UEFGFxWidgetMOD_Cube::SetModCommonAccumulateCompensation(class UGFxObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMOD_Cube_SetModCommonAccumulateCompensation_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.UpdateModCommonCubeState
// (Defined, Event, Public)
// Parameters:
// int                            SkillEffectIndex               (Parm)
// int                            StackCount                     (Parm)
// int                            ExpireStageIndex               (Parm)

void UEFGFxWidgetMOD_Cube::UpdateModCommonCubeState(int SkillEffectIndex, int StackCount, int ExpireStageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMOD_Cube_UpdateModCommonCubeState_Params params;
	params.SkillEffectIndex = SkillEffectIndex;
	params.StackCount = StackCount;
	params.ExpireStageIndex = ExpireStageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.RemoveModCommonCubeState
// (Defined, Event, Public)
// Parameters:
// int                            SkillEffectIndex               (Parm)

void UEFGFxWidgetMOD_Cube::RemoveModCommonCubeState(int SkillEffectIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMOD_Cube_RemoveModCommonCubeState_Params params;
	params.SkillEffectIndex = SkillEffectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.AddModCommonCubeState
// (Defined, Event, Public)
// Parameters:
// class UGFxObject*              Obj                            (Parm)

void UEFGFxWidgetMOD_Cube::AddModCommonCubeState(class UGFxObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMOD_Cube_AddModCommonCubeState_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonStateList
// (Defined, Event, Public)
// Parameters:
// class UGFxObject*              Obj                            (Parm)

void UEFGFxWidgetMOD_Cube::SetModCommonStateList(class UGFxObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMOD_Cube_SetModCommonStateList_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonWaveStep
// (Defined, Event, Public)
// Parameters:
// class UGFxObject*              Obj                            (Parm)

void UEFGFxWidgetMOD_Cube::SetModCommonWaveStep(class UGFxObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMOD_Cube_SetModCommonWaveStep_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonHudType
// (Defined, Event, Public)
// Parameters:
// int                            ModType                        (Parm)

void UEFGFxWidgetMOD_Cube::SetModCommonHudType(int ModType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMOD_Cube_SetModCommonHudType_Params params;
	params.ModType = ModType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_PlatinumArea.ModPlatinumCoopComplete
// (Native, Public)
// Parameters:
// int                            InCompleteCoopStep             (Parm)

void UEFGFxWidgetMOD_PlatinumArea::ModPlatinumCoopComplete(int InCompleteCoopStep)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMOD_PlatinumArea_ModPlatinumCoopComplete_Params params;
	params.InCompleteCoopStep = InCompleteCoopStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMODEntrance.ModEntranceMapCanvasItemClick
// (Native, Public)
// Parameters:
// int                            ZoneID                         (Parm)

void UEFGFxWidgetMODEntrance::ModEntranceMapCanvasItemClick(int ZoneID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetMODEntrance_ModEntranceMapCanvasItemClick_Params params;
	params.ZoneID = ZoneID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetNotice.setNoticeIcon
// (Defined, Event, Public)
// Parameters:
// bool                           show                           (Parm)
// int                            noticeType                     (Parm)
// int                            StackCount                     (Parm)

void UEFGFxWidgetNotice::setNoticeIcon(bool show, int noticeType, int StackCount)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetNotice_setNoticeIcon_Params params;
	params.show = show;
	params.noticeType = noticeType;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetNotice.NoticeFrameAlarmBtnClick
// (Native, Public)
// Parameters:
// int                            noticeType                     (Parm)

void UEFGFxWidgetNotice::NoticeFrameAlarmBtnClick(int noticeType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetNotice_NoticeFrameAlarmBtnClick_Params params;
	params.noticeType = noticeType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCreateHUD.SetDefaultClassData
// (Defined, Event, Public)
// Parameters:
// TArray<class UGFxObject*>      pObject                        (Parm, NeedCtorLink)

void UEFGFxWidgetPcCreateHUD::SetDefaultClassData(TArray<class UGFxObject*> pObject)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcCreateHUD_SetDefaultClassData_Params params;
	params.pObject = pObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCreateHUD.RequestStopMovie
// (Native, Public)

void UEFGFxWidgetPcCreateHUD::RequestStopMovie()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcCreateHUD_RequestStopMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCreateHUD.RequestPlayMovieClassSelectPreview
// (Native, Public)
// Parameters:
// int                            ClassID                        (Parm)

void UEFGFxWidgetPcCreateHUD::RequestPlayMovieClassSelectPreview(int ClassID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcCreateHUD_RequestPlayMovieClassSelectPreview_Params params;
	params.ClassID = ClassID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCreateHUD.RequestUpdateClassSelectData
// (Native, Public)
// Parameters:
// int                            ClassID                        (Parm)

void UEFGFxWidgetPcCreateHUD::RequestUpdateClassSelectData(int ClassID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcCreateHUD_RequestUpdateClassSelectData_Params params;
	params.ClassID = ClassID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.previewImg
// (Defined, Event, Public)
// Parameters:
// class UGFxObject*              Obj                            (Parm)

void UEFGFxWidgetPcCustomizing::previewImg(class UGFxObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcCustomizing_previewImg_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.setCostume
// (Defined, Event, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetPcCustomizing::setCostume(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcCustomizing_setCostume_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.setClassID
// (Defined, Event, Public)
// Parameters:
// int                            ClassID                        (Parm)

void UEFGFxWidgetPcCustomizing::setClassID(int ClassID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcCustomizing_setClassID_Params params;
	params.ClassID = ClassID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.setPreviewcostumeData
// (Defined, Event, Public)
// Parameters:
// TArray<unsigned long>          Array                          (Parm, NeedCtorLink)

void UEFGFxWidgetPcCustomizing::setPreviewcostumeData(TArray<unsigned long> Array)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcCustomizing_setPreviewcostumeData_Params params;
	params.Array = Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.setPresetData
// (Defined, Event, Public)
// Parameters:
// TArray<unsigned long>          Array                          (Parm, NeedCtorLink)

void UEFGFxWidgetPcCustomizing::setPresetData(TArray<unsigned long> Array)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcCustomizing_setPresetData_Params params;
	params.Array = Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.CustomizingSettingValueChanged
// (Native, Public)
// Parameters:
// struct FString                 InFirstCategory                (Parm, NeedCtorLink)
// struct FString                 InSecondCategory               (Parm, NeedCtorLink)
// int                            iValue                         (Parm)
// float                          fValue                         (Parm)

void UEFGFxWidgetPcCustomizing::CustomizingSettingValueChanged(const struct FString& InFirstCategory, const struct FString& InSecondCategory, int iValue, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcCustomizing_CustomizingSettingValueChanged_Params params;
	params.InFirstCategory = InFirstCategory;
	params.InSecondCategory = InSecondCategory;
	params.iValue = iValue;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.ShowAnim
// (Defined, Event, Public)

void UEFGFxWidgetPcSelect::ShowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcSelect_ShowAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.ShowNotice
// (Defined, Event, Public)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)

void UEFGFxWidgetPcSelect::ShowNotice(const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcSelect_ShowNotice_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.SetCharacterSelect
// (Defined, Event, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetPcSelect::SetCharacterSelect(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcSelect_SetCharacterSelect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.CharacterSelectMoving
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetPcSelect::CharacterSelectMoving(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcSelect_CharacterSelectMoving_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.WallpaperCancel
// (Native, Public)

void UEFGFxWidgetPcSelect::WallpaperCancel()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcSelect_WallpaperCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.WallpaperSelected
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetPcSelect::WallpaperSelected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcSelect_WallpaperSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.WallpaperConfirm
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetPcSelect::WallpaperConfirm(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcSelect_WallpaperConfirm_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.CharacterSelectDeleteCancel
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetPcSelect::CharacterSelectDeleteCancel(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcSelect_CharacterSelectDeleteCancel_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.CharacterSelectedIndex
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetPcSelect::CharacterSelectedIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcSelect_CharacterSelectedIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.RequestNewCharacter
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)

void UEFGFxWidgetPcSelect::RequestNewCharacter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetPcSelect_RequestNewCharacter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRaidClear.RaidProcessResultComplete
// (Native, Public)

void UEFGFxWidgetRaidClear::RaidProcessResultComplete()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetRaidClear_RaidProcessResultComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRaidExitNotice.RaidProcessNoticeTimeOut
// (Native, Public)

void UEFGFxWidgetRaidExitNotice::RaidProcessNoticeTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetRaidExitNotice_RaidProcessNoticeTimeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRaidFail.RaidProcessResultComplete
// (Native, Public)

void UEFGFxWidgetRaidFail::RaidProcessResultComplete()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetRaidFail_RaidProcessResultComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRaidHUD.RaidProcessTimeOut
// (Native, Public)

void UEFGFxWidgetRaidHUD::RaidProcessTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGFxWidgetRaidHUD_RaidProcessTimeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetTownShow
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUISlotData::SetTownShow(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetTownShow_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetToolTip
// (Native, Public)
// Parameters:
// struct FString                 Tooltipdata                    (Parm, NeedCtorLink)

void UEFUISlotData::SetToolTip(const struct FString& Tooltipdata)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetToolTip_Params params;
	params.Tooltipdata = Tooltipdata;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetRecommend
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUISlotData::SetRecommend(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetRecommend_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetFriendshipShow
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUISlotData::SetFriendshipShow(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetFriendshipShow_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetSealShow
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUISlotData::SetSealShow(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetSealShow_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetAdvBookShow
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUISlotData::SetAdvBookShow(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetAdvBookShow_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetTemporary
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUISlotData::SetTemporary(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetTemporary_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetTrash
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUISlotData::SetTrash(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetTrash_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetDisableType
// (Native, Public)
// Parameters:
// int                            iType                          (Parm)

void UEFUISlotData::SetDisableType(int iType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetDisableType_Params params;
	params.iType = iType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetTableID
// (Native, Public)
// Parameters:
// int                            NewTableID                     (Parm)

void UEFUISlotData::SetTableID(int NewTableID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetTableID_Params params;
	params.NewTableID = NewTableID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetTableID
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlotData::GetTableID()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetTableID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetUniqueData
// (Native, Public)
// Parameters:
// struct FString                 NewUniqueData                  (Parm, NeedCtorLink)

void UEFUISlotData::SetUniqueData(const struct FString& NewUniqueData)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetUniqueData_Params params;
	params.NewUniqueData = NewUniqueData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetUniqueData
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUISlotData::GetUniqueData()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetUniqueData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetLocked
// (Native, Public)
// Parameters:
// int                            iLockType                      (Parm)

void UEFUISlotData::SetLocked(int iLockType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetLocked_Params params;
	params.iLockType = iLockType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.IsLocked
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFUISlotData::IsLocked()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetItemGrade
// (Native, Public)
// Parameters:
// int                            NewGrade                       (Parm)

void UEFUISlotData::SetItemGrade(int NewGrade)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetItemGrade_Params params;
	params.NewGrade = NewGrade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetItemGrade
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlotData::GetItemGrade()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetItemGrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetSoundTheme
// (Native, Public)
// Parameters:
// struct FString                 NewSoundTheme                  (Parm, NeedCtorLink)

void UEFUISlotData::SetSoundTheme(const struct FString& NewSoundTheme)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetSoundTheme_Params params;
	params.NewSoundTheme = NewSoundTheme;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetSoundTheme
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUISlotData::GetSoundTheme()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetSoundTheme_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetDisabled
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UEFUISlotData::SetDisabled(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetDisabled_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.IsDisabled
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFUISlotData::IsDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_IsDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetLabelName
// (Native, Public)
// Parameters:
// struct FString                 NewLabelName                   (Parm, NeedCtorLink)

void UEFUISlotData::SetLabelName(const struct FString& NewLabelName)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetLabelName_Params params;
	params.NewLabelName = NewLabelName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetLabelName
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUISlotData::GetLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetLabelName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetCooltime
// (Native, Public)
// Parameters:
// float                          NewRemainTime                  (Parm)
// float                          NewTotalTime                   (Parm)

void UEFUISlotData::SetCooltime(float NewRemainTime, float NewTotalTime)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetCooltime_Params params;
	params.NewRemainTime = NewRemainTime;
	params.NewTotalTime = NewTotalTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetTotalCoolTime
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFUISlotData::GetTotalCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetTotalCoolTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.GetRemainCoolTime
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UEFUISlotData::GetRemainCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetRemainCoolTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetIconHeight
// (Native, Public)
// Parameters:
// int                            NewIconHeight                  (Parm)

void UEFUISlotData::SetIconHeight(int NewIconHeight)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetIconHeight_Params params;
	params.NewIconHeight = NewIconHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconHeight
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlotData::GetIconHeight()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetIconHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetIconWidth
// (Native, Public)
// Parameters:
// int                            NewIconWidth                   (Parm)

void UEFUISlotData::SetIconWidth(int NewIconWidth)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetIconWidth_Params params;
	params.NewIconWidth = NewIconWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconWidth
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlotData::GetIconWidth()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetIconWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetIconY
// (Native, Public)
// Parameters:
// int                            NewIconY                       (Parm)

void UEFUISlotData::SetIconY(int NewIconY)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetIconY_Params params;
	params.NewIconY = NewIconY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconY
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlotData::GetIconY()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetIconY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetIconX
// (Native, Public)
// Parameters:
// int                            NewIconX                       (Parm)

void UEFUISlotData::SetIconX(int NewIconX)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetIconX_Params params;
	params.NewIconX = NewIconX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconX
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlotData::GetIconX()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetIconX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetIconCount
// (Native, Public)
// Parameters:
// int                            NewIconIndex                   (Parm)

void UEFUISlotData::SetIconCount(int NewIconIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetIconCount_Params params;
	params.NewIconIndex = NewIconIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconCount
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlotData::GetIconCount()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetIconCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetIconPath
// (Native, Public)
// Parameters:
// struct FString                 NewIconPath                    (Parm, NeedCtorLink)

void UEFUISlotData::SetIconPath(const struct FString& NewIconPath)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetIconPath_Params params;
	params.NewIconPath = NewIconPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconPath
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUISlotData::GetIconPath()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetIconPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetWindowType
// (Native, Public)
// Parameters:
// int                            NewWindowType                  (Parm)

void UEFUISlotData::SetWindowType(int NewWindowType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetWindowType_Params params;
	params.NewWindowType = NewWindowType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetWindowType
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlotData::GetWindowType()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetWindowType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetSlotIndex
// (Native, Public)
// Parameters:
// int                            NewSlotIndex                   (Parm)

void UEFUISlotData::SetSlotIndex(int NewSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetSlotIndex_Params params;
	params.NewSlotIndex = NewSlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetSlotIndex
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlotData::GetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetBindID
// (Native, Public)
// Parameters:
// struct FString                 NewSlotID                      (Parm, NeedCtorLink)

void UEFUISlotData::SetBindID(const struct FString& NewSlotID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetBindID_Params params;
	params.NewSlotID = NewSlotID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetBindID
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEFUISlotData::GetBindID()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetBindID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetSlotType
// (Native, Public)
// Parameters:
// int                            NewSlotType                    (Parm)

void UEFUISlotData::SetSlotType(int NewSlotType)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetSlotType_Params params;
	params.NewSlotType = NewSlotType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetSlotType
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFUISlotData::GetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_GetSlotType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFUISlotData.SetIconData_New
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            SlotType                       (Parm)
// int                            SlotIndex                      (Parm)
// struct FString                 BindID                         (Parm, NeedCtorLink)
// struct FString                 IconKey                        (Parm, NeedCtorLink)
// TEnumAsByte<EItemGrade>        eItemGrade                     (Parm)
// int                            TableID                        (OptionalParm, Parm)
// int                            IconCount                      (OptionalParm, Parm)
// bool                           bTrash                         (OptionalParm, Parm)
// bool                           bTemporary                     (OptionalParm, Parm)

void UEFUISlotData::SetIconData_New(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconKey, TEnumAsByte<EItemGrade> eItemGrade, int TableID, int IconCount, bool bTrash, bool bTemporary)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetIconData_New_Params params;
	params.SlotType = SlotType;
	params.SlotIndex = SlotIndex;
	params.BindID = BindID;
	params.IconKey = IconKey;
	params.eItemGrade = eItemGrade;
	params.TableID = TableID;
	params.IconCount = IconCount;
	params.bTrash = bTrash;
	params.bTemporary = bTemporary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconData
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            SlotType                       (Parm)
// int                            SlotIndex                      (Parm)
// struct FString                 BindID                         (Parm, NeedCtorLink)
// struct FString                 IconPath                       (Parm, NeedCtorLink)
// int                            IconIndex                      (Parm)
// TEnumAsByte<EItemGrade>        eItemGrade                     (Parm)
// int                            TableID                        (OptionalParm, Parm)
// int                            IconCount                      (OptionalParm, Parm)
// bool                           bTrash                         (OptionalParm, Parm)
// bool                           bTemporary                     (OptionalParm, Parm)
// struct FString                 Tooltipdata                    (OptionalParm, Parm, NeedCtorLink)

void UEFUISlotData::SetIconData(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconPath, int IconIndex, TEnumAsByte<EItemGrade> eItemGrade, int TableID, int IconCount, bool bTrash, bool bTemporary, const struct FString& Tooltipdata)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetIconData_Params params;
	params.SlotType = SlotType;
	params.SlotIndex = SlotIndex;
	params.BindID = BindID;
	params.IconPath = IconPath;
	params.IconIndex = IconIndex;
	params.eItemGrade = eItemGrade;
	params.TableID = TableID;
	params.IconCount = IconCount;
	params.bTrash = bTrash;
	params.bTemporary = bTemporary;
	params.Tooltipdata = Tooltipdata;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetImageData_New
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            SlotType                       (Parm)
// int                            SlotIndex                      (Parm)
// struct FString                 BindID                         (Parm, NeedCtorLink)
// struct FString                 IconKey                        (Parm, NeedCtorLink)
// int                            TableID                        (OptionalParm, Parm)

void UEFUISlotData::SetImageData_New(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconKey, int TableID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetImageData_New_Params params;
	params.SlotType = SlotType;
	params.SlotIndex = SlotIndex;
	params.BindID = BindID;
	params.IconKey = IconKey;
	params.TableID = TableID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetImageData
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            SlotType                       (Parm)
// int                            SlotIndex                      (Parm)
// struct FString                 BindID                         (Parm, NeedCtorLink)
// struct FString                 IconPath                       (Parm, NeedCtorLink)
// int                            IconIndex                      (Parm)
// int                            TableID                        (OptionalParm, Parm)

void UEFUISlotData::SetImageData(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconPath, int IconIndex, int TableID)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFUISlotData_SetImageData_Params params;
	params.SlotType = SlotType;
	params.SlotIndex = SlotIndex;
	params.BindID = BindID;
	params.IconPath = IconPath;
	params.IconIndex = IconIndex;
	params.TableID = TableID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.Tick
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UEFGameViewportClient::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGameViewportClient_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.PostRender
// (Defined, Event, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UEFGameViewportClient::PostRender(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGameViewportClient_PostRender_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.CreateScreenshot
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FString                 ScreenshotFilename             (Const, Parm, OutParm, NeedCtorLink)
// bool                           bCreateAsync                   (OptionalParm, Parm)
// bool                           bAddInputInfo                  (OptionalParm, Parm)
// bool                           bUseBMP                        (OptionalParm, Parm)

void UEFGameViewportClient::CreateScreenshot(bool bCreateAsync, bool bAddInputInfo, bool bUseBMP, struct FString* ScreenshotFilename)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGameViewportClient_CreateScreenshot_Params params;
	params.bCreateAsync = bCreateAsync;
	params.bAddInputInfo = bAddInputInfo;
	params.bUseBMP = bUseBMP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenshotFilename != nullptr)
		*ScreenshotFilename = params.ScreenshotFilename;
}


// Function EFGame.EFGameViewportClient.InitRelativeTimeFadeInfo
// (Native, Public)

void UEFGameViewportClient::InitRelativeTimeFadeInfo()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGameViewportClient_InitRelativeTimeFadeInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.CacheViewProjectionMatrix
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bForceUpdate                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFGameViewportClient::CacheViewProjectionMatrix(bool bForceUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGameViewportClient_CacheViewProjectionMatrix_Params params;
	params.bForceUpdate = bForceUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFGameViewportClient.PostFadeInOutRender
// (Native, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UEFGameViewportClient::PostFadeInOutRender(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGameViewportClient_PostFadeInOutRender_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.SetHardwareMouseCursorVisibility
// (Defined, Simulated, Event, Public)
// Parameters:
// bool                           bIsVisible                     (Parm)

void UEFGameViewportClient::SetHardwareMouseCursorVisibility(bool bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFGameViewportClient_SetHardwareMouseCursorVisibility_Params params;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.UpdateDynamicProperty
// (Native, Public)

void AEFNxForceFieldTornado::UpdateDynamicProperty()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFNxForceFieldTornado_UpdateDynamicProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyHeightOffset
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyHeightOffset()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFNxForceFieldTornado_OnUpdatePropertyHeightOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceHeight
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyForceHeight()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFNxForceFieldTornado_OnUpdatePropertyForceHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyEscapeVelocity
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyEscapeVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFNxForceFieldTornado_OnUpdatePropertyEscapeVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftFalloffHeight
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyLiftFalloffHeight()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFNxForceFieldTornado_OnUpdatePropertyLiftFalloffHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceTopRadius
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyForceTopRadius()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFNxForceFieldTornado_OnUpdatePropertyForceTopRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceRadius
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyForceRadius()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFNxForceFieldTornado_OnUpdatePropertyForceRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftStrength
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyLiftStrength()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFNxForceFieldTornado_OnUpdatePropertyLiftStrength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRotationalStrength
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyRotationalStrength()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFNxForceFieldTornado_OnUpdatePropertyRotationalStrength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRadialStrength
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyRadialStrength()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFNxForceFieldTornado_OnUpdatePropertyRadialStrength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFData_MaskInfo.GetProperLevel
// (Native, Public)
// Parameters:
// TEnumAsByte<EFEQUIP_PART>      ePartsOwn                      (Parm)
// TEnumAsByte<EFEQUIP_PART>      ePartsRelated                  (Parm)
// TEnumAsByte<EFMASK_LEVEL>      eCurLevel                      (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UEFData_MaskInfo::GetProperLevel(TEnumAsByte<EFEQUIP_PART> ePartsOwn, TEnumAsByte<EFEQUIP_PART> ePartsRelated, TEnumAsByte<EFMASK_LEVEL> eCurLevel)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFData_MaskInfo_GetProperLevel_Params params;
	params.ePartsOwn = ePartsOwn;
	params.ePartsRelated = ePartsRelated;
	params.eCurLevel = eCurLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFExcelShell.GetColumNum
// (Defined, Event, Public)
// Parameters:
// struct FString                 strName                        (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEFExcelShell::GetColumNum(const struct FString& strName)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_GetColumNum_Params params;
	params.strName = strName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFExcelShell.NewLine
// (Defined, Event, Public)

void UEFExcelShell::NewLine()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_NewLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.ResetEdit
// (Defined, Event, Public)

void UEFExcelShell::ResetEdit()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_ResetEdit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SetLookPresetPosition
// (Final, Native, Public)
// Parameters:
// int                            ColNo                          (Parm)
// int                            RowNo                          (Parm)
// TEnumAsByte<ECELL_LOOK>        eLook                          (Parm)

void UEFExcelShell::SetLookPresetPosition(int ColNo, int RowNo, TEnumAsByte<ECELL_LOOK> eLook)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_SetLookPresetPosition_Params params;
	params.ColNo = ColNo;
	params.RowNo = RowNo;
	params.eLook = eLook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SetLookPresetRange
// (Final, Native, Public)
// Parameters:
// struct FString                 Range                          (Parm, NeedCtorLink)
// TEnumAsByte<ECELL_LOOK>        eLook                          (Parm)

void UEFExcelShell::SetLookPresetRange(const struct FString& Range, TEnumAsByte<ECELL_LOOK> eLook)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_SetLookPresetRange_Params params;
	params.Range = Range;
	params.eLook = eLook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.ReadStringRange
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FString                 Range                          (Parm, NeedCtorLink)
// TArray<struct FString>         outStringArr                   (Parm, OutParm, NeedCtorLink)
// bool                           IsRaw                          (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFExcelShell::ReadStringRange(const struct FString& Range, bool IsRaw, TArray<struct FString>* outStringArr)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_ReadStringRange_Params params;
	params.Range = Range;
	params.IsRaw = IsRaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outStringArr != nullptr)
		*outStringArr = params.outStringArr;

	return params.ReturnValue;
}


// Function EFGame.EFExcelShell.ReadString
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            ColNo                          (Parm)
// struct FString                 Value                          (Parm, OutParm, NeedCtorLink)

void UEFExcelShell::ReadString(int ColNo, struct FString* Value)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_ReadString_Params params;
	params.ColNo = ColNo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function EFGame.EFExcelShell.WriteString
// (Final, Native, Public)
// Parameters:
// int                            ColNo                          (Parm)
// struct FString                 Value                          (Parm, NeedCtorLink)

void UEFExcelShell::WriteString(int ColNo, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_WriteString_Params params;
	params.ColNo = ColNo;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.WriteName
// (Final, Native, Public)
// Parameters:
// int                            ColNo                          (Parm)
// struct FName                   Value                          (Parm)

void UEFExcelShell::WriteName(int ColNo, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_WriteName_Params params;
	params.ColNo = ColNo;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.WriteFloat
// (Final, Native, Public)
// Parameters:
// int                            ColNo                          (Parm)
// float                          Value                          (Parm)

void UEFExcelShell::WriteFloat(int ColNo, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_WriteFloat_Params params;
	params.ColNo = ColNo;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.WriteInt
// (Final, Native, Public)
// Parameters:
// int                            ColNo                          (Parm)
// int                            Value                          (Parm)

void UEFExcelShell::WriteInt(int ColNo, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_WriteInt_Params params;
	params.ColNo = ColNo;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.WriteUINT
// (Final, Native, Public)
// Parameters:
// int                            ColNo                          (Parm)
// int                            Value                          (Parm)

void UEFExcelShell::WriteUINT(int ColNo, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_WriteUINT_Params params;
	params.ColNo = ColNo;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SetSheetName
// (Final, Native, Public)
// Parameters:
// int                            nSheeteIndex                   (Parm)
// struct FString                 szSheetName                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFExcelShell::SetSheetName(int nSheeteIndex, const struct FString& szSheetName)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_SetSheetName_Params params;
	params.nSheeteIndex = nSheeteIndex;
	params.szSheetName = szSheetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFExcelShell.SetFont
// (Final, Native, Public)
// Parameters:
// struct FString                 Range                          (Parm, NeedCtorLink)
// struct FString                 FontName                       (Parm, NeedCtorLink)
// int                            FontSize                       (Parm)
// int                            FontColor                      (Parm)
// bool                           bBold                          (Parm)
// bool                           bItalic                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFExcelShell::SetFont(const struct FString& Range, const struct FString& FontName, int FontSize, int FontColor, bool bBold, bool bItalic)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_SetFont_Params params;
	params.Range = Range;
	params.FontName = FontName;
	params.FontSize = FontSize;
	params.FontColor = FontColor;
	params.bBold = bBold;
	params.bItalic = bItalic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFExcelShell.SetBorder
// (Final, Native, Public)
// Parameters:
// struct FString                 Range                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFExcelShell::SetBorder(const struct FString& Range)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_SetBorder_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFExcelShell.SetBackgroundColor
// (Final, Native, Public)
// Parameters:
// struct FString                 Range                          (Parm, NeedCtorLink)
// int                            BGColor                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFExcelShell::SetBackgroundColor(const struct FString& Range, int BGColor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_SetBackgroundColor_Params params;
	params.Range = Range;
	params.BGColor = BGColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFExcelShell.GetWorkSheetName
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            nSheetIndex                    (Parm)
// struct FString                 strSheetName                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFExcelShell::GetWorkSheetName(int nSheetIndex, struct FString* strSheetName)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_GetWorkSheetName_Params params;
	params.nSheetIndex = nSheetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (strSheetName != nullptr)
		*strSheetName = params.strSheetName;

	return params.ReturnValue;
}


// Function EFGame.EFExcelShell.SelectWorkSheet
// (Final, Native, Public)
// Parameters:
// int                            nSheetIndex                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFExcelShell::SelectWorkSheet(int nSheetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_SelectWorkSheet_Params params;
	params.nSheetIndex = nSheetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFExcelShell.SelectWorkSheetByName
// (Final, Native, Public)
// Parameters:
// struct FString                 strSheetName                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFExcelShell::SelectWorkSheetByName(const struct FString& strSheetName)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_SelectWorkSheetByName_Params params;
	params.strSheetName = strSheetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFExcelShell.SaveAs
// (Final, Native, Public)
// Parameters:
// struct FString                 FilePath                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFExcelShell::SaveAs(const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_SaveAs_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFExcelShell.OpenExcelFile
// (Final, Native, Public)
// Parameters:
// struct FString                 FilePath                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFExcelShell::OpenExcelFile(const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_OpenExcelFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFExcelShell.NewSheet
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFExcelShell::NewSheet()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_NewSheet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFExcelShell.NewExcelFile
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFExcelShell::NewExcelFile()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_NewExcelFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFExcelShell.AutoFitColomn
// (Final, Native, Public)
// Parameters:
// int                            ColNo                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFExcelShell::AutoFitColomn(int ColNo)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_AutoFitColomn_Params params;
	params.ColNo = ColNo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFExcelShell.AutoFitColumn
// (Final, Native, Public)
// Parameters:
// struct FString                 ColName                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFExcelShell::AutoFitColumn(const struct FString& ColName)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFExcelShell_AutoFitColumn_Params params;
	params.ColName = ColName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFLocalTrigger.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AEFLocalTrigger::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFLocalTrigger_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTrigger.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AEFLocalTrigger::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFLocalTrigger_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTrigger.IsCinematicControl
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AEFLocalTrigger::IsCinematicControl()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFLocalTrigger_IsCinematicControl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFLocalTrigger.IsLocalMode
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AEFLocalTrigger::IsLocalMode()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFLocalTrigger_IsLocalMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFLocalTriggerVolume.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AEFLocalTriggerVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFLocalTriggerVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTriggerVolume.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AEFLocalTriggerVolume::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFLocalTriggerVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTriggerVolume.IsCinematicControl
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AEFLocalTriggerVolume::IsCinematicControl()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFLocalTriggerVolume_IsCinematicControl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFLocalTriggerVolume.IsLocalMode
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AEFLocalTriggerVolume::IsLocalMode()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFLocalTriggerVolume_IsLocalMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFDataContainer.XmlExport
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 strPath                        (Parm, NeedCtorLink)
// struct FString                 strErrorMsg                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFDataContainer::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFDataContainer_XmlExport_Params params;
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;

	return params.ReturnValue;
}


// Function EFGame.EFDataContainer.XlsExport
// (Native, Public)
// Parameters:
// class UEFExcelShell*           Shell                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFDataContainer::XlsExport(class UEFExcelShell* Shell)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFDataContainer_XlsExport_Params params;
	params.Shell = Shell;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFDataContainer.XlsImport
// (Native, Public)
// Parameters:
// class UEFExcelShell*           Shell                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFDataContainer::XlsImport(class UEFExcelShell* Shell)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFDataContainer_XlsImport_Params params;
	params.Shell = Shell;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFDataContainer_CharacterCustomizing.XmlExport
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 strPath                        (Parm, NeedCtorLink)
// struct FString                 strErrorMsg                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFDataContainer_CharacterCustomizing::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFDataContainer_CharacterCustomizing_XmlExport_Params params;
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;

	return params.ReturnValue;
}


// Function EFGame.EFDataContainer_ColorPalette.XmlExport
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 strPath                        (Parm, NeedCtorLink)
// struct FString                 strErrorMsg                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFDataContainer_ColorPalette::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFDataContainer_ColorPalette_XmlExport_Params params;
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;

	return params.ReturnValue;
}


// Function EFGame.EFDataContainer_CustomizeBoneScale.XmlExport
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 strPath                        (Parm, NeedCtorLink)
// struct FString                 strErrorMsg                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFDataContainer_CustomizeBoneScale::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFDataContainer_CustomizeBoneScale_XmlExport_Params params;
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;

	return params.ReturnValue;
}


// Function EFGame.EFDataContainer_LookInfos.XmlExport
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 strPath                        (Parm, NeedCtorLink)
// struct FString                 strErrorMsg                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFDataContainer_LookInfos::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFDataContainer_LookInfos_XmlExport_Params params;
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;

	return params.ReturnValue;
}


// Function EFGame.EFDataContainer_NpcFunction.XmlExport
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 strPath                        (Parm, NeedCtorLink)
// struct FString                 strErrorMsg                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFDataContainer_NpcFunction::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFDataContainer_NpcFunction_XmlExport_Params params;
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;

	return params.ReturnValue;
}


// Function EFGame.EFDataContainer_Quest.XmlExport
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 strPath                        (Parm, NeedCtorLink)
// struct FString                 strErrorMsg                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFDataContainer_Quest::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFDataContainer_Quest_XmlExport_Params params;
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;

	return params.ReturnValue;
}


// Function EFGame.EFDataContainer_TexturePalette.XmlExport
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 strPath                        (Parm, NeedCtorLink)
// struct FString                 strErrorMsg                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEFDataContainer_TexturePalette::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFDataContainer_TexturePalette_XmlExport_Params params;
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;

	return params.ReturnValue;
}


// Function EFGame.EFLightBeam.SetActive
// (Native, Public)
// Parameters:
// bool                           bAct                           (Parm)

void AEFLightBeam::SetActive(bool bAct)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFLightBeam_SetActive_Params params;
	params.bAct = bAct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.SetLocationForceUpdateComponent
// (Native, Public)
// Parameters:
// struct FVector                 NewLocation                    (Parm)

void AEFItem::SetLocationForceUpdateComponent(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFItem_SetLocationForceUpdateComponent_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.SetLocationForce
// (Native, Public)
// Parameters:
// struct FVector                 NewLocation                    (Parm)

void AEFItem::SetLocationForce(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFItem_SetLocationForce_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}

// Function EFGame.EFItem.ClearAttachedPSIIndex
// (Native, Public)

void AEFItem::ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFItem_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.NotifyChangedBase
// (Native, Public)

void AEFItem::NotifyChangedBase()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFItem_NotifyChangedBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.EncroachedBy
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AEFItem::EncroachedBy(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFItem_EncroachedBy_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.BaseChange
// (Defined, Singular, Event, Public)

void AEFItem::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFItem_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.Destroyed
// (Defined, Simulated, Event, Public)

void AEFItem::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFItem_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInteractiveFoliageActor.TakeDamage
// (Simulated, Native, Event, HasOptionalParms, Public)
// Parameters:
// int                            Damage                         (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AEFInteractiveFoliageActor::TakeDamage(int Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFInteractiveFoliageActor_TakeDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.BreakAllConnectionsFrom
// (Native, Public)

void AEFMatineePathNode::BreakAllConnectionsFrom()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFMatineePathNode_BreakAllConnectionsFrom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.BreakAllConnections
// (Native, Public)

void AEFMatineePathNode::BreakAllConnections()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFMatineePathNode_BreakAllConnections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.BreakConnectionTo
// (Native, Public)
// Parameters:
// class AEFMatineePathNode*      NextActor                      (Parm)

void AEFMatineePathNode::BreakConnectionTo(class AEFMatineePathNode* NextActor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFMatineePathNode_BreakConnectionTo_Params params;
	params.NextActor = NextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.IsConnectedTo
// (Native, Public)
// Parameters:
// class AEFMatineePathNode*      NextActor                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AEFMatineePathNode::IsConnectedTo(class AEFMatineePathNode* NextActor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFMatineePathNode_IsConnectedTo_Params params;
	params.NextActor = NextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EFGame.EFMatineePathNode.AddConnectionTo
// (Native, Public)
// Parameters:
// class AEFMatineePathNode*      NextActor                      (Parm)

void AEFMatineePathNode::AddConnectionTo(class AEFMatineePathNode* NextActor)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFMatineePathNode_AddConnectionTo_Params params;
	params.NextActor = NextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.UpdateConnectedLineComponents
// (Native, Public)
// Parameters:
// bool                           bFinish                        (Parm)

void AEFMatineePathNode::UpdateConnectedLineComponents(bool bFinish)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFMatineePathNode_UpdateConnectedLineComponents_Params params;
	params.bFinish = bFinish;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.UpdateLineComponents
// (Native, Public)

void AEFMatineePathNode::UpdateLineComponents()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFMatineePathNode_UpdateLineComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxHUDWrapper.PostRender
// (Defined, Event, Public)

void AEFGFxHUDWrapper::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFGFxHUDWrapper_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxHUDWrapper.PostBeginPlay
// (Defined, Simulated, Public)

void AEFGFxHUDWrapper::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFGFxHUDWrapper_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxHUDWrapper.Destroyed
// (Defined, Singular, Event, Public)

void AEFGFxHUDWrapper::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	AEFGFxHUDWrapper_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetPostProcessEffectProperties.GetPostProcessEffects
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// TArray<class UPostProcessEffect*> PostProcessEffects             (Parm, OutParm, NeedCtorLink)
// class UClass*                  MatchingPostProcessEffectClass (OptionalParm, Parm)

void UEFSeqAct_SetPostProcessEffectProperties::GetPostProcessEffects(class UClass* MatchingPostProcessEffectClass, TArray<class UPostProcessEffect*>* PostProcessEffects)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_SetPostProcessEffectProperties_GetPostProcessEffects_Params params;
	params.MatchingPostProcessEffectClass = MatchingPostProcessEffectClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PostProcessEffects != nullptr)
		*PostProcessEffects = params.PostProcessEffects;
}


// Function EFGame.EFSeqAct_SetAmbientOcclusionEffectProperties.Activated
// (Defined, Event, Public)

void UEFSeqAct_SetAmbientOcclusionEffectProperties::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_SetAmbientOcclusionEffectProperties_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetBlurEffectProperties.Activated
// (Defined, Event, Public)

void UEFSeqAct_SetBlurEffectProperties::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_SetBlurEffectProperties_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetDOFEffectProperties.SetProperties
// (Defined, Public)
// Parameters:
// class UPostProcessEffect*      PostProcessEffect              (Parm)

void UEFSeqAct_SetDOFEffectProperties::SetProperties(class UPostProcessEffect* PostProcessEffect)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_SetDOFEffectProperties_SetProperties_Params params;
	params.PostProcessEffect = PostProcessEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetDOFEffectProperties.Activated
// (Defined, Event, Public)

void UEFSeqAct_SetDOFEffectProperties::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_SetDOFEffectProperties_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetDOFAndBloomEffectProperties.SetProperties
// (Defined, Public)
// Parameters:
// class UPostProcessEffect*      PostProcessEffect              (Parm)

void UEFSeqAct_SetDOFAndBloomEffectProperties::SetProperties(class UPostProcessEffect* PostProcessEffect)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_SetDOFAndBloomEffectProperties_SetProperties_Params params;
	params.PostProcessEffect = PostProcessEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetDOFBloomMotionBlurEffect.SetProperties
// (Defined, Public)
// Parameters:
// class UPostProcessEffect*      PostProcessEffect              (Parm)

void UEFSeqAct_SetDOFBloomMotionBlurEffect::SetProperties(class UPostProcessEffect* PostProcessEffect)
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_SetDOFBloomMotionBlurEffect_SetProperties_Params params;
	params.PostProcessEffect = PostProcessEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetMaterialEffectProperties.Activated
// (Defined, Event, Public)

void UEFSeqAct_SetMaterialEffectProperties::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_SetMaterialEffectProperties_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetMotionBlurEffectProperties.Activated
// (Defined, Event, Public)

void UEFSeqAct_SetMotionBlurEffectProperties::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_SetMotionBlurEffectProperties_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetUberPostProcessEffect.Activated
// (Defined, Event, Public)

void UEFSeqAct_SetUberPostProcessEffect::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_SetUberPostProcessEffect_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_TogglePostProcessEffect.Activated
// (Defined, Event, Public)

void UEFSeqAct_TogglePostProcessEffect::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("string was spoofed");

	UEFSeqAct_TogglePostProcessEffect_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
