Algoritmo "bhaskara"

// Fazer um programa para ler os tr�s coeficientes de uma equa��o do segundo
// grau. Usando a f�rmula de Baskara, calcular e mostrar os valores das ra�zes
// x1 e x2 da equa��o com quatro casas decimais. Se a equa��o n�o possuir
// ra�zes reais, mostrar uma mensagem.

Var

   a, b, c, x1, x2, delta : real

Inicio

      escreva("Coeficiente A:")
      leia(a)
      escreva("Coeficiente B:")
      leia(b)
      escreva("Coeficiente C:")
      leia(c)

      delta <- Exp(b, 2) - 4 * a * c
      
      se (a = 0) ou (delta < 0) entao
         escreval("Esta equa��o n�o possui raizes reais")
      senao
         x1 <- (-b + raizQ(delta)) / (2 * a)
         x2 <- (-b - raizQ(delta)) / (2 * a)
         escreval("X1 = ", x1:6:4)
         escreval("X2 = ", x2:6:4)
      fimse
      



Fimalgoritmo