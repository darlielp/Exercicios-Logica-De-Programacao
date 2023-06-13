Algoritmo "soma_matrizes"

// Fazer um programa para ler duas matrizes de números inteiros A e B, contendo
// de M linhas e N colunas cada (M e N máximo = 10). Depois, gerar uma terceira
// matriz C onde cada elemento desta é a soma dos elementos correspondentes das
// matrizes originais. Imprimir na tela a matriz gerada.

Var

   m, n, i, j : inteiro
   matriA : vetor [0..9, 0..9] de inteiro
   matriB : vetor [0..9, 0..9] de inteiro
   matriC : vetor [0..9, 0..9] de inteiro
   
Inicio

      escreva("Quantas linhas vai ter a matriz? ")
      leia(m)
      escreva("Quantas colunas vait ter a matriz? ")
      leia(n)
      
      escreval("Digite os valores da matriz A:")
      para i de 0 ate m-1 faca
           para j de 0 ate n-1 faca
                escreva("Elemento [",i,",",j,"]: ")
                leia(matriA[i,j])
           fimpara
      fimpara
      
      escreval("Digite os valores da matriz B:")
      para i de 0 ate m-1 faca
           para j de 0 ate n-1 faca
                escreva("Elemento [",i,",",j,"]: ")
                leia(matriB[i,j])
           fimpara
      fimpara

      para i de 0 ate m-1 faca
           para j de 0 ate n-1 faca
                matriC[i,j] <- matriA[i,j] + matriB[i,j]
           fimpara
      fimpara
      
      escreval("Soma das matrizes:")
      para i de 0 ate m-1 faca
           para j de 0 ate n-1 faca
                escreva(matriC[i,j])
           fimpara
           escreval
      fimpara
      

Fimalgoritmo