all:
	gcc ./src/main.c -o app -Iinclude -lBearLibTerminal
	./app
