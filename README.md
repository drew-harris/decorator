```make
buildLinux:
	clear
	clang++ -o app main.cpp -L./lib -lcalc
```

-L./lib

Lib is the prefix

-lcalc

lcalc gets changed to libcalc
