# @author Victor Mira
# @file Makefile
# @date 04/10/2020
# @brief permettre la compilation, l'execution et la suppression de fichiers plus rapidement et simplement

#compiler
CXX= g++
#flags: currently show the warnings
CXXFLAGS= -c -Wall
#executable name
EXEC = Exe
#src files (all the .cpp files)
SRC = $(wildcard *.cpp)
#obj files (all the .o files)
OBJ = $(SRC:.cpp=.o)

all: $(EXEC)	#default : compile all the .cpp files in an executable

run: $(EXEC)	#compile and run
	./$<

$(EXEC): $(OBJ)		#compile all the .o files into an executable
	$(CXX) -o $@ $^ 

%.o: %.cpp		#create all the .o files using .cpp files
	$(CXX) -o $@ $(CXXFLAGS) $<

clean:		#clean all .o files
	rm -rf *o

cleanall: clean		#clean all .o files and the executable
	-rm -rf $(EXEC)