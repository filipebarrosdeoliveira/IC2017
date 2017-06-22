#include<math.h>
#include<stdio.h>
int main(){
  float idade, somaidade = 0, idademedia; int contpes = 0;
	scanf("%f", &idade);
	while(idade != 0){
		contpes++; somaidade = somaidade + idade; scanf("%f", &idade);
	}
	idademedia = somaidade / contpes;
	printf("IDADE MEDIA = %.2f\n", idademedia);
	return 0;
}
