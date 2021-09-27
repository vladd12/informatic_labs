kalkul.exe : calculate.obj main.obj ;
	link /SUBSYSTEM:CONSOLE /OUT:kalkul.exe calculate.obj main.obj
calculate.obj : calculate.c calculate.h ; 
	cl /c calculate.c
main.obj : calculate.h ; 
	cl /c main.c
clean :
	del kalkul.exe calculate.obj main.obj
install :
	copy /-Y kalkul.exe "C:\Program Files\kalkul.exe"
uninstall :
	del "C:\Program Files\kalkul.exe"
