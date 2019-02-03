COMMON = ../common
CXX = g++
CXXFLAGS = -c

prog1: proj1.a
	$(CXX) -o $@ ./lib/proj1.a
	./prog1 "Chairs" "Dogs" < ./include/file1.txt > ./include/file2.txt


main.o: main.cc proj1.h
	$(CXX) $(CXXFLAGS) main.cc


proj1.o: proj1.cc proj1.h
	$(CXX) $(CXXFLAGS) proj1.cc

proj1.a: proj1.o main.o
	ar rcs $@ main.o proj1.o
	mkdir lib
	mkdir include
	mv proj1.a ./lib
	mv proj1.h ./lib
	mv main.cc ./include
	mv proj1.cc ./include
	mv *.txt ./include

clean:
	-rm main.o proj1.o ./lib/proj1.a prog1
	mv ./include/* ./
	mv ./lib/proj1.h ./
	rmdir lib
	rmdir include
