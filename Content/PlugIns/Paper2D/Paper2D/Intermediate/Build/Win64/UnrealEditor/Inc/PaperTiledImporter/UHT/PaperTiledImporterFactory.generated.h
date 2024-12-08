// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperTiledImporterFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPERTILEDIMPORTER_PaperTiledImporterFactory_generated_h
#error "PaperTiledImporterFactory.generated.h already included, missing '#pragma once' in PaperTiledImporterFactory.h"
#endif
#define PAPERTILEDIMPORTER_PaperTiledImporterFactory_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_PaperTiledImporter_Classes_PaperTiledImporterFactory_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUPaperTiledImporterFactory(); \
	friend struct Z_Construct_UClass_UPaperTiledImporterFactory_Statics; \
public: \
	DECLARE_CLASS(UPaperTiledImporterFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PaperTiledImporter"), NO_API) \
	DECLARE_SERIALIZER(UPaperTiledImporterFactory)


#define FID_Engine_Plugins_2D_Paper2D_Source_PaperTiledImporter_Classes_PaperTiledImporterFactory_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTiledImporterFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTiledImporterFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTiledImporterFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTiledImporterFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPaperTiledImporterFactory(UPaperTiledImporterFactory&&); \
	UPaperTiledImporterFactory(const UPaperTiledImporterFactory&); \
public: \
	NO_API virtual ~UPaperTiledImporterFactory();


#define FID_Engine_Plugins_2D_Paper2D_Source_PaperTiledImporter_Classes_PaperTiledImporterFactory_h_72_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_PaperTiledImporter_Classes_PaperTiledImporterFactory_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_PaperTiledImporter_Classes_PaperTiledImporterFactory_h_75_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_PaperTiledImporter_Classes_PaperTiledImporterFactory_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPERTILEDIMPORTER_API UClass* StaticClass<class UPaperTiledImporterFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_PaperTiledImporter_Classes_PaperTiledImporterFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
