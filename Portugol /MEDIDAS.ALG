Algoritmo "medidas"

// Fazer um programa para ler tr�s medidas A, B e C. Em seguida, calcular e
// mostrar (imprimir os dados com quatro casas decimais):
// a) a �rea do quadrado que tem lado A
// b) a �rea do tri�ngulo ret�ngulo que base A e altura B
// c) a �rea do trap�zio que tem bases A e B, e altura C

Var

   a, b, c, quadrado, triangulo, trapezio : real

Inicio

      escreva("Digite a medida A:")
      leia(a)
      escreva("Digite a medida B:")
      leia(b)
      escreva("Digite a medida C:")
      leia(c)
      
      quadrado <- Exp(a, 2)
      triangulo <- (a * b) / 2
      trapezio <- ((a + b) * c) / 2
      
      escreval("Area do quadrado = ", quadrado:8:4)
      escreval("Area do triangulo = ", triangulo:8:4)
      escreval("Area do trapezio = ", trapezio:8:4)


Fimalgoritmo