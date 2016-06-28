// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapImage;
#ifdef LEAPMOTION_LeapImageList_generated_h
#error "LeapImageList.generated.h already included, missing '#pragma once' in LeapImageList.h"
#endif
#define LEAPMOTION_LeapImageList_generated_h

#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		*(ULeapImage**)Z_Param__Result=this->getIndex(Z_Param_index); \
	}


#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		*(ULeapImage**)Z_Param__Result=this->getIndex(Z_Param_index); \
	}


#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULeapImageList(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapImageList(); \
	public: \
	DECLARE_CLASS(ULeapImageList, UObject, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapImageList) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<ULeapImageList*>(this); }


#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesULeapImageList(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapImageList(); \
	public: \
	DECLARE_CLASS(ULeapImageList, UObject, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapImageList) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<ULeapImageList*>(this); }


#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapImageList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapImageList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapImageList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapImageList); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapImageList(const ULeapImageList& InCopy); \
public:


#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapImageList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapImageList(const ULeapImageList& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapImageList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapImageList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapImageList)


#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h_6_PROLOG
#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h_9_RPC_WRAPPERS \
	BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h_9_INCLASS \
	BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h_9_INCLASS_NO_PURE_DECLS \
	BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h_9_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapImageList."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImageList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
