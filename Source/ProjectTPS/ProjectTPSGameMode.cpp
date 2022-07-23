// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectTPSGameMode.h"
#include "ProjectTPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectTPSGameMode::AProjectTPSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
