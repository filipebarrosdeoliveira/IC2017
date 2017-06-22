#include <stdio.h>
#include <stdlib.h>

int main( )
{
   //declaração da matriz de distâncias
   int matD[5][5] = {{0,15,30,05,12},
                    {15,0,10,17,28},
                    {30,10,0,3,11},
                    {5,17,3,0,80},
                    {12,28,11,80,0}};
  int i,j;
  int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;
  int achei;
  int dt;

  do {
   /*Entrar com a localização da distância escolhida*/
   printf("Entre com a posicao da linha da distancia desejada: ");
   scanf("%d",&p1);
   printf("Entre com a posicao da coluna da distancia desejada: ");
   scanf("%d",&p2);
   printf("Entre com a posicao 3: ");
   scanf("%d",&p3);
   printf("Entre com a posicao 4: ");
   scanf("%d",&p4);
    printf("Entre com a posicao 5: ");
   scanf("%d",&p5);
    printf("Entre com a posicao 6: ");
   scanf("%d",&p6);
    printf("Entre com a posicao 7: ");
   scanf("%d",&p7);
    printf("Entre com a posicao 8: ");
   scanf("%d",&p8);
   printf("Entre com a posicao 9: ");
   scanf("%d",&p9);
   printf("Entre com a posicao 10: ");
   scanf("%d",&p10);

       /*laço de repetição para percorrer a matriz*/
       for (i=0; i<5; i++)
         for(j=0; j<5; j++)
         {
               if (p1 == i)
               achei = matD[i][j];
                 if (p2 == i)
                 achei = matD[i][j];
                   if (p1==j)
                   achei = matD[i][j];
                     if (p1==j)
                     achei = matD[i][j];
        }      


   dt = p1 + p2 + p3 + p6 + p8;                        

         //mostrar a matriz
         for (i=0; i<5; i++)
           {
            for (j=0; j<5; j++)
             {
             printf("%d\t", matD[i][j]);
             }
              printf("\n");
           }
              printf("\n\n\n");
} while (p1==0 && p2==0);

//mostrar o resultado com o que o programa pede
printf("A distancia entre as cidades requisitadas eh %d",achei);
printf("A distancia total entre os pontos informados eh %d",achei);

             getch();
             return 0;
}
