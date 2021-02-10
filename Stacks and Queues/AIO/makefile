frame: Program.o cStack.o cQueue.o
	g++ -o frame Program.o cStack.o cQueue.o

Program.o: Program.cpp
	g++ -c Program.cpp

cStack.o: cStack.cpp
	g++ -c cStack.cpp

cQueue.o: cQueue.cpp
	g++ -c cQueue.cpp

clean:
	rm -vf .*~ *.o frame 2>/dev/null
