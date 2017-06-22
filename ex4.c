#include< stdio.h>
#include< stdlib.h>

int main(){
    
    float alt,altg,altp,media,tot=0,mul=0;
    int i,cont=0,total=0;
    char sex;
    
    printf("Digite a altura de 15 pessoas \n");
    printf("Digite M para masculinoe F para feminino \n");
    
    altp=alt;
    
    for(i=0; i<=15; i++){
             scanf("altura: %.2f \n",&alt);
             scanf("sexo: %c \n",&sex);
             cont++;
             
             if (alt>altg){
                altg=alt;
             }
                else if (alt
                   altp=alt; 
                }
                   else if  (sex=='F'){          
                      tot+=alt;
                      mul++;
                   }
                      else {
                          total++; 
                      }
                      printf("A quantidade de homens eh: %d \n",mul);
    }
    media=tot/mul;
    
    printf("A maior altura do grupo eh: %.2f \n",altg);
    printf("A menor altura do grupo eh: %.2f \n",altp);
    printf("A media da altura das mulheres eh: %.2f \n",media);
    printf("A quantidade de homens eh: %d \n",total);
    system("pause");
}
