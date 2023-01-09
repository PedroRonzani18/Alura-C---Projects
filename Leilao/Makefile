CC = g++
FLAGS= -std=c++17 -O2 -Wall
OUTPUT= main

testeAvaliador:
	@$(CC) -g tests/teste-avaliador.cpp src/Source/*.cpp $(FLAGS) -o testando \
	&& ./testando

run: 
	$(CC) -g main.cpp src/Source/*.cpp $(FLAGS) -o $(OUTPUT) \
	&& ./$(OUTPUT)