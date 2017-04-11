#include <stdio.h>

int main () {


	float qtd,cod,preco;

	scanf ("%f", & qtd);
	scanf ("%f", & cod);

	if (cod <= 10 && preco == 100 ) {
		printf ("%f\n", cod);
		printf ("%f\n", preco);
		printf ("%f\n", qtd);
		printf ("%f\n", preco * qtd);
	} 

    if (cod >= 11 && cod <= 20 && qtd <= 30 && preco == 70 ) {
        printf ("%f\n", cod);
        printf ("%f\n", preco);
        printf ("%f\n", qtd);
        printf ("%f\n", preco * qtd);
    }
    
    if (cod >= 11 && cod <= 20 && qtd > 30 && preco == 70 ) {
        printf ("%f\n", cod);
        printf ("%f\n", preco);
        printf ("%f\n", qtd);
        printf ("%f\n", preco * qtd);
    }
	
    if (cod == 21 && qtd <= 35 && preco == 250 ) {
        printf ("%f\n", cod);
        printf ("%f\n", preco);
        printf ("%f\n", qtd);
        printf ("%f\n", preco * qtd);
    }

    if (cod == 22 && qtd <= 30 && preco == 200 ) {
        printf ("%f\n", cod);
        printf ("%f\n", preco);
        printf ("%f\n", qtd);
        printf ("%f\n", preco * qtd);
    }
    
    if (cod == 25 && qtd <= 40 && preco == 600 ) {
        printf ("%f\n", cod);
        printf ("%f\n", preco);
        printf ("%f\n", qtd);
        printf ("%f\n", preco * qtd);
    }
    
    if (cod == 25 && qtd > 40 && preco == 500 ) {
        printf ("%f\n", cod);
        printf ("%f\n", preco);
        printf ("%f\n", qtd);
        printf ("%f\n", preco * qtd);
    }
    
    return 0;
    
}

    
    
