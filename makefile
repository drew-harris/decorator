buildLinux:
	clear
	clang++ -o app ./**.cpp

run:
	clear
	./app

## Extra on linux -Wl, -rpath, ./lib
