#include <stdio.h>

void main() {
  int numerador = 1;
  float h;

  for (int denominador=1; denominador<=50; denominador++) {
    h = h + (numerador / float(denominador));
    numerador = numerador + 2;
  }

  printf("H = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50");
  printf("\n\n");
  printf("H = %10.7f\n", h);
}
