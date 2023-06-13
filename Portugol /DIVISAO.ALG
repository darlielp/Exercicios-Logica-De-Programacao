Algoritmo "divisao"

// Escreva um algoritmo que leia dois números e imprima o resultado da divisão
// do primeiro pelo segundo. Caso não for possível, mostre a mensagem “DIVISAO
// IMPOSSIVEL”.

Var

   x, n1, n2, i : inteiro
   divisao : real


Inicio

      escreva("Quantos casos voce vai digitar? ")
      leia(x)
      
      para i de 1 ate x faca

         escreva("Entre com o numerador: ")
         leia(n1)
         escreva("Entra com o denominador: ")
         leia(n2)
         
         se n2 = 0 entao
            escreval("Divisão impossível")
         senao
            divisao <- n1 / n2
            escreval("Divisão = ", divisao:4:2)
         fimse
      fimpara



Fimalgoritmo