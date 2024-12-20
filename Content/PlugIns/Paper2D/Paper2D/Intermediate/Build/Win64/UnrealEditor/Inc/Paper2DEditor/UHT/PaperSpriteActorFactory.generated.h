// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperSpriteActorFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2DEDITOR_PaperSpriteActorFactory_generated_h
#error "PaperSpriteActorFactory.generated.h already included, missing '#pragma once' in PaperSpriteActorFactory.h"
#endif
#define PAPER2DEDITOR_PaperSpriteActorFactory_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteActorFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPaperSpriteActorFactory(); \
	friend struct Z_Construct_UClass_UPaperSpriteActorFactory_Statics; \
public: \
	DECLARE_CLASS(UPaperSpriteActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2DEditor"), NO_API) \
	DECLARE_SERIALIZER(UPaperSpriteActorFactory)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteActorFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperSpriteActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperSpriteActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperSpriteActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperSpriteActorFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPaperSpriteActorFactory(UPaperSpriteActorFactory&&); \
	UPaperSpriteActorFactory(const UPaperSpriteActorFactory&); \
public: \
	NO_API virtual ~UPaperSpriteActorFactory();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteActorFactory_h_11_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteActorFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteActorFactory_h_14_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteActorFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2DEDITOR_API UClass* StaticClass<class UPaperSpriteActorFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteActorFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
