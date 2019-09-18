// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "Components/ActorComponent.h"
#include "Opendor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BULESCPAE_API UOpendor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpendor();

	// Called when the game starts
	virtual void BeginPlay() override;

	void OpenDoor();
	void CloseDoor();
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere)
	float OpenAngle = -90.0f;

	UPROPERTY(EditANywhere)
		ATriggerVolume*PressurePlate;
	
	UPROPERTY(EditANywhere)
		float DoorCloseDelay = 1.0f;

	float LastDoorOpenTime;


	AActor* ActorThatOpens;
	AActor* Owner;

		
};
