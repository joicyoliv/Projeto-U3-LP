# Comandos do sistema operacional
# Linux: rm -rf 
# Windows: cmd //C del 
RM = rm -rf 

# Compilador
CC = g++

# Variaveis para os subdiretorios
SRC = ./src
INC = ./include
BIN = ./bin
OBJ = ./build
DOC = ./doc

# Define o nome do binario/executavel final
PROG = $(BIN)/teste

# Opcoes de compilacao
CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

# Lista dos arquivos objeto (.o) que formam o binario/executavel final
OBJS = $(OBJ)/animal.o $(OBJ)/anfibio.o $(OBJ)/animalSilvestre.o $(OBJ)/ave.o $(OBJ)/aveExotica.o $(OBJ)/aveNativa.o $(OBJ)/exotico.o $(OBJ)/funcionario.o $(OBJ)/mamifero.o $(OBJ)/nativo.o $(OBJ)/pessoa.o $(OBJ)/reptil.o $(OBJ)/tratador.o $(OBJ)/veterinario.o $(OBJ)/main.o $(OBJ)/petfera.o $(OBJ)/anfibioExotico.o $(OBJ)/anfibioNativo.o $(OBJ)/mamiferoExotico.o $(OBJ)/mamiferoNativo.o $(OBJ)/reptilExotico.o $(OBJ)/reptilNativo.o

all : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)

# Alvo para a compilação com informações de debug
# Altera a flag CFLAGS, incluindo as opções -g -O0 e recompila todo o projeto
debug: CFLAGS += -g -O0 
debug: all

# Alvo para a construcao do objeto build/main.o
# Define os arquivos objeto dos quais main.o depende.
$(OBJ)/main.o : $(OBJ)/animal.o $(OBJ)/animalSilvestre.o 
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@

$(OBJ)/anfibio.o : $(INC)/anfibio.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibio.cpp -o $@

$(OBJ)/animal.o : $(INC)/animal.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/animal.cpp -o $@

$(OBJ)/animalSilvestre.o : $(INC)/animalSilvestre.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/animalSilvestre.cpp -o $@

$(OBJ)/ave.o : $(INC)/ave.h $(OBJ)/animal.o
	$(CC) $(CPPFLAGS) -c $(SRC)/ave.cpp -o $@

$(OBJ)/aveExotica.o : $(INC)/aveExotica.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/aveExotica.cpp -o $@

$(OBJ)/aveNativa.o : $(INC)/aveNativa.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/aveNativa.cpp -o $@

$(OBJ)/exotico.o : $(INC)/exotico.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/exotico.cpp -o $@

$(OBJ)/funcionario.o : $(INC)/funcionario.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/funcionario.cpp -o $@

$(OBJ)/mamifero.o : $(INC)/mamifero.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/mamifero.cpp -o $@

$(OBJ)/nativo.o : $(INC)/nativo.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/nativo.cpp -o $@

$(OBJ)/pessoa.o : $(INC)/pessoa.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/pessoa.cpp -o $@

$(OBJ)/reptil.o : $(INC)/reptil.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/reptil.cpp -o $@

$(OBJ)/tratador.o : $(INC)/tratador.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/tratador.cpp -o $@

$(OBJ)/veterinario.o : $(INC)/veterinario.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/veterinario.cpp -o $@

$(OBJ)/petfera.o : $(INC)/petfera.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/petfera.cpp -o $@

$(OBJ)/anfibioExotico.o : $(INC)/anfibioExotico.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibioExotico.cpp -o $@

$(OBJ)/anfibioNativo.o : $(INC)/anfibioNativo.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibioNativo.cpp -o $@

$(OBJ)/mamiferoExotico.o : $(INC)/mamiferoExotico.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/mamiferoExotico.cpp -o $@

$(OBJ)/mamiferoNativo.o : $(INC)/mamiferoNativo.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/mamiferoNativo.cpp -o $@

$(OBJ)/reptilNativo.o : $(INC)/reptilNativo.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/reptilNativo.cpp -o $@

$(OBJ)/reptilExotico.o : $(INC)/reptilExotico.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/reptilExotico.cpp -o $@

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(PROG) $(OBJS)