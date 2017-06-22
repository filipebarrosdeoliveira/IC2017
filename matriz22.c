#include <stdio,h>
#define N 8 
using namespace std; 

int main () { 
   int matriz[N][N]; 
   int i,j; 
   for (i=0; i<N; i++) 
      for (j=0; j<N; j++) { 
         cout << "Informe matriz[" << i << ", " << j << "]: "; 
         cin >> matriz[i][j]; 
      } 
   for (i=0; i<N; i++) 
      for (j=0; j<N; j++) 
         if (j > i) 
            matriz[i][j] = 0; 
   } 
   cout << "Resultado" << endl; 
   for (i=0; i<N; i++) { 
      for (j=0; j<N; j++) 
         cout << "\t" << matriz[i][j]; 
      cout << endl; 
   } 
   return 0; 
}
