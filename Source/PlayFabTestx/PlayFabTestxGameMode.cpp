// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlayFabTestxGameMode.h"
#include "PlayFabTestxCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlayFabTestxGameMode::APlayFabTestxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
