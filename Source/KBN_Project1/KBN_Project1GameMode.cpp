// Copyright Epic Games, Inc. All Rights Reserved.

#include "KBN_Project1GameMode.h"
#include "KBN_Project1Character.h"
#include "UObject/ConstructorHelpers.h"

AKBN_Project1GameMode::AKBN_Project1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
