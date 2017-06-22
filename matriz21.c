#include <iostream> 
using namespace std; 

int main () { 
   int matriz4x4[4][4]; 
   int matrizAux,i,j; 
   cout << " DIGITANDO " << endl; 
   for (i=0;i<4;i++) { 
      for (j=0;j<4;j++) { 
         cout << "Valor " << i+1 << " " << " " << j+1 << " "; 
         cin >> matriz4x4[i][j]; 
      } 
   } 
   // exibindo a matriz 
   cout << endl << endl; 
   cout << " MATRIZ 4X4 " << endl; 
   for (i=0; i<4; i++) { 
      for (j=0; j<4; j++) 
         cout << matriz4x4[i][j] << " "; 
      cout << endl; 
   } 
   // trocando a linha 1 com a coluna 4 
   for (i=0; i<4; i++) { 
      matrizAux = matriz4x4[1][i]; 
      matriz4x4[1][i] = matriz4x4[i][4]; 
      matriz4x4[i][4] = matrizAux; 
   } 
   cout << endl; 
   cout << " MATRIZ TROCADA " << endl; 
   for (i=0; i<4; i++) { 
      for (j=0; j<4; j++) 
         cout << matriz4x4[i][j] << " "; 
      cout << endl; 
   } 
   return 0; 
}
