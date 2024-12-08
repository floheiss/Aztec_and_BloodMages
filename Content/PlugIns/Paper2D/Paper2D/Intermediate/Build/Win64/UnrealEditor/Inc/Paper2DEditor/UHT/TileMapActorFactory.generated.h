// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TileMapActorFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2DEDITOR_TileMapActorFactory_generated_h
#error "TileMapActorFactory.generated.h already included, missing '#pragma once' in TileMapActorFactory.h"
#endif
#define PAPER2DEDITOR_TileMapActorFactory_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapActorFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTileMapActorFactory(); \
	friend struct Z_Construct_UClass_UTileMapActorFactory_Statics; \
public: \
	DECLARE_CLASS(UTileMapActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2DEditor"), NO_API) \
	DECLARE_SERIALIZER(UTileMapActorFactory)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapActorFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileMapActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileMapActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileMapActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileMapActorFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTileMapActorFactory(UTileMapActorFactory&&); \
	UTileMapActorFactory(const UTileMapActorFactory&); \
public: \
	NO_API virtual ~UTileMapActorFactory();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapActorFactory_h_11_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapActorFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapActorFactory_h_14_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapActorFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2DEDITOR_API UClass* StaticClass<class UTileMapActorFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapActorFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
