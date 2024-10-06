CXX = g++
TARGET = StackCal
OBJ = main.o stack.o calculator.o
.PHONY: all clean
all: $(TARGET)
$(TARGET): $(OBJ)
	$(CXX) -o $(TARGET) $(OBJ)
	rm -f $(OBJ)
main.o: main.cpp stack.hpp
	$(CXX) $(CXXGLAGS) -c main.cpp
stack.o: stack.cpp stack.hpp
	$(CXX) $(CXXFLAGS) -c stack.cpp
calculator.o: calculator.cpp stack.hpp
	$(CXX) $(CXXFLAGS) -c calculator.cpp
clean:
	rm -f *.o $(TARGET)
