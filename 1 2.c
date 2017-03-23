#include <stdio.h>

int main () {

int A,B,AUX;
printf("Entre com a variavel \n");
scanf("%d", & A);
printf("Entre com a segunda variavel \n");
scanf("%d", & B);

AUX = A;
A = B;
B = AUX;

printf("%d %d\n", A,B);

return 0;
}
