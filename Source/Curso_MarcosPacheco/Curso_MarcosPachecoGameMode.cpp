// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Curso_MarcosPachecoGameMode.h"
#include "Curso_MarcosPachecoHUD.h"
#include "Curso_MarcosPachecoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACurso_MarcosPachecoGameMode::ACurso_MarcosPachecoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACurso_MarcosPachecoHUD::StaticClass();
}
