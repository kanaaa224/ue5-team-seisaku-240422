// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_OtitaRingoFPSGameMode.h"
#include "UE5_OtitaRingoFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_OtitaRingoFPSGameMode::AUE5_OtitaRingoFPSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
