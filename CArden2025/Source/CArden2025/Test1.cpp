// Fill out your copyright notice in the Description page of Project Settings.


#include "Test1.h"

// Sets default values
ATest1::ATest1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATest1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATest1::Tick(float DeltaTime)
{
	//operadores Artimeticos
	int32 sum = edad+30;
	float product = MyFloatVariable * 2.5f;
	
	// Estructuras de Control
	if (esInstructor) 
	// Imprime en consola
	UE_LOG(LogTemp, Warning, TEXT("%s es instructor y tiene %d años"), *nombre, edad);
	// Imprime en pantalla / viewport
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor: :Yellow,
	FString:: Printf(TEXT("%s es instructor y tiene %d años"), *nombre, edad));}
	
else {
UE_LOG(LogTemp, Warning, TEXT("%s no es instructor y tiene %d años"), *nombre, edad);
GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor: :Yellow,
FString::Printf(TEXT("%s no es instructor y tiene %d años"). *nombre. edad))•

}

//bucles o ciclos
fri (int32 i = 0; )