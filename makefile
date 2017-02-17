main:	main.o Stark.o Lannister.o Targaryen.o FamiliaNoble.o Dothraki.o GuardiaReal.o
	g++ main.o Stark.o Lannister.o Targaryen.o FamiliaNoble.o Dothraki.o GuardiaReal.o -o main

main.o:	main.cpp Stark.h Lannister.h Targaryen.h FamiliaNoble.h Dothraki.h GuardiaReal.h
	g++ -c main.cpp

Stark.o: Stark.h Stark.cpp 
	g++ -c Stark.cpp FamiliaNoble.cpp

Lannister.o: Lannister.h Lannister.cpp 
	g++ -c Lannister.cpp GuardiaReal.cpp

Targaryen.o: Targaryen.h Targaryen.cpp 
	g++ -c Targaryen.cpp Dothraki.cpp

FamiliaNoble.o: FamiliaNoble.h FamiliaNoble.cpp
	g++ -c FamiliaNoble.cpp

Dothraki.o: Dothraki.h Dothraki.cpp
	g++ -c Dothraki.cpp

GuardiaReal.o: GuardiaReal.h GuardiaReal.cpp
	g++ -c GuardiaReal.cpp
