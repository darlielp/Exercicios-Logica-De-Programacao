Algoritmo "matriz_geral"

// Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais.
// Em seguida, fazer as seguintes ações:
// a) calcular e imprimir a soma de todos os elementos positivos da matriz.
// b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos
// os elementos desta linha.
// c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos
// os elementos desta coluna.
// d) imprimir os elementos da diagonal principal da matriz.
// e) alterar a matriz elevando ao quadrado todos os números negativos da mesma.
// Em seguida imprimir a matriz alterada.

Var

   n, i, j, linha, coluna : inteiro
   soma : real
   matri : vetor [0..9, 0..9] de real
   matriAlt : vetor [0..9, 0..9] de real

Inicio

      escreva("Qual o tamanho da matriz? ")
      leia(n)
      
      para i de 0 ate n-1 faca
           para j de 0 ate n-1 faca
                escreva("Elemento [",i,",",j,"]: ")
                leia(matri[i,j])
           fimpara
      fimpara
      
      soma <- 0
      
      para i de 0 ate n-1 faca
           para j de 0 ate n-1 faca
                se matri[i,j] > 0 entao
                   soma <- soma + matri[i,j]
                fimse
           fimpara
      fimpara
      
      escreval("Soma dos positivios = ", soma:2:1)
      
      escreva("Escolha uma linha: ")
      leia(linha)
      escreva("Linha escolhida: ")
      para i de 0 ate n-1 faca
           para j de 0 ate n-1 faca
                se i = linha entao
                   escreva(matri[i,j]:2:1, " ")
                fimse
           fimpara
      fimpara
      
      escreval
      escreva("Escolha uma coluna: ")
      leia(coluna)
      escreva("Coluna escolhida: ")
      para i de 0 ate n-1 faca
           para j de 0 ate n-1 faca
                se j = coluna entao
                   escreva(matri[i,j]:2:1, " ")
                fimse
           fimpara
      fimpara
      
      escreval
      escreval("Diagonal principal: ")
      para i de 0 ate n-1 faca
           para j de 0 ate n-1 faca
                se matri[i] / matri[j] = 1 entao
                   escreva(matri[i,j]:2:1, " ")
                fimse
           fimpara
      fimpara
      
      para i de 0 ate n-1 faca
           para j de 0 ate n-1 faca
                se matri[i,j] < 0 entao
                   matri[i,j] <- (matri[i,j]) * (matri[i,j])
                fimse
           fimpara
      fimpara
      
      escreval
      escreval("Matriz alterada: ")
      para i de 0 ate n-1 faca
           para j de 0 ate n-1 faca
                escreva(matri[i,j]:2:1, " ")
           fimpara
           escreval
      fimpara
      



Fimalgoritmo