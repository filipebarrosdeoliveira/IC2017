#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char n1[4];
  char n2[4];
  int i;
  int j;
  int k;

  printf("Digite a primeira palavra\n");
  fflush(stdin);
  gets(n1); //scanf

  printf("Digite a segunda palavra\n");
  fflush(stdin);
  gets(n2);

  for(i=0;i<4;++i)
  {
	for(j=0;j<4;++j)
	{
	  if(n1[i]==n2[j]){
		k++;
		i++;
		j = 0;
	  }
	  if(k==4)
		printf("são anagramas\n");
	}
  }
  if(k!=4)
	printf("não são anagramas\n");
  system("pause");
  return 0;
} 0

