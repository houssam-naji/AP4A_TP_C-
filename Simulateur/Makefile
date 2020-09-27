CXX = g++
CXXFLAGS = -Wall
LDFLAGS =

MKDIR = mkdir 

EXEC= simulateur
EXT = .cpp

SRCDIR = src
BUILDDIR= build
BINDIR= bin

SRC = $(wildcard $(SRCDIR)/*$(EXT)) 
OBJ = $(SRC:$(SRCDIR)/%.cpp=$(BUILDDIR)/%.o)

all: $(EXEC) run

$(EXEC): $(OBJ)
	@$(MKDIR) -p $(BINDIR)
	@$(CXX) $(CXXFLAGS) -o $(BINDIR)/$@ $^ $(LDFLAGS)

$(BUILDDIR)/%.o: $(SRCDIR)/%$(EXT)
	@$(MKDIR) -p $(BUILDDIR)
	@$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf $(BUILDDIR)

mrproper: clean
	rm -rf $(BINDIR)

run: $(EXEC)
	@./$(BINDIR)/$(EXEC)
