@echo off
echo Cleaining up
del *.obj
del *.exe
del test.results
echo Compiling the library
cl /O2 /c hmarlog.c
echo Compiling test app
cl /O2 /c test.c
link test.obj hmarlog.obj /out:test.exe