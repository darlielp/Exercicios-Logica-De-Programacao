Algoritmo "retangulo"

// Fazer um programa para ler as medidas da base e altura de um retângulo.
// Em seguida, mostrar o valor da área, perímetro e diagonal deste retângulo,
// com quatro casas decimais.

Var

  base, altura, area, perimetro, diagonal : real


Inicio

      escreva("Base do retangulo:")
      leia(base)
      escreva("Altura do retangulo:")
      leia(altura)

      area <- base * altura
      perimetro <- 2 * base + 2 * altura
      diagonal <- raizQ(base^2 + altura^2)
      
      escreval("Area = ", area:8:4)
      escreval("Perimetro = ", perimetro:8:4)
      escreval("Diagonal = ", diagonal:8:4)
      
      

Fimalgoritmo