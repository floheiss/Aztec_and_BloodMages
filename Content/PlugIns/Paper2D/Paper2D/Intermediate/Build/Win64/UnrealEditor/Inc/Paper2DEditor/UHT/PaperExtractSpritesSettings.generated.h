// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtractSprites/PaperExtractSpritesSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2DEDITOR_PaperExtractSpritesSettings_generated_h
#error "PaperExtractSpritesSettings.generated.h already included, missing '#pragma once' in PaperExtractSpritesSettings.h"
#endif
#define PAPER2DEDITOR_PaperExtractSpritesSettings_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperExtractSpritesSettings(); \
	friend struct Z_Construct_UClass_UPaperExtractSpritesSettings_Statics; \
public: \
	DECLARE_CLASS(UPaperExtractSpritesSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2DEditor"), NO_API) \
	DECLARE_SERIALIZER(UPaperExtractSpritesSettings)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPaperExtractSpritesSettings(UPaperExtractSpritesSettings&&); \
	UPaperExtractSpritesSettings(const UPaperExtractSpritesSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperExtractSpritesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperExtractSpritesSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperExtractSpritesSettings) \
	NO_API virtual ~UPaperExtractSpritesSettings();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_22_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2DEDITOR_API UClass* StaticClass<class UPaperExtractSpritesSettings>();

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperExtractSpriteGridSettings(); \
	friend struct Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics; \
public: \
	DECLARE_CLASS(UPaperExtractSpriteGridSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2DEditor"), NO_API) \
	DECLARE_SERIALIZER(UPaperExtractSpriteGridSettings)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPaperExtractSpriteGridSettings(UPaperExtractSpriteGridSettings&&); \
	UPaperExtractSpriteGridSettings(const UPaperExtractSpriteGridSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperExtractSpriteGridSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperExtractSpriteGridSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperExtractSpriteGridSettings) \
	NO_API virtual ~UPaperExtractSpriteGridSettings();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_55_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2DEDITOR_API UClass* StaticClass<class UPaperExtractSpriteGridSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h


#define FOREACH_ENUM_ESPRITEEXTRACTMODE(op) \
	op(ESpriteExtractMode::Auto) \
	op(ESpriteExtractMode::Grid) 

enum class ESpriteExtractMode : uint8;
template<> struct TIsUEnumClass<ESpriteExtractMode> { enum { Value = true }; };
template<> PAPER2DEDITOR_API UEnum* StaticEnum<ESpriteExtractMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
