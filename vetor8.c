#include <stdio.h>
#include <stdlib.h>

int main(){
   int iVetor[40], i;

   for(i=0;i<10;i++){
	  printf("iVetor[%d]: ",i);
	  scanf("%d",&iVetor[i]);
   }
   
   for(i=0;i<10;i++) iVetor[i+1] += iVetor[i];
   
   for(i=0;i<10;i++) printf("iVetor[%d]: %d\n", i, iVetor[i]);
   
   system("pause");
   return 0;
   
}

