# Makefile

# Compiler
CXX = g++

# Executable names
EXECS = exercicio1 exercicio2 exercicio3 exercicio4 exercicio5 exercicio6 exercicio7 exercicio8 exercicio9 exercicio10

# Source files
SRCS = exercicio1.cpp exercicio2.cpp exercicio3.cpp exercicio4.cpp exercicio5.cpp exercicio6.cpp exercicio7.cpp exercicio8.cpp exercicio9.cpp exercicio10.cpp

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

exercicio6: exercicio6.cpp
	$(CXX) -o exercicio6 exercicio6.cpp

exercicio7: exercicio7.cpp
	$(CXX) -o exercicio7 exercicio7.cpp

exercicio8: exercicio8.cpp
	$(CXX) -o exercicio8 exercicio8.cpp

exercicio9: exercicio9.cpp
	$(CXX) -o exercicio9 exercicio9.cpp

exercicio10: exercicio10.cpp
	$(CXX) -o exercicio10 exercicio10.cpp

# Run all exercicios
run: $(EXECS)
	./exercicio1 < ./inputs/input1.txt 
	./exercicio2 < ./inputs/input2.txt
	./exercicio3 < ./inputs/input3.txt
	./exercicio4 < ./inputs/input4.txt
	./exercicio5 < ./inputs/input5.txt
	./exercicio6 < ./inputs/input6.txt
	./exercicio7 < ./inputs/input7.txt
	./exercicio8 < ./inputs/input8.txt
	./exercicio9 < ./inputs/input9.txt
	./exercicio10 < ./inputs/input10.txt
	make clean

# Clean up generated files
clean:
	rm -f $(EXECS)