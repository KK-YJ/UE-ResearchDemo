// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_ResearchGameMode.h"
#include "UE_ResearchCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_ResearchGameMode::AUE_ResearchGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
