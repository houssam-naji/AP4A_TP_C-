CC = g++
CXXFLAGS = -Wall
LDFLAGS = 

APPNAME = simulateur
EXT = .cpp
SRCDIR = src

SRC = $(wildcard $(SRCDIR)/*$(EXT))
OBJ = $(SRC:$(SRCDIR)/%$(EXT)=%.o)
DEP = $(OBJ:%.o=%.d)

all: $(APPNAME) run clean

$(APPNAME): $(OBJ)
	@$(CC) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

%.o: $(SRCDIR)/%$(EXT)
	@$(CC) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -rf *.o
	@rm -rf $(APPNAME)

run: $(APPNAME)
	@./$(APPNAME)