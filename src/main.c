#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int choix = 1;

    printf("Bienvenue sur Automatik. Ici, vous pourrez exécuter différentes commandes amusantes ou utiles très simplement.\n");

    printf("Voulez vous :\n -cleanez votre cache utilisateur (1)\n -genérer le répertoire de votre dossier personnel coloré avec lolcat(requis)(2) \n -lister tous les fihiers de votre répertoire personnel avec de la couleur(3)\n -ou encore afficher les informations de votre système linux(4)\n -regarder Star Wars en caractères ASCII(pour quitter, tapez ^] et quit )(5)\n");


    scanf("%d", &choix);



    if ( choix == 1 ){
system("rm -r  ~/.cache");
    }

    if ( choix == 2 ){
system(" echo $HOME | lolcat");
    }

    if ( choix == 3 ){
system("ls -a ~ | lolcat");
    }

    if (choix == 4){
system("neofetch");
}

    if (choix == 5){
    system("telnet towel.blinkenlights.nl");
}
  return 0;
}

