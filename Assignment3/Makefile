PROJECT = transformer
LIBPROJECT = lib$(PROJECT).a
TESTPROJECT = test-$(PROJECT)
CXX = g++
A = ar
AFLAGS = rsv
CXXFLAGS = -I. -std=c++17 -Wall -g -fPIC
LDXXFLAGS = $(CXXGLAGS) -L. -l:$(LIBPROJECT)
LDGTESTFLAGS = $(LDXXFLAGS) -lgtest -lgtest_main -lpthread
DEPS = $(wildcard *.hpp)
OBJ = Weapon.o Planet.o Transformer.o Decepticon.o Autobot.o
TEST_OBJ = google-test.o
.PHONy: default
default: all
%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXGLAGS)
$(LIBPROJECT): $(OBJ)
	$(A) $(AFLAGS) $@ $^
$(PROJECT): main.o $(LIBPROJECT)
	$(CXX) -o $@ main.o $(LDXXFLAGS)
$(TESTPROJECT): $(LIBPROJECT) $(TEST_OBJ)
	$(CXX) -o $@ $(TEST_OBJ) $(LDGTESTFLAGS)
test : $(TESTPROJECT)
	./$(TESTPROJECT)
all : $(PROJECT)
.PHONY: clean
clean:
	rm -f *.o
cleanall: clean
	rm -f $(PROJECT)
	rm -f $(LIBPROJECT)
	rm -f $(TESTPROJECT)
