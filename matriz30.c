#include <stdio.h> 
#include <stdlib.h> 
#define alunos 100 

int main () 
{ 
int i, j,acertoAluno[alunos]={}; 
char respAlunos[alunos][11]={}; 
char gabarito[11] = {"DBCACDBABD"}; 

for (i = 0; i < alunos; i++) 
{ 
printf (" Digite o gabarito do aluno[%d]: ",i+1); 
scanf("%s",respAlunos[i]); 

for (j = 0; j < 10; j++) 
{ 
if (toupper(respAlunos[i][j]) == toupper(gabarito[j])){acertoAluno[i]++;} 
} 
} 

for (i = 0; i < alunos; i++) 
{ 
printf ("\n aluno[%d] = %d",i+1,acertoAluno[i]); 
} 

printf ("\n\n\n"); 
system ("pause"); 
return 0; 
} 
