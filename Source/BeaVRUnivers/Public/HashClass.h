// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "HashClass.generated.h"
/**
 * 
 */

UCLASS()
class BEAVRUNIVERS_API UHashClass : public UObject
{
    GENERATED_BODY()

public:
    UHashClass();
    
    UFUNCTION(BlueprintCallable, Category = "Hash")
    static FString GetStringToMD5(FString str);
};
