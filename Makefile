cc= g++
.DEFALT_GOAL = calculadora
mut.o: mut.cpp mut.h
	$(cc) mult.cpp -c
soma.o: soma.cpp soma.h
	$(cc) soma.cpp -c
menu.o: menu.cpp menu.h
	$(cc) menu.cpp -c
divi.o: divi.cpp divi.h
	$(cc) divi.cpp -c
sub.o: sub.cpp sub.h
	$(cc) sub.cpp -c

calculadora: calculadora.cpp sub.o divi.o soma.o mut.o menu.o 
	$(cc) calculadora.cpp sub.o divi.o soma.o mut.o menu.o -o calculadora 

