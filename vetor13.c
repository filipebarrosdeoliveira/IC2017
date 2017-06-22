

#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

// tentei assim acho que deu certo olha ai.


//Leia um vetor de 10 posições e verifique se existem valores iguais e os escreva.


main()

{

setlocale(LC_ALL, "Portuguese");

int vet[10], i, j;


for (i=0;i<10;i++)

{

printf ("\n Digite um número inteiro para a posição %d do vetor: \n", i);

scanf ("%d", &vet);

}

for(i=0;i<10;i++)

{

for (j=i;j<11;j++)

{

if (vet == vet[j+1])

{

printf("\n Temos um número repitido no vetor é: %d \n", (vet));

}

else

{

printf("\t ");

}

}

}

return 0;

}

