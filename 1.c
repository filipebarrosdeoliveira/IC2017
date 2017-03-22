#include <stdio.h>

int main () {

float x,y,z ;
printf("Entre com o primeiro numero \n");
scanf("%f", &x);
printf("Entre com o segundo numero \n");
scanf("%f", &y);

z = x+y;
printf("%.2f \n", z);

z = x-y;
printf("%.2f \n",z);

z = y-x;
printf("%.2f \n", z);

z = x*y;
printf("%.2f \n", z);

z = x/y;
printf("%.2f \n", z);

z = y/x;
printf("%.2f \n", z);

return 0;
}
