CXX = g++
TARGET = Reverse
OBJ = main.o
.PHONY: all clean
all: $(TARGET)
$(TARGET): $(OBJ)
	$(CXX) -o $(TARGET) $(OBJ)
	rm -f $(OBJ)
main.o: main.cpp header.hpp
	$(CXX) $(CXXGLAGS) -c main.cpp
clean:
	rm -f *.o $(TARGET)
