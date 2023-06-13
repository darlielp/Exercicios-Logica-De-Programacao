Algoritmo "circulo"

// Fazer um programa para ler o valor "r" do raio de um círculo, e depois
// mostrar o valor da área do círculo com três casas decimais. A fórmula da
// área do círculo é a seguinte: area = pi.r^2. Você pode usar o valor de
// pi fornecido pela biblioteca da sua linguagem de programação, ou então, se
// preferir, use diretamente o valor 3.14159.

Var

   raio, area : real

Inicio

      escreva("Digite o valor do raio do circulo:")
      leia(raio)
      
      area <- pi * exp(raio, 2)
      
      escreval("Area do circulo =", area:8:3)


Fimalgoritmo