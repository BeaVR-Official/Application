// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapHand;
#ifdef LEAPMOTION_LeapHandList_generated_h
#error "LeapHandList.generated.h already included, missing '#pragma once' in LeapHandList.h"
#endif
#define LEAPMOTION_LeapHandList_generated_h

#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		*(ULeapHand**)Z_Param__Result=this->getIndex(Z_Param_index); \
	} \
 \
	DECLARE_FUNCTION(execRightmost) \
	{ \
		P_FINISH; \
		*(ULeapHand**)Z_Param__Result=this->Rightmost(); \
	} \
 \
	DECLARE_FUNCTION(execLeftmost) \
	{ \
		P_FINISH; \
		*(ULeapHand**)Z_Param__Result=this->Leftmost(); \
	} \
 \
	DECLARE_FUNCTION(execFrontmost) \
	{ \
		P_FINISH; \
		*(ULeapHand**)Z_Param__Result=this->Frontmost(); \
	}


#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		*(ULeapHand**)Z_Param__Result=this->getIndex(Z_Param_index); \
	} \
 \
	DECLARE_FUNCTION(execRightmost) \
	{ \
		P_FINISH; \
		*(ULeapHand**)Z_Param__Result=this->Rightmost(); \
	} \
 \
	DECLARE_FUNCTION(execLeftmost) \
	{ \
		P_FINISH; \
		*(ULeapHand**)Z_Param__Result=this->Leftmost(); \
	} \
 \
	DECLARE_FUNCTION(execFrontmost) \
	{ \
		P_FINISH; \
		*(ULeapHand**)Z_Param__Result=this->Frontmost(); \
	}


#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULeapHandList(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapHandList(); \
	public: \
	DECLARE_CLASS(ULeapHandList, UObject, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapHandList) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<ULeapHandList*>(this); }


#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesULeapHandList(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapHandList(); \
	public: \
	DECLARE_CLASS(ULeapHandList, UObject, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapHandList) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<ULeapHandList*>(this); }


#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapHandList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapHandList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapHandList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapHandList); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapHandList(const ULeapHandList& InCopy); \
public:


#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapHandList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapHandList(const ULeapHandList& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapHandList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapHandList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapHandList)


#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h_6_PROLOG
#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h_9_RPC_WRAPPERS \
	BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h_9_INCLASS \
	BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h_9_INCLASS_NO_PURE_DECLS \
	BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h_9_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapHandList."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BeaVRUnivers_Plugins_LeapMotion_Source_LeapMotion_Public_LeapHandList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
