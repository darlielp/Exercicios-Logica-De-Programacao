Algoritmo "multiplos"

// Fazer um programa para ler dois números inteiros, e dizer se um número é
// múltiplo do outro. Os números podem ser digitados em qualquer ordem.

Var

   numero1, numero2, resultado1, resultado2 : inteiro

Inicio

      escreval("Digite dois numeros inteiros: ")
      leia(numero1)
      leia(numero2)

      resultado1 <- numero1 \ numero2
      resultado1 <- resultado1 * numero2
      
      resultado2 <- numero2 \ numero1
      resultado2 <- resultado2 * numero1

      
      se (resultado1 = numero1) ou (resultado2 = numero2) entao
         escreval("São Multiplos.")
      senao
         escreval("Não são multiplos.")
      fimse

Fimalgoritmo