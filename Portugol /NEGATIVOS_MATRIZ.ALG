Algoritmo "negativos_matriz"

// Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números
// inteiros, conforme exemplo. Em seguida, mostrar na tela somente os números
// negativos da matriz.

Var

   m, n, i, j : inteiro
   matri : vetor [0..9, 0..9] de inteiro


Inicio

      escreva("Qual a quantidade de linhas da matriz? ")
      leia(m)
      escreva("Qual a quantidade de colunas da matriz? ")
      leia(n)
      
      para i de 0 ate m-1 faca
           para j de 0 ate n-1 faca
                escreva("Elemento [",i,",",j,"]: ")
                leia(matri[i,j])
           fimpara
      fimpara
      
      escreval("Numeros negativos:")
      para i de 0 ate m-1 faca
           para j de 0 ate n-1 faca
                se matri[i,j] < 0 entao
                   escreval(matri[i,j])
                fimse
           fimpara
      fimpara


Fimalgoritmo