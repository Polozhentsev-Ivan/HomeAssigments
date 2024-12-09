PROJECT = transformer
LIBPROJECT = lib$(PROJECT).a
TESTPROJECT = test-$(PROJECT)
CXX = g++
A = ar
AFLAGS = rsv
CXXFLAGS = -I. -std=c++17 -Wall -g -fPIC -Werror -Wpedantic
LDXXFLAGS = $(CXXGLAGS) -L. -l:$(LIBPROJECT)
LDGTESTFLAGS = $(LDXXFLAGS) -lgtest -lgtest_main -lpthread
DEPS = $(wildcard *.hpp)
OBJ = Weapon.o Planet.o Transformer.o Decepticon.o Autobot.o
TEST_OBJ = google-test.o
.PHONY: default clean cleanall
default: $(PROJECT)
%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXGLAGS)
$(LIBPROJECT): $(OBJ)
	$(A) $(AFLAGS) $@ $^
$(PROJECT): main.o $(LIBPROJECT)
	$(CXX) -o $@ main.o $(LDXXFLAGS); \
	rm -f $(OBJ) main.o $(LIBPROJECT)
$(TESTPROJECT): $(LIBPROJECT) $(TEST_OBJ)
	$(CXX) -o $@ $(TEST_OBJ) $(LDGTESTFLAGS)
test : $(TESTPROJECT)
	./$(TESTPROJECT); \
	rm -f $(TESTPROJECT) $(TEST_OBJ)
	rm -f *.o
	rm -f lib$(PROJECT).a
all : $(PROJECT)

clean:
	rm -f *.o
	rm -f lib$(PROJECT).a
cleanall: clean
	rm -f $(PROJECT)
	rm -f $(LIBPROJECT)
	rm -f $(TESTPROJECT)
