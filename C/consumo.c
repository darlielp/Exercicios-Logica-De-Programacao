#include <stdio.h>

/* Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
médio do carro, com três casas decimais. */

int main()
{

  double distancia, consumo, gasto;

  printf("Distancia percorrida: ");
  scanf("%lf", &distancia);

  printf("Combustivel gasto: ");
  scanf("%lf", &gasto);

  consumo = distancia / gasto;

  printf("Consumo medio = %.3lf\n", consumo);

  return 0;
}