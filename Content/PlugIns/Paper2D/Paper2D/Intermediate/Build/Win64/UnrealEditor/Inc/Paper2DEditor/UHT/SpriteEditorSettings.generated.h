// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpriteEditor/SpriteEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2DEDITOR_SpriteEditorSettings_generated_h
#error "SpriteEditorSettings.generated.h already included, missing '#pragma once' in SpriteEditorSettings.h"
#endif
#define PAPER2DEDITOR_SpriteEditorSettings_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_SpriteEditor_SpriteEditorSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpriteEditorSettings(); \
	friend struct Z_Construct_UClass_USpriteEditorSettings_Statics; \
public: \
	DECLARE_CLASS(USpriteEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2DEditor"), NO_API) \
	DECLARE_SERIALIZER(USpriteEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_SpriteEditor_SpriteEditorSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USpriteEditorSettings(USpriteEditorSettings&&); \
	USpriteEditorSettings(const USpriteEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpriteEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpriteEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpriteEditorSettings) \
	NO_API virtual ~USpriteEditorSettings();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_SpriteEditor_SpriteEditorSettings_h_8_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_SpriteEditor_SpriteEditorSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_SpriteEditor_SpriteEditorSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_SpriteEditor_SpriteEditorSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2DEDITOR_API UClass* StaticClass<class USpriteEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_SpriteEditor_SpriteEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
