algoritmo "ex28_matriz"

var
   matriz1 : vetor [1..3,1..3] de inteiro
   matriz2 : vetor [1..3,1..3] de inteiro
   matriz3 : vetor [1..9,1..9] de inteiro
   linha1,coluna1 : inteiro
   linha2,coluna2 : inteiro
   linha3,coluna3 : inteiro

inicio
   para linha1 de 1 ate 3 passo 1 faca
     para coluna1 de 1 ate 3 passo 1 faca
      escreva ("Digite um valor :")
      leia (matriz1[linha1,coluna1])
   fimpara
   fimpara

   para linha2 de 1 ate 3 passo 1 faca
     para coluna2 de 1 ate 3 passo 1 faca
      escreva ("Digite um valor :")
      leia (matriz2[linha2,coluna2])
   fimpara
   fimpara

   para linha3 de 1 ate 18 passo 1 faca
   se matriz1[linha1,conluna1] = matriz2[linha2,conluna2] entao
   escreval (" :", matriz[linha1,coluna1])
   fimse
   fimpara

fimalgoritmo
