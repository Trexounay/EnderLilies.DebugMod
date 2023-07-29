call config.bat

REM Specific command to build the windows64bit using unreal engine
call "%UE4PATH%\Engine\Build\BatchFiles\RunUAT.bat" BuildCookRun^
 -nocompileeditor -SkipCookingEditorContent -installed -nop4^
 -project="%PROJPATH%\%PROJNAME%.uproject"^
 -prereqs -nodebuginfo -manifests -targetplatform=Win64 -clientconfig=Development -utf8output -iostore^
 -cook -stage -pak -package^
 -ddc=InstalledDerivedDataBackendGraph^
 
REM Remove the mod dir including subdirs and recreate it to be able to be built to again
if exist "%PROJPATH%\%MODNAME%\" RD /S /Q "%PROJPATH%\%MODNAME%"
MKDIR "%PROJPATH%\%MODNAME%"

REM Move all the files in the project that have chunk1 in them into the specified local mod dir
XCOPY "%PROJPATH%\Saved\StagedBuilds\WindowsNoEditor\%PROJNAME%\Content\Paks\*chunk1*" "%PROJPATH%\%MODNAME%\."

REM Rename the chunk1 files with the compatible mod name
For /R "%PROJPATH%\%MODNAME%\" %%# in ("*.*") Do (
  ren "%%#" "%MODNAME%_0_P%%~x#"
)

REM If the mod dir exists in the game path then remove the folder
if exist "%GAMEPATH%\Content\Paks\%MODNAME%\" RD /S /Q "%GAMEPATH%\Content\Paks\%MODNAME%%"

REM We copy the files from our local mod into the specified game paths folder
XCOPY /Y /C /I /E "%PROJPATH%\%MODNAME%" "%GAMEPATH%\Content\Paks\%MODNAME%"

REM Run the game
START G:\"Program Files (x86)"\Steam\steamapps\common\"ENDER LILIES - CP (Modded)"\EnderLilies.exe

