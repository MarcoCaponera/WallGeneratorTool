// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeometryActors/GeneratedDynamicMeshActor.h"
#include "ExtGeneratedDynamicMeshActor.generated.h"

/**
 * 
 */
UCLASS()
class WALLGENERATORTOOL_API AExtGeneratedDynamicMeshActor : public AGeneratedDynamicMeshActor
{
	GENERATED_BODY()
	
protected:

	UFUNCTION(BlueprintCallable)
	TArray<FVector2D> CreateSquarePath(const FVector2D Diag) const;
};
