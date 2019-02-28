cc= g++
.DEFALT_GOAL = calculadora
div.o(alvo): div.cpp div.h(depende dessas coisas aqui)
	     $(cc) div.cpp -c(para o alvo ser gerado eu rodo isso aqui)
mut.o: mut.cpp mut.h
	$(cc) mult.cpp -c
soma.o: soma.cpp soma.h
	 soma.cpp -c
menu.o: menu.cpp menu.h
	$(cc) menu.cpp -c
div.o: div.cpp div.h
	$(cc) div.cpp -c
sub.o: sub.cpp sub.h
	$(cc) sub.cpp -c

calculadora: caculadora.cpp sub.o div.o soma.o mut.o menu.o 
	%(cc) caculadora.cpp sub.o div.o soma.o mut.o menu.o -o calculadora 

