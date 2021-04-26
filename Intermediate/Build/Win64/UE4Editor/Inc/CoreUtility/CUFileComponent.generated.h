// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUTILITY_CUFileComponent_generated_h
#error "CUFileComponent.generated.h already included, missing '#pragma once' in CUFileComponent.h"
#endif
#define COREUTILITY_CUFileComponent_generated_h

#define socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReadBytesFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Directory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadBytesFromFile(Z_Param_Directory,Z_Param_FileName,Z_Param_Out_OutBytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveBytesToFile) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Directory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_UBOOL(Z_Param_bLogSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SaveBytesToFile(Z_Param_Out_Bytes,Z_Param_Directory,Z_Param_FileName,Z_Param_bLogSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExternalSaveDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ExternalSaveDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectSavedDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ProjectSavedDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ProjectDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectContentsDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ProjectContentsDirectory(); \
		P_NATIVE_END; \
	}


#define socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReadBytesFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Directory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadBytesFromFile(Z_Param_Directory,Z_Param_FileName,Z_Param_Out_OutBytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveBytesToFile) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Directory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_UBOOL(Z_Param_bLogSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SaveBytesToFile(Z_Param_Out_Bytes,Z_Param_Directory,Z_Param_FileName,Z_Param_bLogSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExternalSaveDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ExternalSaveDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectSavedDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ProjectSavedDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ProjectDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectContentsDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ProjectContentsDirectory(); \
		P_NATIVE_END; \
	}


#define socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCUFileComponent(); \
	friend struct Z_Construct_UClass_UCUFileComponent_Statics; \
public: \
	DECLARE_CLASS(UCUFileComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoreUtility"), NO_API) \
	DECLARE_SERIALIZER(UCUFileComponent)


#define socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCUFileComponent(); \
	friend struct Z_Construct_UClass_UCUFileComponent_Statics; \
public: \
	DECLARE_CLASS(UCUFileComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoreUtility"), NO_API) \
	DECLARE_SERIALIZER(UCUFileComponent)


#define socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCUFileComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCUFileComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCUFileComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCUFileComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCUFileComponent(UCUFileComponent&&); \
	NO_API UCUFileComponent(const UCUFileComponent&); \
public:


#define socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCUFileComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCUFileComponent(UCUFileComponent&&); \
	NO_API UCUFileComponent(const UCUFileComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCUFileComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCUFileComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCUFileComponent)


#define socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_12_PROLOG
#define socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_RPC_WRAPPERS \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_INCLASS \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_INCLASS_NO_PURE_DECLS \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CUFileComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUTILITY_API UClass* StaticClass<class UCUFileComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID socketio_Plugins_socket_Source_CoreUtility_Public_CUFileComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
