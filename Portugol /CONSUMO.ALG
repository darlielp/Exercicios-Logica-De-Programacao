Algoritmo "consumo"

// Fazer um programa para ler a dist�ncia total (em km) percorrida por um carro,
// bem como o total de combust�vel gasto por este carro ao percorrer tal
// dist�ncia. Seu programa deve mostrar o consumo m�dio do carro, com tr�s casas
// decimais.

Var

  distancia, combustivel, consumo : real

Inicio

      escreva("Distancia percorrida:")
      leia(distancia)
      escreva("Combust�vel gasto:")
      leia(combustivel)
      
      consumo <- distancia / combustivel
      
      escreval("Consumo m�dio = ", consumo:8:3)

Fimalgoritmo