Algoritmo "numeros_pares"

// Fa�a um programa que leia N n�meros inteiros e armazene-os em um vetor.
// Em seguida, mostre na tela todos os n�meros pares, e tamb�m a quantidade de
// n�meros pares.

Var

   n, i, soma : inteiro
   paresVet : vetor [0..9] de inteiro

Inicio

      escreva("Quantos numeros voce vai digitar? ")
      leia(n)
      
      para i de 0 ate n-1 faca
         escreva("Digite um numero: ")
         leia(paresVet[i])
      fimpara
      
      soma <- 0
      
      escreval
      escreval("Numeros pares:")
      para i de 0 ate n-1 faca
        se paresVet[i] % 2 = 0 entao
            escreva(paresVet[i], " ")
            soma <- soma + 1
        fimse
      fimpara
      
      escreval
      escreval("Quantidade de pares = ", soma)


Fimalgoritmo