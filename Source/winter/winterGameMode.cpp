// Copyright Epic Games, Inc. All Rights Reserved.

#include "winterGameMode.h"
#include "winterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AwinterGameMode::AwinterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
