#include <stdio.h>

int main () {

	float x,y,z,w;
	scanf ("%f %f %f %f", &x, &y, &z, &w);

	if ((x+y+z+w)/7 <= 7)
		printf ("Aprovado");

	else 
		printf ("Reprovado");

return 0;
}

