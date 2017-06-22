#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    float precoconstrucao,area,areatotal=0.0,comprimento,largura,precocomodo,media,maiorarea=0.0,soma=0.0;
    int contador=0;
    int comodosmenoresque30=0;
    char comodo[30];
    char maiorcomodo[30];
    char opcao = 'S';
    printf ("digite o preco do metro quadrado: ");
    scanf ("%f", &precoconstrucao);
    while (opcao != 'n' && opcao != 'N') {
        contador++;
        printf (" digite o nome do comodo: ");
        scanf ("%s", &comodo);
        printf ("digite a largura do comodo: ");
        scanf ("%f%*c", &largura);
        printf ("digite o comprimento do comodo: ");
        scanf ("%f%*c", &comprimento);
        area = comprimento*largura;
        printf ("a area do comodo e igual a %.2f \n", area);
        precocomodo = precoconstrucao*area;
        areatotal += area;
        if (area < 30.0) {
            comodosmenoresque30++;
        }
        if (area > maiorarea) {
            maiorarea = area;
            strcpy (maiorcomodo, comodo);
        }
        printf ("o preco estimado para construcao do comodo e %.2f\n", precocomodo);
        printf("para continuar calculando mais comodos digite 'S', senão, digite 'N':");
        scanf("%c",&opcao);
    }
    printf ("O total da area da residencia e: %.2f\n", areatotal);
    media=areatotal/contador;
    printf ("A media dos comodos e de:%.2f\n",media);
    printf ("Maior comodo: %s com %.2f de área\n", maiorcomodo, maiorarea);
    printf ("O numero de comodos com area menor que 30 e:%d\n", comodosmenoresque30);
}
