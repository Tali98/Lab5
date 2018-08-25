main.out: main.o Platos.o Ingredientes.o Clientes.o
	g++ main.o Platos.o Ingredientes.o Clientes.o -o main.out

main.o:	main.cpp Platos.h Ingredientes.h Clientes.h
	g++ -c main.cpp

Platos.o:	Platos.cpp Platos.h 
	g++ -c Platos.cpp

Ingredientes.o: Ingredientes.cpp Ingredientes.h
	g++ -c Ingredientes.cpp

Clientes.o:	Clientes.cpp Clientes.h
	g++ -c Clientes.cpp

clean:
	rm *.o main.out
