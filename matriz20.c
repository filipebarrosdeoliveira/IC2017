#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <conio.c>
#include <iostream>
#include <windows.h>


int main (){

int matrizA[3][3];
int i=0,j=0;
int meuNumero=0;

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            cout << "Digitando: ";
            cin >> matrizA[i][j];
       }
    } 

    cout << endl << endl;    
    cout << "Meu vetor " << endl << endl;  

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            cout << matrizA[i][j] << " ";
       }
       cout << endl;
    } 
    
    cout << "Digite um numero: ";
    cin >> meuNumero;
    
        for (i=0;i<3;i++){
            for (j=0;j<3;j++){

                if(meuNumero == matrizA[i][j])
                printf("Linha [%d] Coluna [%d]  Numero: [%d][%d] \n", i,j, matrizA[i][j]);
                
               if(meuNumero != matrizA[i][j]){
                printf("Linha [%d] Coluna [%d]  NAO ENCONTRADO \n", i,j, matrizA[i]);
               
          
            } 
       }    
       getch();       
}

