// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include <iostream>
using namespace std;

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

int main() {
	int TriggerBox = 5;
	if (TriggerBox < 4) 
	{
		cout << "You Win!";

	}
	else {
		cout << "You Lose, Try Again!";
	}
	return 0;
}