#include <stdio.h>
#include <stdlib.h>
main (){
	 
	 int vector[40],i;
	 
	 for(i=0;i<40;++i)
	 {
	 printf("Digite as 40 posicoes: %d\n",i);
	 scanf("%d",vector[i]);
	 if(vector[i]<0)
	 {
	 vector[i]=0;
	 printf("O elementos são %d\n",vector[i]);
	 }
	}
	 system("pause");
}

