#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int choix = 1;
    printf("Bienvenue sur Automatik. Ici, vous pourrez exécuter différentes commandes amusantes ou utiles très simplement.\n");
    printf("Voulez vous : cleanez votre cache utilisateur (1), genérer le répertoire de votre dossier personnel coloré avec lolcat(requis)(2), lister tous les fihiers de votre répertoire personnel avec de la couleur(3) ou encore afficher les informations de votre système linux(4).\n");
    scanf("%d", &choix);
      if ( choix == 1 ){
        system("rm -r ~/.cache");
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
  return 0;
}

