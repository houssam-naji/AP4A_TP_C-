FLAGS = -std=c++11 -Wall
COMPILER=g++

OBJ = 	Server.o\
		Sensor.o\
		Scheduler.o\
		interface.o

run :
	./Main

build: $(OBJ)
	$(COMPILER) Main.cpp -o Main $(OBJ) $(FLAGS)

all: clear build run

clean:
	rm -f *.o

clear: clean
	rm -rf Main

%.o : %.cpp
	$(COMPILER) $(FLAGS) -o $@ -c $< 