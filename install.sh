gcc src/main.c -o automatik

echo "Compilation…"

sudo cp automatik /usr/bin/automatik

echo "Copie des fichiers…"

cd  ~/.config

echo "Configuration des sorties…"

mkdir -p automatik

echo "Création du dossier cible…"

cd ~/Automatik

echo "Copie des scripts de configuration…"

cp -r scripts ~/.config/automatik/scripts

echo "Installation terminée. Vous pouvez taper la commande 'automatik' pour exécuter le logiciel. Bonne chance !"


