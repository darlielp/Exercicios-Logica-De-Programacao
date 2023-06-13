Algoritmo "menor_de_tres"

// Fazer um programa para ler três números inteiros. Em seguida, mostrar qual
// o menor dentre os três números lidos. Em caso de empate, mostrar apenas uma
// vez.

Var

   valor1, valor2, valor3, menorValor : inteiro

Inicio

      escreva("Primeiro Valor:")
      leia(valor1)
      escreva("Segundo Valor:")
      leia(valor2)
      escreva("Terceiro Valor:")
      leia(valor3)
      
      se (valor1 < valor2) e (valor1 < valor3) entao
         menorValor <- valor1
      senao
         se (valor2 < valor3) entao
            menorValor <- valor2
         senao
            menorValor <- valor3
         fimse
      fimse
      
      escreval("Menor valor = ", menorValor)


Fimalgoritmo