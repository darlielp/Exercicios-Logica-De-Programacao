Algoritmo "maior_posicao"

// Fa�a um programa que leia N n�meros reais e armazene-os em um vetor. Em
// seguida, mostrar na tela o maior n�mero do vetor (supor n�o haver empates).
// Mostrar tamb�m a posi��o do maior elemento, considerando a primeira posi��o
// como 0 (zero).

Var

   n, i, posicao : inteiro
   maiorValor: real
   vet : vetor [0..9] de real

Inicio

      maiorValor <- 0
      posicao <- 0
      
      escreva("Quanto numeros voce vai digitar? ")
      leia(n)
      
      para i de 0 ate n-1 faca
         escreva("Digite um numero: ")
         leia(vet[i])
         
         se vet[i] > maiorValor entao
            maiorValor <- vet[i]
            posicao <- posicao + 1
         fimse
      fimpara
      
      escreval("O maior valor e = ", maiorValor:3:1)
      escreval("A posicao no vetor e = ", posicao)

Fimalgoritmo