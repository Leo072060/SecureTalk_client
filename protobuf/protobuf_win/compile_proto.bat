@echo off
setlocal

:: ==== Configuration ====
set PROTOC_PATH=%~dp0bin\protoc.exe
set PROTO_SRC=%~dp0..\proto_file
set PROTO_INCLUDE=%~dp0..\proto_file
set OUT_DIR=%~dp0..\cpp

:: ==== Clean output directory ====
if exist "%OUT_DIR%" (
    echo Cleaning output directory "%OUT_DIR%" ...
    rmdir /s /q "%OUT_DIR%"
)

:: Create output directory if it doesn't exist
if not exist "%OUT_DIR%" mkdir "%OUT_DIR%"

:: ==== Loop through all .proto files ====
for /f "delims=" %%f in ('dir /b /a-d "%PROTO_SRC%\*.proto"') do (
    echo =====================================================
    echo Compiling: %%f
    :: print the exact command line that will be executed
    @REM echo Running: %PROTOC_PATH% --cpp_out=%OUT_DIR% -I"%PROTO_INCLUDE%" "%PROTO_SRC%\%%f"
    :: execute the command
    %PROTOC_PATH% --cpp_out=%OUT_DIR% -I"%PROTO_INCLUDE%" "%PROTO_SRC%\%%f"
    if errorlevel 1 (
        echo ERROR: Failed to compile "%%f"!
        pause
        exit /b 1
    )
)

echo Done.
endlocal
