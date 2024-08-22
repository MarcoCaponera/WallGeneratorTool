// Fill out your copyright notice in the Description page of Project Settings.


#include "WallGenTool/ExtGeneratedDynamicMeshActor.h"

TArray<FVector2D> AExtGeneratedDynamicMeshActor::CreateSquarePath(const FVector2D Diag) const
{
	FVector2D BotLeft = FVector2D(Diag.X * 0.5f * -1.f, 0.f);
	FVector2D BotRight = FVector2D(Diag.X * 0.5f, 0.f);
	FVector2D TopLeft = FVector2D(Diag.X * 0.5f * -1.f, Diag.Y);
	FVector2D TopRight = FVector2D(Diag.X * 0.5f, Diag.Y);
	TArray<FVector2D> Path;
	Path.Add(BotLeft);
	Path.Add(BotRight);
	Path.Add(TopRight);
	Path.Add(TopLeft);
	return Path;
}
