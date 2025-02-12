gcc src/main.c -o automatik

echo "Compilation…"

sudo cp automatik /usr/bin/automatik

echo "Copie des fichiers…"

cd  ~/.config

echo "Configuration des sorties…"

mkdir -p automatik

echo "Création du dossier cible…"

cd ~/Automatik

echo "Copie des binaires de configuration…"

sudo cp  ~/Automatik/bin/lolcat /usr/bin
sudo cp  ~/Automatik/bin/aafire /usr/bin
sudo cp  ~/Automatik/bin/fortune /usr/bin
sudo cp  ~/Automatik/bin/rig  /usr/bin
sudo cp  ~/Automatik/bin/sl  /usr/bin
sudo cp  ~/Automatik/bin/telnet /usr/bin

echo "Installation terminée. Vous pouvez taper la commande 'automatik' pour exécuter le logiciel. Bonne chance !"


