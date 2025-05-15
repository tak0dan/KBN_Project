// Copyright Epic Games, Inc. All Rights Reserved.

#include "K_B_NPickUpComponent.h"

UK_B_NPickUpComponent::UK_B_NPickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UK_B_NPickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UK_B_NPickUpComponent::OnSphereBeginOverlap);
}

void UK_B_NPickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	AK_B_NCharacter* Character = Cast<AK_B_NCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
