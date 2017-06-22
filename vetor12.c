#include <stdio.h> 
#include <stdlib.h> 

void main (void) 
{ 
int vet1[9]; 
int vet2[9]; 
int vet3[9]; 
int final[9]; 
int i=0; 
int j=0; 
int k=0; 
int z=0; 

//Preencimento dos vetores auxiliares 
printf("Digite as entradas do primeiro vetor\n"); 
while(i<9) 
{ 
scanf("%d", &vet1[i]); 
i++; 
} 

printf("Digite as entradas do segundo vetor\n"); 
while(j<9) 
{ 
scanf("%d", &vet2[j]); 
j++; 
} 

printf("Digite as entradas do terceiro vetor\n"); 
while(k<9) 
{ 
scanf("%d", &vet3[k]); 
k++; 
} 

//Atribuião dos valores no vetor final 
while(z<3) 
{ 
final[z]=vet1[z]; 
z++; 
} 
while(z<6) 
{ 
final[z]=vet2[z]; 
z++; 
} 
while(z<9) 
{ 
final[z]=vet3[z]; 
z++; 
} 

//Saida do vtor final 

printf("Vetor resultado:\n"); 
z=0; 
while(z<9) 
{ 
printf("%d",final[z]); 
z++; 
} 
printf("\n"); 

}
