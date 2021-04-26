// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLatentActionInfo;
class UObject;
class UTexture2D;
enum class EImageFormatBPType : uint8;
class USoundWaveProcedural;
struct FTransform;
class USoundWave;
#ifdef COREUTILITY_CUBlueprintLibrary_generated_h
#error "CUBlueprintLibrary.generated.h already included, missing '#pragma once' in CUBlueprintLibrary.h"
#endif
#define COREUTILITY_CUBlueprintLibrary_generated_h

#define socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallFunctionOnThreadGraphReturn) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Function); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ThreadType); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCUBlueprintLibrary::CallFunctionOnThreadGraphReturn(Z_Param_Function,ESIOCallbackType(Z_Param_ThreadType),Z_Param_LatentInfo,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallFunctionOnThread) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Function); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ThreadType); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCUBlueprintLibrary::CallFunctionOnThread(Z_Param_Function,ESIOCallbackType(Z_Param_ThreadType),Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMeasureTimerStop) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Category); \
		P_GET_UBOOL(Z_Param_bShouldLogResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCUBlueprintLibrary::MeasureTimerStop(Z_Param_Category,Z_Param_bShouldLogResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMeasureTimerStart) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Category); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCUBlueprintLibrary::MeasureTimerStart(Z_Param_Category); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoginId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCUBlueprintLibrary::GetLoginId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNowUTCString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCUBlueprintLibrary::NowUTCString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TextureToBytes) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBuffer); \
		P_GET_ENUM(EImageFormatBPType,Z_Param_Format); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCUBlueprintLibrary::Conv_TextureToBytes(Z_Param_Texture,Z_Param_Out_OutBuffer,EImageFormatBPType(Z_Param_Format)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSoundWaveFromWavBytes) \
	{ \
		P_GET_OBJECT(USoundWaveProcedural,Z_Param_InSoundWave); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCUBlueprintLibrary::SetSoundWaveFromWavBytes(Z_Param_InSoundWave,Z_Param_Out_InBytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_CompactPositionBytesToTransforms) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InCompactBytes); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutTransforms); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCUBlueprintLibrary::Conv_CompactPositionBytesToTransforms(Z_Param_Out_InCompactBytes,Z_Param_Out_OutTransforms); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_CompactBytesToTransforms) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InCompactBytes); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutTransforms); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCUBlueprintLibrary::Conv_CompactBytesToTransforms(Z_Param_Out_InCompactBytes,Z_Param_Out_OutTransforms); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_SoundWaveToWavBytes) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_SoundWave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=UCUBlueprintLibrary::Conv_SoundWaveToWavBytes(Z_Param_SoundWave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_WavBytesToSoundWave) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundWave**)Z_Param__Result=UCUBlueprintLibrary::Conv_WavBytesToSoundWave(Z_Param_Out_InBytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_WavBytesToOpus) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=UCUBlueprintLibrary::Conv_WavBytesToOpus(Z_Param_Out_InBytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_OpusBytesToWav) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=UCUBlueprintLibrary::Conv_OpusBytesToWav(Z_Param_Out_InBytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BytesToTexture) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UCUBlueprintLibrary::Conv_BytesToTexture(Z_Param_Out_InBytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToBytes) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=UCUBlueprintLibrary::Conv_StringToBytes(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BytesToString) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCUBlueprintLibrary::Conv_BytesToString(Z_Param_Out_InBytes); \
		P_NATIVE_END; \
	}


#define socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallFunctionOnThreadGraphReturn) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Function); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ThreadType); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCUBlueprintLibrary::CallFunctionOnThreadGraphReturn(Z_Param_Function,ESIOCallbackType(Z_Param_ThreadType),Z_Param_LatentInfo,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallFunctionOnThread) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Function); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ThreadType); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCUBlueprintLibrary::CallFunctionOnThread(Z_Param_Function,ESIOCallbackType(Z_Param_ThreadType),Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMeasureTimerStop) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Category); \
		P_GET_UBOOL(Z_Param_bShouldLogResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCUBlueprintLibrary::MeasureTimerStop(Z_Param_Category,Z_Param_bShouldLogResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMeasureTimerStart) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Category); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCUBlueprintLibrary::MeasureTimerStart(Z_Param_Category); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoginId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCUBlueprintLibrary::GetLoginId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNowUTCString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCUBlueprintLibrary::NowUTCString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TextureToBytes) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBuffer); \
		P_GET_ENUM(EImageFormatBPType,Z_Param_Format); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCUBlueprintLibrary::Conv_TextureToBytes(Z_Param_Texture,Z_Param_Out_OutBuffer,EImageFormatBPType(Z_Param_Format)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSoundWaveFromWavBytes) \
	{ \
		P_GET_OBJECT(USoundWaveProcedural,Z_Param_InSoundWave); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCUBlueprintLibrary::SetSoundWaveFromWavBytes(Z_Param_InSoundWave,Z_Param_Out_InBytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_CompactPositionBytesToTransforms) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InCompactBytes); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutTransforms); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCUBlueprintLibrary::Conv_CompactPositionBytesToTransforms(Z_Param_Out_InCompactBytes,Z_Param_Out_OutTransforms); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_CompactBytesToTransforms) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InCompactBytes); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutTransforms); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCUBlueprintLibrary::Conv_CompactBytesToTransforms(Z_Param_Out_InCompactBytes,Z_Param_Out_OutTransforms); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_SoundWaveToWavBytes) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_SoundWave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=UCUBlueprintLibrary::Conv_SoundWaveToWavBytes(Z_Param_SoundWave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_WavBytesToSoundWave) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundWave**)Z_Param__Result=UCUBlueprintLibrary::Conv_WavBytesToSoundWave(Z_Param_Out_InBytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_WavBytesToOpus) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=UCUBlueprintLibrary::Conv_WavBytesToOpus(Z_Param_Out_InBytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_OpusBytesToWav) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=UCUBlueprintLibrary::Conv_OpusBytesToWav(Z_Param_Out_InBytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BytesToTexture) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UCUBlueprintLibrary::Conv_BytesToTexture(Z_Param_Out_InBytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToBytes) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=UCUBlueprintLibrary::Conv_StringToBytes(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BytesToString) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCUBlueprintLibrary::Conv_BytesToString(Z_Param_Out_InBytes); \
		P_NATIVE_END; \
	}


#define socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCUBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UCUBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UCUBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUtility"), NO_API) \
	DECLARE_SERIALIZER(UCUBlueprintLibrary)


#define socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUCUBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UCUBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UCUBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUtility"), NO_API) \
	DECLARE_SERIALIZER(UCUBlueprintLibrary)


#define socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCUBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCUBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCUBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCUBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCUBlueprintLibrary(UCUBlueprintLibrary&&); \
	NO_API UCUBlueprintLibrary(const UCUBlueprintLibrary&); \
public:


#define socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCUBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCUBlueprintLibrary(UCUBlueprintLibrary&&); \
	NO_API UCUBlueprintLibrary(const UCUBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCUBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCUBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCUBlueprintLibrary)


#define socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_PRIVATE_PROPERTY_OFFSET
#define socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_52_PROLOG
#define socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_PRIVATE_PROPERTY_OFFSET \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_RPC_WRAPPERS \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_INCLASS \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_PRIVATE_PROPERTY_OFFSET \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_INCLASS_NO_PURE_DECLS \
	socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUTILITY_API UClass* StaticClass<class UCUBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID socketio_Plugins_socket_Source_CoreUtility_Public_CUBlueprintLibrary_h


#define FOREACH_ENUM_ESIOCALLBACKTYPE(op) \
	op(CALLBACK_GAME_THREAD) \
	op(CALLBACK_BACKGROUND_THREADPOOL) \
	op(CALLBACK_BACKGROUND_TASKGRAPH) 
#define FOREACH_ENUM_EIMAGEFORMATBPTYPE(op) \
	op(EImageFormatBPType::Invalid) \
	op(EImageFormatBPType::PNG) \
	op(EImageFormatBPType::JPEG) \
	op(EImageFormatBPType::GrayscaleJPEG) \
	op(EImageFormatBPType::BMP) \
	op(EImageFormatBPType::ICO) \
	op(EImageFormatBPType::EXR) \
	op(EImageFormatBPType::ICNS) 

enum class EImageFormatBPType : uint8;
template<> COREUTILITY_API UEnum* StaticEnum<EImageFormatBPType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
