Algoritmo "multiplos"

// Fazer um programa para ler dois n�meros inteiros, e dizer se um n�mero �
// m�ltiplo do outro. Os n�meros podem ser digitados em qualquer ordem.

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
         escreval("S�o Multiplos.")
      senao
         escreval("N�o s�o multiplos.")
      fimse

Fimalgoritmo