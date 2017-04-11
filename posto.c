#include <stdio.h>

int main () {

    char letra;
	double litros;

    scanf ("%c", &letra);
	
	swicth (letra) {
        case A:
                  scanf ("%lf", & litros);
                  printf ("%lf", litros * 1.7997);
		          break;
        case D:
                  scanf ("%lf", & litros);
                  printf ("%lf", litros * 0.9798);
                  break;
        case G:
                  scanf ("%lf", & litros);
                  printf ("%lf", litros * 2.1009);
                  break;
    }
    
    return 0;
}



