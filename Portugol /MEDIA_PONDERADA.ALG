Algoritmo "media_ponderada"

// Leia um valor inteiro N, que representa o n�mero de casos de teste que vem
// a seguir. Cada caso de teste consiste de 3 valores reais, para os quais voc�
// dever� calcular e mostrar a m�dia ponderada, sendo que o primeiro valor tem
// peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
// que a m�dia ponderada � a soma de todos os valores multiplicados pelo seu
// respectivo peso, dividida pela soma dos pesos.

Var

  n, x, i : inteiro
  valor1, valor2, valor3, media : real

Inicio

      escreva("Quantos casos voce vai digitar? ")
      leia(n)
      
      para i de x+1 ate n faca
      
      escreval("Digite tres numeros: ")
      leia(valor1)
      leia(valor2)
      leia(valor3)
      
      media <- ((valor1*2) + (valor2*3) + (valor3*5)) / 10
      
      escreval("M�dia = ", media:4:1)
      
      fimpara


Fimalgoritmo