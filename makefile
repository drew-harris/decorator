buildLinux:
	clear
	clang++ -o app main.cpp

run:
	clear
	./app

## Extra on linux -Wl, -rpath, ./lib
