#include <stdio.h>

int main () {
	
	int idade;
	float peso,altura,imc;

	scanf ("%d", & idade);

    
    if ( idade <= 12 && idade >= 70 )
        printf ("Calculo não confiavel");

    
    else  {
        
        scanf ("%f", & peso);
        scanf ("%f", & altura);
        
        imc = peso / (altura * altura);
        
        if ( imc < 18.5 )
            printf ("Magreza");
        
        if ( imc == 18.5 && imc == 24.9 )
            printf ("Saudável");
        
        if ( imc == 25 && imc == 29.9 )
            printf ("Sobrepeso");
        
        if ( imc == 30 && imc == 34.9)
            printf ("Obesidade Grau I");
        
        if ( imc == 35 && imc == 39.9 )
            printf ("Obesidade Grau II (severa) ");
        
        if ( imc >= 40 )
            printf ( "Obesidade Grau III (mórbida)");
        
    }

    
   
		
	return 0;
	
}


