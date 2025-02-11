# Définir les variables
CC = gcc
SRC = src/main.c
OUT = automatik
CONFIG_DIR = ~/.config/automatik
SCRIPTS_DIR = ~/Automatik/scripts

# Règle par défaut
all: compile install

# Règle de compilation
compile:
	@echo "Compilation…"
	$(CC) $(SRC) -o $(OUT)

# Règle d'installation
install: compile
	@echo "Copie des fichiers…"
	sudo cp $(OUT) /usr/bin/$(OUT)

	@echo "Configuration des sorties…"
	mkdir -p $(CONFIG_DIR)

	@echo "Création du dossier cible…"
	cp -r $(SCRIPTS_DIR) $(CONFIG_DIR)/scripts

	@echo "Installation terminée. Vous pouvez taper la commande '$(OUT)' pour exécuter le logiciel. Bonne chance !"

# Règle de nettoyage
clean:
	rm -f $(OUT)
