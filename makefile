CXX = g++
EXEC = prog
CFLAGS = -c -Wall -Wextra

SRC_PATH = src
BIN_PATH = bin
BIN_INT_PATH = bin-int

SRC := $(wildcard $(SRC_PATH)/*.cpp)
OBJ := $(SRC:$(SRC_PATH)/%.cpp=$(BIN_INT_PATH)/%.o)

.DEFAULT_GOAL := default

.PHONY: all exec dir

default: dir $(EXEC)
	@./$(BIN_PATH)/prog

$(EXEC): $(OBJ)
	@$(CXX) -o $(BIN_PATH)/$(EXEC) $^

$(BIN_INT_PATH)/%.o: $(SRC_PATH)/%.cpp
	@$(CXX) -o $@ $(CFLAGS) $<

dir:
	@mkdir -p $(BIN_PATH)
	@mkdir -p $(BIN_INT_PATH)

mrproper: clean
	@rm $(BIN_PATH)/$(EXEC)
	@rmdir $(BIN_PATH) $(BIN_INT_PATH)

clean:
	@rm $(BIN_INT_PATH)/*.o
