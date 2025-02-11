#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
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
