# Makefile

# Compiler
CXX = g++

# Executable names
EXECS = exercicio1 exercicio2 exercicio3 exercicio4 exercicio5

# Source files
SRCS = exercicio1.cpp exercicio2.cpp exercicio3.cpp exercicio4.cpp exercicio5.cpp

# Targets to build each exercicio
all: $(EXECS)

exercicio1: exercicio1.cpp
	$(CXX) -o exercicio1 exercicio1.cpp

exercicio2: exercicio2.cpp
	$(CXX) -o exercicio2 exercicio2.cpp

exercicio3: exercicio3.cpp
	$(CXX) -o exercicio3 exercicio3.cpp

exercicio4: exercicio4.cpp
	$(CXX) -o exercicio4 exercicio4.cpp

exercicio5: exercicio5.cpp
	$(CXX) -o exercicio5 exercicio5.cpp

# Run all exercicios
run: $(EXECS)
	./exercicio1 < input1.txt 
	./exercicio2 < input2.txt 
	./exercicio3 < input3.txt 
	./exercicio4 < input4.txt 
	./exercicio5 < input5.txt 
	make clean

# Clean up generated files
clean:
	rm -f $(EXECS)
