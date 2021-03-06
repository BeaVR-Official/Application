// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */

#include "CreateNewObject.generated.h"

UCLASS()
class UCreateNewObject : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure, meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Create Object From Blueprint", CompactNodeTitle = "Create", Keywords = "new create blueprint"), Category = Game)
    static UObject* NewObjectFromBlueprint(UObject* WorldContextObject, UClass* UC);
};