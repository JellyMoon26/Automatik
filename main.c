#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int choix = 1;
    printf("Bienvenue sur Automatik. Ici, vous pourrez exécuter différents scripts très simplement.\n");
    printf("Voulez vous : cleanez votre cache utilisateur (1) genérer du lorem coloré avec lolcat(requis)(2), ou encore fair une sauveagrde de test temporaire(3)\n");
    scanf("%d", &choix);
      if ( choix == 1 ){
        system("/home/oscar/Automatik/clear_cache.sh");
    }
     if ( choix == 2 ){
 system("/home/oscar/Automatik/echo.sh");
    }
     if ( choix == 3 ){
 system("/home/oscar/Automatik/backup.sh");
    }
  return 0;
}

