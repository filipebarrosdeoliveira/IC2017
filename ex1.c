#include<stdio.h>

main(){

float media;

int soma;

int i,a=0;

for(i=50;i<=70;i++){

if(i%2==0){

a++;

soma+=i;

printf("\nSoma = %d ",soma);

printf("A = %d ",a);

}/* fecha if */

}/* fecha for */

media = Mostra_media(soma,a);

printf(" \n\nSoma: %d\nMedia: %1.f\n\n\n",soma,media);

system("pause");

}

int Mostra_media(int a,int b){

return a/b;

}
