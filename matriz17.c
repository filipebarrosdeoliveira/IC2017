#include <iostream>

int mat[5][5]; // declarando matriz 5/5
int main() {
for (int i=0; i < 5 ; i++){
cout << "\n\n"; // formatar impressao
for (int j=0;j<5;j++){
if ( i == j) { // preencher diagonal principal com 1 (quando i = j)
mat[j] = 1;
}else {
mat[j] = 0; // preencher o resto da matriz com 0 (quando i != j)
}
cout << mat[j] << " "; // imprimir matriz
}
}
system("pause");
return 0;
}
