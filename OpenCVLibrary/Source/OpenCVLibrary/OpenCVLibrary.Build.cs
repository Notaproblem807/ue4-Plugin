// Copyright Epic Games, Inc. All Rights Reserved.



using UnrealBuildTool;
using System.IO;




public class OpenCVLibrary : ModuleRules
{
	private string ThirdPartypath
	{
		get { return Path.GetFullPath(Path.Combine(ModuleDirectory,"../Thirdparty/")); }
	}


	public OpenCVLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"InputCore",
				"HeadMountedDisplay",
				"RHI",
				"RenderCore",
				"Slate",
				"SlateCore",
				"OpenCV",
				"Projects"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

		LoadOpenCv(Target);

		RuntimeDependencies.Add("$(PluginDir)/Binaries/Win64/opencv_world460.dll");
		RuntimeDependencies.Add("$(PluginDir)/Binaries/Win64/opencv_videoio_ffmpeg460_64.dll");
		

	}



	public bool LoadOpenCv(ReadOnlyTargetRules Target)
	{
		bool isLibrarySupported = false;
		// Create OpenCV Path 
		string OpenCVPath = Path.Combine(ThirdPartypath, "OpenCV");
		//get lib path
		string LibPath = "";
		bool isDebug = Target.Configuration == UnrealTargetConfiguration.Debug;
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			LibPath = Path.Combine(OpenCVPath, "Libraries", "Win64");
			isLibrarySupported = true;
		}
		else
		{
			string Err = string.Format("{0} dedicated server is made to depend on {1}. We want to avoid this, please correct module dependencies.", Target.Platform.ToString(), this.ToString()); System.Console.WriteLine(Err);
		}
		if (isLibrarySupported)
		{
			//Add Include path 
			PublicIncludePaths.AddRange(new string[] { Path.Combine(OpenCVPath, "include") });

			// Add Library Path 
			PublicLibraryPaths.Add(LibPath);

			//Add Static Libraries
			PublicAdditionalLibraries.Add("opencv_world460.lib");

			//Add Dynamic Libraries
			PublicDelayLoadDLLs.Add("opencv_world460.dll");
			PublicDelayLoadDLLs.Add("opencv_videoio_ffmpeg460_64.dll");

			

			
		}
		Definitions.Add(string.Format("WITH_OPENCV_BINDING={0}", isLibrarySupported ? 1 : 0));

		return isLibrarySupported;
	}
}
