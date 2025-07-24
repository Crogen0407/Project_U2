// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_U2GameMode.h"
#include "Project_U2Character.h"
#include "UObject/ConstructorHelpers.h"

AProject_U2GameMode::AProject_U2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
