# Makefile 
# Cibles
all: compile install


# pour compiler le code
compile:
	gcc src/main.c -o automatik

# Copie des binaires
install:
	sudo cp automatik /usr/bin/automatik
	mkdir -p ~/.config/automatik
	sudo cp ~/Automatik/bin/lolcat /usr/bin
	sudo cp ~/Automatik/bin/aafire /usr/bin
	sudo cp ~/Automatik/bin/fortune /usr/bin
	sudo cp ~/Automatik/bin/rig /usr/bin
	sudo cp ~/Automatik/bin/sl /usr/bin
	sudo cp ~/Automatik/bin/telnet /usr/bin

# pour compiler la doc
doc:
	@mkdir -p out
	scdoc < doc/automatik.1.scd > out/automatik.1
