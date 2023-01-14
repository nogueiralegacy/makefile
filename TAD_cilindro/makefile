all: projeto

#Constroi e compila o projeto
projeto: cilindro.c cilindro.h main.c
	gcc -o projeto cilindro.c main.c -lm

#Apaga o arquivo executavel
clean:
	del projeto.exe

#Executa o projeto
run: projeto
	./projeto

