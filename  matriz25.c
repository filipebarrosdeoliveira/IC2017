#include<math.h>
#include<stdio.h>
#include<string.h>

int main(){
    
    int x, y, qntradio_standart, qntradio_luxo, qntoper_standart, qntoper_luxo;
    float lucrostandart, lucroluxo;
    
    scanf("%d",&x);
    scanf("%d",&y);
    
    lucrostandart = x;
    lucroluxo = y;
    
    qntradio_standart = x / 30;
    qntradio_luxo = y /30;
    
    qntoper_standart = qntradio_standart * 1;
    qntoper_luxo = qntradio_luxo * 2;
    
    printf("O lucro do radio standard = %.2f\n", lucrostandart);
    printf("O lucro do radio luxo = %.2f\n", lucroluxo);
    printf("A quantidade de radio standard = %d\n", qntradio_standart);
    printf("A quantidade de radio luxo = %d\n", qntradio_luxo);
    printf("A quantidade de operarios utilizados na producao do radio standard = %d\n", qntoper_standart);
    printf("A quantidade de operarios utilizados na producao do radio luxo = %d\n", qntoper_luxo);
    
    return 0;
}