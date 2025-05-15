// Copyright Epic Games, Inc. All Rights Reserved.

#include "K_B_NGameMode.h"
#include "K_B_NCharacter.h"
#include "UObject/ConstructorHelpers.h"

AK_B_NGameMode::AK_B_NGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
