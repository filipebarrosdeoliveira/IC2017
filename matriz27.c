algoritmo "Sioma linhas pares"
var
   A: vetor[1..50,1..2] de inteiro
   i, j, soma: inteiro
inicio
      soma<-0
      para i de 1 ate 20 faca
           para j de 1 ate 15 faca
                leia(A[i,j])
           fimpara
      fimpara
      para i de 2 ate 20 passo 2 faca
           para j de 1 ate 15 faca
                soma<-soma+A[i,j]
           fimpara
      fimpara
      escreval("A soma é igual a ", soma)
fimalgoritmo
