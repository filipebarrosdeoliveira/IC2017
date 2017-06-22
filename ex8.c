#include <stdio.h>

void main() {
  int i, base, expoente, result = 1;

  printf("Informe o valor da base....: ");
  scanf("%d", &base);

  printf("Informe o valor do expoente: ");
  scanf("%d", &expoente);

  for (i=1; i<=expoente; i++) {
    result = result * base;
  }

  printf("\n\n%d elevado a %d = %d", base, expoente, result);
}
