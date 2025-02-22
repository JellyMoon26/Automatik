
# Makefile 
# Cibles
all: compile install


# pour compiler le code
compile:
	gcc src/main.c -o automatik

# Copie des binaires
install:
	sudo cp automatik /usr/bin/

