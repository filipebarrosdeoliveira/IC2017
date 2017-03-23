#include <stdio.h>

int main () {

int idade,salario,salrioBruto,gratificacao,total;
char nome,cargo;

scanf("%c", & nome);
scanf("%d", & idade);
scanf("%c", & cargo);
scanf("%d", & salario);
scanf("%d", & gratificacao);


salario = salrioBruto + 0.38;

gratificacao = salario + 0.20;

printf("%c", nome);
printf("%d", idade);
printf("%c", cargo);
printf("%d", salario);
printf("%d", gratificacao - 0.15);

return 0;
}

