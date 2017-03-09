release:
  result: main.o WhoAreYou.o
	g++ main.o WhoAreYou.o -o result

  main.o: main.cpp
	g++ -c main.cpp

  WhoAreYou.o: WhoAreYou.cpp WhoAreYou.h
	g++ -c WhoAreYou.cpp

  clean:
	rm *.o result
	
debug:
  result: main.o WhoAreYou.o
	g++ -g main.o WhoAreYou.o -o result

  main.o: main.cpp
	g++ -g -c main.cpp

  WhoAreYou.o: WhoAreYou.cpp WhoAreYou.h
	g++ -g -c WhoAreYou.cpp

  clean:
	rm *.o result
