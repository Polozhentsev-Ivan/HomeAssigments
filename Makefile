CXX = g++
TARGET = hello_world_v2
OBJ = main.o Hello.o
.PHONY: all clean
all: $(TARGET)
$(TARGET): $(OBJ)
	$(CXX) -o $(TARGET) $(OBJ)
	
main.o: main.cpp Hello.hpp
	$(CXX) $(CXXGLAGS) -c main.cpp
Hello.o: Hello.cpp Hello.hpp
	$(CXX) $(CXXFLAGS) -c Hello.cpp
clean:
	rm -f *.o $(TARGET)
