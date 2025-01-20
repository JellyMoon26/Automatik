#include <stdio.h>
#include <stdlib.h>
#include <gtk-4.0/>

int main(int argc, char *argv[])
{
    int choix = 1;
    printf("Bienvenue sur Automatik. Ici, vous pourrez exécuter différents scripts très simplement.\n");
    printf("Voulez vous : genérer du lorem coloré avec lolcat(requis)(1).\n");
    scanf("%d", &choix);
    /*if ( choix == 1 ){
        system("/home/oscar/Automatik/clear_tmp.sh");
    }*/
     if ( choix == 1 ){
 system("/home/oscar/Automatik/echo.sh");
    }
     /*if ( choix == 3 ){
 system("/home/oscar/Automatik/christmas.sh");
    }*/


  return 0;
}

