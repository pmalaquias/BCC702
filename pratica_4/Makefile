# Makefile

# Compiler
CXX = g++

# Executable names
EXECS = exercicio1 exercicio2 exercicio3 exercicio4 

# Source files
SRCS = exercicio1.cpp exercicio2.cpp exercicio3.cpp exercicio4.cpp 

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

# Run all exercicios
run: $(EXECS)
	./exercicio1 < ./inputs/input1.txt 
	./exercicio1 < ./inputs/input1_1.txt 
	./exercicio1 < ./inputs/input1_2.txt 
	./exercicio2 < ./inputs/input2.txt
	./exercicio2 < ./inputs/input2_1.txt
	./exercicio2 < ./inputs/input2_2.txt
	./exercicio3 < ./inputs/input3.txt
	./exercicio3 < ./inputs/input3_1.txt
	./exercicio4 < ./inputs/input4.txt
	./exercicio4 < ./inputs/input4_1.txt
	make clean

# Clean up generated files
clean:
	rm -f $(EXECS)