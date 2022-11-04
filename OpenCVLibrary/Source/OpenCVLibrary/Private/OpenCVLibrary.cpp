// Copyright Epic Games, Inc. All Rights Reserved.



#include "OpenCVLibrary.h"
#include "Interfaces/IPluginManager.h"
#include "core.h"
#include "GenericPlatform/GenericPlatformFile.h"



#define LOCTEXT_NAMESPACE "FOpenCVLibraryModule"




void FOpenCVLibraryModule::StartupModule()
{
	// Get the base directory of this plugin
	FString BaseDir = IPluginManager::Get().FindPlugin("OpenCVLibrary")->GetBaseDir();
	FString LibraryPath;
#if PLATFORM_WINDOWS
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Source/Thirdparty/OpenCV/Libraries/Win64/opencv_world460.dll"));
#endif
	Handle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;

	if (Handle) {
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryOPened", "Failed to load example third party library"));
		FMessageDialog::Debugf(FText::FromString("Worked"));
		UE_LOG(LogTemp, Warning, TEXT("loaded the plugin"));

	}
	else {
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "Failed to load example third party library"));
		FMessageDialog::Debugf(FText::FromString("Worked NOT"));
	}
}

void FOpenCVLibraryModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FPlatformProcess::FreeDllHandle(Handle);
    Handle = nullptr;

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FOpenCVLibraryModule, OpenCVLibrary)