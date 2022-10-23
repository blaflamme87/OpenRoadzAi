// Copyright Epic Games, Inc. All Rights Reserved.

#include "OpenRoadzAiGameMode.h"
#include "OpenRoadzAiCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOpenRoadzAiGameMode::AOpenRoadzAiGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
