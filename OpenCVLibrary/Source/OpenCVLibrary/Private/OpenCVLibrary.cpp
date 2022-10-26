// Copyright Epic Games, Inc. All Rights Reserved.

#include "OpenCVLibrary.h"
#include "Interfaces/IPluginManager.h"





#define LOCTEXT_NAMESPACE "FOpenCVLibraryModule"

void FOpenCVLibraryModule::StartupModule()
{
	// Get the base directory of this plugin


}

void FOpenCVLibraryModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.


}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FOpenCVLibraryModule, OpenCVLibrary)