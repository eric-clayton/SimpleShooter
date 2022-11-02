// Fill out your copyright notice in the Description page of Project Settings.


#include "KillEmAllGameMode.h"

void AKillEmAllGameMode::PawnKilled(APawn* PawnKilled)
{
	Super::PawnKilled(PawnKilled);
	
	APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
	if (PlayerController != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Pawn was killed"));
		PlayerController->GameHasEnded(nullptr, false);
	}
	//Logout(PawnKilled->GetController());
}
