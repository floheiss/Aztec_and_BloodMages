// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TileMapAssetImportData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2DEDITOR_TileMapAssetImportData_generated_h
#error "TileMapAssetImportData.generated.h already included, missing '#pragma once' in TileMapAssetImportData.h"
#endif
#define PAPER2DEDITOR_TileMapAssetImportData_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTileSetImportMapping_Statics; \
	PAPER2DEDITOR_API static class UScriptStruct* StaticStruct();


template<> PAPER2DEDITOR_API UScriptStruct* StaticStruct<struct FTileSetImportMapping>();

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUTileMapAssetImportData(); \
	friend struct Z_Construct_UClass_UTileMapAssetImportData_Statics; \
public: \
	DECLARE_CLASS(UTileMapAssetImportData, UAssetImportData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2DEditor"), NO_API) \
	DECLARE_SERIALIZER(UTileMapAssetImportData)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileMapAssetImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileMapAssetImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileMapAssetImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileMapAssetImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTileMapAssetImportData(UTileMapAssetImportData&&); \
	UTileMapAssetImportData(const UTileMapAssetImportData&); \
public: \
	NO_API virtual ~UTileMapAssetImportData();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_28_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_31_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2DEDITOR_API UClass* StaticClass<class UTileMapAssetImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
