momo:	main.o Quiz.o 
	g++ -o momo main.o Quiz.o 

main.o:	main.cc Quiz.cc 
	g++ -c main.cc

Quiz.o: Quiz.cc Quiz.h
	g++ -c Quiz.cc

clean:
	rm -f *.o momo
