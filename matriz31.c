#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h> 
#include<string.h> 

main() 
{ 
const int x = 4, y = 4; 
int i, j, k, l, flag, flag2, efeito = 0, tamanho; 
char matriz2[x][y], matriz[x][y], sair[1]; 


do{ 
for (i = 0; i < x; i++){ // Lê os elementos da PRIMEIRA matriz 4 x 4 
do{ 
system ("cls"); 
if (efeito == 0){ 
printf ("\n\n\t\t******************************... 
}else{ 
printf ("\n\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%... 
} 
printf ("\n\t\t\t MATRIZES %d x %d\n", x, y); 
if (efeito == 0){ 
printf ("\n\t\t********************************... 
}else{ 
printf ("\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%... 
} 

printf ("\n\t\t--------------------------------... 
printf ("\n\t\t\t\tMATRIZ 0\n"); 
printf ("\n\t\t--------------------------------... 

efeito = (efeito == 0) ? 1:0; 

printf ("\n\t\tSTRING %d: ", i+1); 
fflush(stdin); 
gets(matriz[i]); 
printf ("\n\n"); 
tamanho = strlen(matriz[i]); 
if (tamanho != x){ 
printf ("\n\t\t ________________________________________... 
printf ("\t\t| |\n"); 
printf ("\n\t\t| A STRING DEVE TER %d CARACTERES! |\n", x); 
printf ("\n\t\t|_______________________________... 
getch(); 
} 
}while (tamanho != x); 
} 

for (i = 0; i < x; i++){ // Lê os elementos da SEGUNDA matriz 4 x 4 
do{ 
system ("cls"); 
if (efeito == 0){ 
printf ("\n\n\t\t******************************... 
}else{ 
printf ("\n\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%... 
} 
printf ("\n\t\t\t MATRIZES %d x %d\n", x, y); 
if (efeito == 0){ 
printf ("\n\t\t********************************... 
}else{ 
printf ("\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%... 
} 

printf ("\n\t\t--------------------------------... 
printf ("\n\t\t\t\tMATRIZ 2\n"); 
printf ("\n\t\t--------------------------------... 

efeito = (efeito == 0) ? 1:0; 

printf ("\n\t\tSTRING %d: ", i+1); 
fflush(stdin); 
gets(matriz2[i]); 
printf ("\n\n"); 
tamanho = strlen(matriz2[i]); 
if (tamanho != x){ 
printf ("\n\t\t ________________________________________... 
printf ("\t\t| |\n"); 
printf ("\n\t\t| A STRING DEVE TER %d CARACTERES! |\n", x); 
printf ("\n\t\t|_______________________________... 
getch(); 
} 
}while (tamanho != x); 
} 

/* for (i = 0; i < x; i++){ 
for (j = 0; j < y; j++){ 
printf ("\n\t%d, %d\t%c == %c\t\t%c == %c", i, j, matriz[i][j], matriz[x-(i+1)][y-(j+1)], matriz2[i][j], matriz2[x-(i+1)][y-(j+1)]); 
} 
getch(); 
printf ("\n"); 
} 
printf ("\n\n"); 
*/ 

flag = 1; 
for (i = 0; i < x; i++){ // Verifica se a MATRIZ 1 é um PALÍNDROMO. 
for (j = 0; j < y; j++){ 
//printf ("\n\t%d, %d\t%c == %c", i, j, matriz[i][j], matriz[x-(i+1)][y-(j+1)]); 
if (matriz[i][j] != matriz[x-(i+1)][y-(j+1)]){ 
flag = 0; 
} 
} 
} 


flag2 = 1; 
for (i = 0; i < x; i++){ // Verifica se a MATRIZ 2 é um PALÍNDROMO. 
for (j = 0; j < y; j++){ 
//printf ("\n\t%d, %d\t%c == %c", i, j, matriz[i][j], matriz[x-(i+1)][y-(j+1)]); 
if (matriz2[i][j] != matriz2[x-(i+1)][y-(j+1)]){ 
flag2 = 0; 
} 
} 
} 

system ("cls"); 
if ((flag == 1)||(flag2 == 1)){ // Se flag = 1, o vetor foi percorrido e nenhum elemento simétrico diferente foi encontrado... 
if (flag == 1){ 
printf ("\n\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%... 
printf ("\n\t\t\t A MATRIZ 1 E PALINDROMO!\n\t\t"); 
printf ("\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%... 
} 
if (flag2 == 1){ 
printf ("\n\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%... 
printf ("\n\t\t\t A MATRIZ 2 E PALINDROMO!\n\t\t"); 
printf ("\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%... 
} 
}else{ //... se flag = 0, é porque não há elementos simétricos diferentes. Logo, o usuário é informado. 
printf ("\n\n\n\n\n\n\n\t\t%%%%%%%%%%%%%%%%%%%%... 
printf ("\a\n\t\tAS MATRIZES INFORMADAS NAO SAO PALINDROMOS\n", x, y); 
printf ("\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%... 
} 
printf ("\n\t\t ________________________________________... 
printf ("\t\t| |\n"); 
printf ("\n\t\t| DESEJA FINALIZAR O PROGRAMA? |\n"); 
printf ("\n\t\t| DIGITE S PARA SAIR! |\n"); 
printf ("\n\t\t|_______________________________... ESCOLHA UMA OPCAO -> S OU N: "); 
fflush(stdin); 
gets(sair); 

if ((sair[0] == 'S')||(sair[0] == 's')) 
break; 
}while (1); 

system ("cls"); 
printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n"); 
printf ("\n\t\t ______________________________________\n... 
printf ("\t\t| |\n"); 
printf ("\n\t\t| OBRIGADO POR USAR ESTE PROGRAMA! |\n"); 
printf ("\n\t\t| QUALQUER TECLA PARA FINALIZAR. |\n"); 
printf ("\n\t\t|_______________________________... 
getch(); 
}
