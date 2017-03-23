#include <stdio.h>

int main() {

float area,altura,comprimento,raio,volume;

printf("Entre com o raio\n");
scanf("%f", & raio);
printf("Entre com a altura\n");
scanf("%f", & altura);

volume = 3.14 * (raio * raio) * altura;

printf ("%f\n", volume);

return 0;
}
