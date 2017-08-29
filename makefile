


objects= main.o factorial.o hello.o

main:$(objects)
	g++ -o main $(objects)




.PHONY : clean
clean:
	rm  -rf *.0

main.o : main.cpp functions.h 

factorial.o : factorial.cpp functions.h

hello.o : hello.cpp functions.h
