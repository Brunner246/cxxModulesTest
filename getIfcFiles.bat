@echo off
setlocal enabledelayedexpansion

set "path=D:/source/cxxModulesTest/testLib/x64/Debug/"
set "options="

for %%f in (%path%*.ifc) do (
    set "options=!options! /reference "%%f""
)

echo %options%

@REM pause