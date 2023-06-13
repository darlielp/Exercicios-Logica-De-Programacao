Algoritmo "cada_linha"

// Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar
// qual o maior elemento de cada linha. Suponha não haver empates.

Var

   n, i, j, maior : inteiro
   matri : vetor [0..9, 0..9] de inteiro

Inicio

      escreva("Qual o tamanho da matriz? ")
      leia(n)
      
      para i de 0 ate n-1 faca
           para j de 0 ate n-1 faca
                escreva("Elemento [",i,",",j,"]: ")
                leia(matri[i,j])
           fimpara
      fimpara
      
      escreval("Maior elemento de cada linha: ")
      para i de 0 ate n-1 faca
           maior <- 0
           para j de 0 ate n-1 faca
                se matri[i,j] > maior entao
                   maior <- matri[i,j]
                fimse
           fimpara
           escreval(maior)
      fimpara


Fimalgoritmo