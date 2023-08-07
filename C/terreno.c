#include <stdio.h>

/* Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
duas casas decimais. */

int main()
{

  double largura, comprimento, metroQuadrado, valorTerreno, areaTerreno;

  printf("Digite a largura do terreno: ");
  scanf("%lf", &largura);

  printf("Digite o comprimento do terreno: ");
  scanf("%lf", &comprimento);

  printf("Digite o valor do metro quadrado: ");
  scanf("%lf", &metroQuadrado);

  areaTerreno = largura * comprimento;
  valorTerreno = areaTerreno * metroQuadrado;

  printf("Area do terreno = %.2lf\n", areaTerreno);
  printf("Valor do terreno = %.2lf\n", valorTerreno);

  return 0;
}