// Copyright Epic Games, Inc. All Rights Reserved.

#include "Chapter_1GameMode.h"
#include "Chapter_1Character.h"
#include "UObject/ConstructorHelpers.h"

AChapter_1GameMode::AChapter_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
