// Fill out your copyright notice in the Description page of Project Settings.

#include "BeaVRUnivers.h"
#include "CreateNewObject.h"

UObject* UCreateNewObject::NewObjectFromBlueprint(UObject* WorldContextObject, UClass* UC)
{
    UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject);
    UObject* tempObject = NewObject<UObject>(UC);
    
    return tempObject;
}