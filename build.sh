clear
echo Building Cpcdos OS2.2 ARM
echo Made by Meaxy Kusama
echo Building C++
echo ***Building xfont lib***
./xfont.sh
echo ***Building xfont lib done***

echo ***Building fucntions.cpp***
g++ -c OS2.2/Cpcdos/bas2cppfunc/functions.cpp -o obj/functions.o
echo ***Building functions.cpp done***

echo ***Building loader.cpp***
g++ -c OS2.2/Cpcdos/Core/loader.cpp -o obj/loader.o
echo ***Building loader.cpp done***

echo ***Building cpcdos.cpp***
g++ -c OS2.2/Cpcdos/Core/cpcdos.cpp -o obj/cpcdos.o
echo ***Building cpcdos.cpp done***

echo ***Building loadscr.cpp***
g++ -c OS2.2/Cpcdos/Core/loadscr.cpp -o obj/loadscr.o
echo ***Building loadscr.cpp done***

echo ***Building CpcdosCP.cpp***
g++ -c OS2.2/Cpcdos/CpcdosCP/CpcdosCP.cpp -o obj/CpcdosCP.o
echo ***Building CpcdosCP.cpp done***

echo ***Building ccp.cpp***
g++ -c OS2.2/Cpcdos/CpcdosCP/ccp.cpp -o obj/ccp.o
echo ***Building ccp.cpp done***

echo ***Building exe.cpp***
g++ -c OS2.2/Cpcdos/CpcdosCP/exe.cpp -o obj/exe.o
echo ***Building exe.cpp done***

echo ***Building txt.cpp***
g++ -c OS2.2/Cpcdos/CpcdosCP/txt.cpp -o obj/txt.o
echo ***Building txt.cpp done***

echo ***Building variables.cpp***
g++ -c OS2.2/Cpcdos/CpcdosCP/variables.cpp -o obj/variables.o
echo ***Building variables.cpp done***

echo ***Building services.cpp***
g++ -c OS2.2/Cpcdos/CpcdosCP/services.cpp -o obj/services.o
echo ***Building services.cpp done***

echo ***Building debug.cpp***
g++ -c OS2.2/Cpcdos/Debug/debug.cpp -o obj/debug.o
echo ***Building debug.cpp done***

echo ***Building mxdos.cpp***
g++ -c OS2.2/Cpcdos/MXDOS/mxdos.cpp -o obj/mxdos.o
echo ***Building mxdos.cpp done***

echo ***Building ping.cpp***
g++ -c OS2.2/Cpcdos/Network/ping.cpp -o obj/ping.o
echo ***Building ping.cpp done***

echo ***Building SCI.cpp***
g++ -c OS2.2/Cpcdos/FBGUI/SCI.cpp -o obj/SCI.o
echo ***Building SCI.cpp done***

echo ***Creating LIBCpcdos.a***
ar -crs libcpcdos.a obj/SCI.o obj/ping.o obj/mxdos.o obj/debug.o obj/services.o obj/variables.o obj/txt.o \
    obj/exe.o obj/ccp.o obj/CpcdosCP.o obj/loadscr.o obj/cpcdos.o obj/loader.o obj/functions.o
echo ***Creating LIBCpcdos.a done***

echo ***Building ElieDraw FreeBASIC***
fbc -v -p /usr/local/lib/freebasic/linux-arm/ @ARGS.CFG
echo ***Building ElieDraw FreeBASIC done***

echo ***Copying LIBElieDraw.a LIBCpcdos.a and libxfont.a***
cp libeliedraw.a /usr/local/lib/freebasic/linux-arm/libeliedraw.a
cp libcpcdos.a /usr/local/lib/freebasic/linux-arm/libcpcdos.a
cp libxfont.a /usr/local/lib/freebasic/linux-arm/libxfont.a
echo ***LIBElieDraw.a LIBCpcdos.a and libxfont.a copied***

echo ***Building CPCDOS_INIT.BAS***
fbc -v -p /usr/local/lib/freebasic/linux-arm/ -l stdc++ -l ncurses -l fbgfx -l png -l z @ARGS2.CFG
echo ***Building CPCDOS_INIT.BAS done***

echo ***Copying cpcldr to BIN/***
cp cpcldr bin/cpcldr
echo ***Copying cpcldr to BIN/ done***

echo ***Cleaning folders...***
echo ***Cleaning done***






