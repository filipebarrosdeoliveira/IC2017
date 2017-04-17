#include <stdio.h>

int main () {

        char nome,operacao,A,B,C,D;
        int x;
        scanf ("%d", & x);
        scanf ("%c", & nome);
        scanf ("%c", & operacao);

        switch (operacao) {

        case 'A': printf("Nome do funcionário:\n", nome);
                printf("Reajuste de: \n", x * 1.10 );
                break;

         case 'B': printf("Nome do funcionário:\n", nome);
                printf("Reajuste de: \n", x * 1.15 );
                break;

         case 'C':
                printf("Nome do funcionário:\n", nome);
                printf("Reajuste de: \n", x * 1.25 );
                break;

         case 'D': printf("Nome do funcionário:\n", nome);
                printf("Reajuste de: \n", x * 1.10 );
                break;


          }

        return 0;


        }
















}
