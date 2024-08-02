# Executable names
EXECS = exercicio1 exercicio3 exercicio4 #exercicio3 exercicio4 exercicio5

# Source files
SRCS = exercicio1.cpp exercicio3.cpp exercicio4.cpp #exercicio3.cpp exercicio4.cpp exercicio5.cpp 

# Targets to build each exercicio
all: $(EXECS)

exercicio1: exercicio1.cpp
	$(CXX) -o exercicio1 exercicio1.cpp

exercicio3: exercicio3.cpp
	$(CXX) -o exercicio3 exercicio3.cpp

exercicio4: exercicio4.cpp
	$(CXX) -o exercicio4 exercicio4.cpp

# Run all exercicios
run: $(EXECS)
	./exercicio1 < ./inputs/input1.txt
	./exercicio3 < ./inputs/input3.txt
	./exercicio3 < ./inputs/input3.1.txt
	./exercicio4 < ./inputs/input4.txt
	
	
	make clean

# Clean up generated files
clean:
	rm -f $(EXECS)