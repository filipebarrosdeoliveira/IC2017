#include<stdio.h>

int main() {
  int vetor[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
  int aux, i;
  for(i = 0; i < 8; ++i)  {
    aux = vetor[i+8];
    vetor[i+8] = vetor[i];
    vetor[i] = aux;
  }

  for(i = 0;i<16;++i)
    printf("%d ", vetor[i]);
  return 0;
}
