all: A.cpp
	g++ -o A A.cpp
	./A

clean:
	rm A *.o
