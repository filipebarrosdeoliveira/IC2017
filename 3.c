#include <stdio.h>
#include <math.h>
int main () {

float salario,quantidade;

printf("Entre com o salario");
scanf("%f", & salario);
printf("Entre com a quantidade");
scanf("%f", & quantidade);

printf("%f", quantidade * salario/5);
printf("%f", salario * quantidade);
printf("%f", 1/5*salario * quantidade * 0.85);
       
    return 0;
       }
