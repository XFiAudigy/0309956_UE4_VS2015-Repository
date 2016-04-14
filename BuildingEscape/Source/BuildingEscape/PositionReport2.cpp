// Fill out your copyright notice in the Description page of Project Settings.

#include "BuildingEscape.h"
#include "PositionReport2.h"


// Sets default values for this component's properties
UPositionReport2::UPositionReport2()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReport2::BeginPlay()
{
	Super::BeginPlay();

	FString OwnerName = GetOwner()->GetName();
	FVector OwnerVector = GetOwner()->GetActorLocation();
	FString OwnerVectStr = FString::Printf(TEXT("X = %f, Y = %f, Z = %f"), OwnerVector.X, OwnerVector.Y, OwnerVector.Z);

	UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *OwnerName, *OwnerVectStr);
	// ...
	
}


// Called every frame
void UPositionReport2::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

