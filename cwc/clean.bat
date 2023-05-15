@echo off
echo Cpcdos OS2.2 project
echo Cleaning folders...
del obj/debug/*.o
del LibCpcdos.a
del LibElieDraw.a
del ../OS2.2/*.asm
del ../OS2.2/Cpcdos/FBGUI/*.asm
del ../OS2.2/Cpcdos/FBGUI/xfont/*.asm
echo done.