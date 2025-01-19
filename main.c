#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int choix = 1;
    printf("Bienvenue sur Automatik. Ici, vous pourrez exécuter différents scripts très simplement.\n");
    printf("Voulez vous : cleaner votre cache(1), genérer du lorem coloré avec lolcat(requis)(2) ou encore mettre un arbre de noël animé dans la console de votre système(3).\n");
    scanf("%d", &choix);
    if ( choix == 1 ){
        system("/home/oscar/Automatik/clear_tmp.sh");
    }
     if ( choix == 2 ){
 system("/home/oscar/Automatik/echo.sh");

    }
     if ( choix == 3 ){
 system("/home/oscar/Automatik/christmas.sh");

    }


  return 0;
}

