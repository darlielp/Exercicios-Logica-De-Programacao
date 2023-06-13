Algoritmo "abaixo_da_media"

// Fazer um programa para ler um número inteiro N e depois um vetor de N números
// reais. Em seguida, mostrar na tela a média aritmética de todos elementos com
// três casas decimais. Depois mostrar todos os elementos do vetor que estejam
// abaixo da média, com uma casa decimal cada.

Var

   n, i : inteiro
   media, abaixoDaMedia, soma : real
   vet : vetor [0..9] de real

Inicio

      soma <- 0

      escreva("Quantos numeros vai ter o vetor? ")
      leia(n)
      
      para i de 0 ate n-1 faca
         escreva("Digite o numero do vetor: ")
         leia(vet[i])
         
         soma <- soma + vet[i]
      fimpara
      
      media <- soma / n
      
      escreval("A media e = ", media:4:3)
      escreval("Numeros abaixo da media:")
      
      para i de 0 ate n-1 faca
           se vet[i] < media entao
              escreval(vet[i]:3:1)
           fimse
      fimpara

Fimalgoritmo