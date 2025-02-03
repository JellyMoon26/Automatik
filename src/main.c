#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int choix = 1;
    printf("Bienvenue sur Automatik. Ici, vous pourrez exécuter différents scripts très simplement.\n");
    printf("Voulez vous : cleanez votre cache utilisateur (1) ou genérer du lorem coloré avec lolcat(requis)(2).\n");
    scanf("%d", &choix);
      if ( choix == 1 ){
        system("~/Automatik/scripts/clear_cache.sh");
    }
     if ( choix == 2 ){
 system("~/Automatik/scripts/echo.sh");
    }
     /*if ( choix == 3 ){
 system("~/Automatik/backup.sh");
    }*/
  return 0;
}

