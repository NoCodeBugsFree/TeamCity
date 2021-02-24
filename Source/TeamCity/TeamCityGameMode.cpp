// Copyright Epic Games, Inc. All Rights Reserved.

#include "TeamCityGameMode.h"
#include "TeamCityCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeamCityGameMode::ATeamCityGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
