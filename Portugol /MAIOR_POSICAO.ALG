Algoritmo "maior_posicao"

// Faça um programa que leia N números reais e armazene-os em um vetor. Em
// seguida, mostrar na tela o maior número do vetor (supor não haver empates).
// Mostrar também a posição do maior elemento, considerando a primeira posição
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