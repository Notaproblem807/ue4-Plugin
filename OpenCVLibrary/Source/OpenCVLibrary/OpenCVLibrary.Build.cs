// Copyright Epic Games, Inc. All Rights Reserved.



using UnrealBuildTool;
using System.IO;
using System.Collections.Generic;



public class OpenCVLibrary : ModuleRules
{
	private string ThirdPartypath
	{
		get { return Path.GetFullPath(Path.Combine(ModuleDirectory,"../Thirdparty/")); }
	}

	private string Binarypath
    {
        get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../../../Binaries/Win64/")); }
    }

	private string ReadPath
    {
		get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../Thirdparty/OpenCV/Libraries/Win64/opencv_world460.dll")); }
    }

	private string createdpath
    {
		get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../../../Binaries/Win64/opencv_world460.dll")); }
    }

	private string createdpath2
	{
		get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../../../Binaries/Win64/opencv_world331.dll")); }
	}

	

	private string AutoSourcepath
    {
		get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../../../Source/")); }
	}

	private string cs
    {
		get { return Directory.GetDirectories(AutoSourcepath).GetValue(0).ToString().Replace(AutoSourcepath,""); }
    }
	

	private string check
	{
		get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../../../Source/Gamemathtutor/check.txt")); }
	}

	//Path.GetFullPath(Path.Combine(ModuleDirectory, "../../../../Source/%s/%s.Build.cs")),cs)

	private string Buildcsofproject
	{
		get { return string.Concat(AutoSourcepath,cs,"/",cs,".Build.cs"); }
	}

	public OpenCVLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
				Path.Combine(ModuleDirectory,"Public")
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
				Path.Combine(ModuleDirectory,"Private")
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

		RuntimeDependencies.Add(Path.Combine(ModuleDirectory,"../Thirdparty/OpenCV/Libraries/Win64/opencv_world460.dll"));
		RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "../Thirdparty/OpenCV/Libraries/Win64/opencv_videoio_ffmpeg460_64.dll"));
        if (!File.Exists(createdpath))
        {
			FileStream stream = File.Create(Binarypath + "opencv_world460.dll");
			byte[] value = File.ReadAllBytes(ReadPath);
			stream.Write(value, 0, value.Length);
			stream.Close();
		}
        if (!File.Exists(createdpath2))
        {
			FileStream Stream2 = File.Create(Binarypath + "opencv_world331.dll");
			byte[] value = File.ReadAllBytes(ReadPath);
			Stream2.Write(value, 0, value.Length);
			Stream2.Close();
		}
		
        if (File.Exists(Buildcsofproject))
        {
			string lines=File.ReadAllText(Buildcsofproject);
            if (!lines.Contains("OpenCVLibrary"))
            {
				lines = lines.Replace("\"InputCore\"", "\"InputCore\",\"OpenCVLibrary\"");
				File.WriteAllText(Buildcsofproject, lines);
			}	
        }
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
