#include <stdio.h> 
#include <stdlib.h> 

const int MAXIMO_I = 6; 
const int MAXIMO_J = 6; 

int main() 
{ 
/** 
Leia uma matriz 6 x 6, conte e escreva quantos valores maiores que 10 ela 
possui e a posiçao dos valores maiores q 10. 
*/ 

int matriz [MAXIMO_I][MAXIMO_J], i, j, cont = 0; 

for(i = 0; i<MAXIMO_I; i++) 
{ 
for(j = 0; j < MAXIMO_J; j++) 
{ 
printf("Digite o valor indice [%d][%d] da matriz: ",i+1, j+1); 
scanf("%d",&matriz[i][j]); 

if(matriz[i][j] > 10) cont++; 
} 
} 
printf("\nNessa matriz ha %d valores maiores que 10\n", cont); 

for(i = 0; i<MAXIMO_I; i++) 
{ 
for(j = 0; j < MAXIMO_J; j++) 
{ 
if (matriz[i][j] > 10) printf("\nPosicao [%d][%d]: %d", i+1, j+1, matriz[i][j]); 
} 

} 
printf("\n\n"); 
system("pause"); 
return 0; 
}

