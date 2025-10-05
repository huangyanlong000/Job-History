
set MATLAB=D:\Matlab\Install

cd .

if "%1"=="" ("D:\Matlab\Install\bin\win64\gmake"  -f TNC2.mk all) else ("D:\Matlab\Install\bin\win64\gmake"  -f TNC2.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1