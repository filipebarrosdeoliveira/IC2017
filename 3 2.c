#include <stdio.h>

int main() {

float area,base,altura;

printf("Entre com a base");
scanf("%f", & base);
printf("Entre com a altura");
scanf("%f", & altura);

printf ("%f", (area = (base*altura)/2));

return 0;
}
