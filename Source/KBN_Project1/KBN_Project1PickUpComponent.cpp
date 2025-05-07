// Copyright Epic Games, Inc. All Rights Reserved.

#include "KBN_Project1PickUpComponent.h"

UKBN_Project1PickUpComponent::UKBN_Project1PickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UKBN_Project1PickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UKBN_Project1PickUpComponent::OnSphereBeginOverlap);
}

void UKBN_Project1PickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	AKBN_Project1Character* Character = Cast<AKBN_Project1Character>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
