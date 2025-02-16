#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
<<<<<<< HEAD
    int choix = 0;

    printf("Bienvenue sur Automatik. Ici, vous pourrez exécuter différentes commandes amusantes ou utiles très simplement.\n");
    printf("Voulez vous :\n");
    printf(" - nettoyer votre cache utilisateur (1)\n");
    printf(" - générer le répertoire de votre dossier personnel coloré avec lolcat (requis) (2)\n");
    printf(" - lister tous les fichiers de votre répertoire personnel avec de la couleur (3)\n");
    printf(" - afficher les informations de votre système linux (4)\n");
    printf(" - regarder Star Wars en caractères ASCII (pour quitter, tapez ^] et quit) (5)\n");
    printf(" - faire un feu dans votre bureau (6)\n");
    printf(" - générer un texte surprise en couleur (7)\n");

    if (scanf("%d", &choix) != 1) {
        printf("Entrée invalide. Veuillez entrer un nombre.\n");
        return 1;
=======
    int choix = 1;
    int boucle = 1;

    printf("Bienvenue sur Automatik. Ici, vous pourrez exécuter différentes commandes amusantes ou utiles très simplement.\n\n");

    char menu[20];

    printf("Menu principal des commandes (m) Aide du logiciel (h ou help)\n");

    scanf("%s", menu);


     if (strcmp(menu, "m") == 0){
    printf("Voulez vous :\n -cleanez votre cache utilisateur (1)\n -genérer le répertoire de votre dossier personnel coloré avec lolcat(requis)(2) \n -lister tous les fihiers de votre répertoire personnel avec de la couleur(3)\n -afficher les informations de votre système linux(4)\n -regarder Star Wars en caractères ASCII(pour quitter, tapez ^] et quit )(5)\n -faire un feu dans votre bureau(6)\n -genérer un texte surprise en couleur(7)\n -Quitter Automatik(10)\n");

   scanf("%d", &choix);

    if ( choix == 1 ){
system("rm -r  ~/.cache");
>>>>>>> dev
    }

    switch (choix) {
        case 1:
            system("rm -r ~/.cache");
            break;
        case 2:
            system("echo $HOME | lolcat");
            break;
        case 3:
            system("ls -a ~ | lolcat");
            break;
        case 4:
            system("neofetch");
            break;
        case 5:
            system("telnet towel.blinkenlights.nl");
            break;
        case 6:
            system("aafire");
            break;
        case 7:
            system("toilet Automatik | lolcat");
            break;
        default:
            printf("Choix non valide. Veuillez entrer un nombre entre 1 et 7.\n");
            return 1;
    }

    return 0;
}
<<<<<<< HEAD
=======

    if (choix == 5){
    system("telnet towel.blinkenlights.nl");
}

   if (choix == 6){
       system("aafire");
}

    if (choix == 7){
        system("toilet Automatik | lolcat");
}

   if (choix == 10){
         exit(EXIT_SUCCESS);
}


    }


else if (strcmp(menu, "h") == 0 || strcmp(menu, "help") == 0){
printf("Bienvenue dans l'aide de Automatik. Je vais vous expliquer rapidement le fonctionnement dans les ligne ci-dessous.\n Automatik est facile à installer et simple d'utilisation. Vous l'avez (j'imagine) lançé après l'avoir compilé avec 'make',\n et vous avez tapé 'automatik' dans votre termianl linux. Lorsque vous arrivez, Automatik vous demande ce que vous voulez faire entre lançer le menu des commandes ou l'aide. Si vous avez déjà \n  lu l'aide, ça ne sert à rien de la relançer. Tapez plutôt 'm' dans le menu de démarrage.Le menu principal est le moyen d'exécuter les commandes installées. Vous devez taper le chiffre qui correspond à la commande que\n vous souhaitez exécuter. Bonne découverte !!!! (Pour aller aux menu principal, tapez 'm' et pour quitter, tapez 'q'.)\n");

     scanf("%s", menu);



     if (strcmp(menu, "m") == 0){
         printf("Voulez vous :\n -cleanez votre cache utilisateur (1)\n -genérer le répertoire de votre dossier personnel coloré avec lolcat(requis)(2) \n -lister tous les fihiers de votre répertoire personnel avec de la couleur(3)\n -afficher les informations de votre système linux(4)\n -regarder Star Wars en caractères ASCII(pour quitter, tapez ^] et quit )(5)\n -faire un feu dans votre bureau(6)\n -genérer un texte surprise en couleur(7)\n -Quitter Automatik(10)\n");

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

         if (choix == 6){
             system("aafire");
         }

         if (choix == 7){
             system("toilet Automatik | lolcat");
         }

         if (choix == 10){
             exit(EXIT_SUCCESS);
         }


     }


     else if (strcmp(menu, "q") == 0){
         exit(EXIT_SUCCESS);
     }
}

  return 0;
}

>>>>>>> dev
