Algoritmo "soma_linhas"

// Fazer um programa para ler dois números inteiros M e N (máximo = 10).
// Em seguida, ler uma matriz de M linhas e N colunas contendo números reais.
// Gerar um vetor de modo que cada elemento do vetor seja a soma dos elementos
// da linha correspondente da matriz. Mostrar o vetor gerado.

Var

   m, n, i, j : inteiro
   soma : real
   matri : vetor [0..9, 0..9] de real
   
Inicio

      escreva("Qual a quantidade de linhas? ")
      leia(m)
      escreva("Qual a quantidade de colunas? ")
      leia(n)
      
      para i de 0 ate m-1 faca
           escreval("Digite os elementos da ", i+1,"a linha: ")
           para j de 0 ate n-1 faca
                leia(matri[i,j])
           fimpara
      fimpara
      
      escreval("Soma das linhas: ")
      para i de 0 ate m-1 faca
           soma <- 0
           para j de 0 ate n-1 faca
                soma <- soma + matri[i,j]
           fimpara
           escreval(soma:3:2)
      fimpara


Fimalgoritmo