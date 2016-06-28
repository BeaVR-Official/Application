// Fill out your copyright notice in the Description page of Project Settings.

#include "BeaVRUnivers.h"
#include "HashClass.h"

UHashClass::UHashClass() {
}

FString UHashClass::GetStringToMD5(FString str)
{
    return FMD5::HashAnsiString(*str);
}
