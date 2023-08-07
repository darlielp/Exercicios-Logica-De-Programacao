#include <stdio.h>
#include <string.h>

/* Leia os valores das coordenadas X e Y de um ponto no plano cartesiano. A seguir, determine qual o quadrante ao qual pertence o ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação. */

int main()
{

  double x, y;
  char quadrante[20];

  printf("Valor de X: ");
  scanf("%lf", &x);

  printf("Valor de Y: ");
  scanf("%lf", &y);

  if (x == 0 && y == 0)
  {
    strcpy(quadrante, "Origem");
  }
  else if (x > 0 && y == 0)
  {
    strcpy(quadrante, "Eixo X");
  }
  else if (x == 0 && y > 1)
  {
    strcpy(quadrante, "Eixo Y");
  }
  else if (x > 0 && y > 0)
  {
    strcpy(quadrante, "Q1");
  }
  else if (x < 0 && y > 0)
  {
    strcpy(quadrante, "Q2");
  }
  else if (x < 0 && y < 0)
  {
    strcpy(quadrante, "Q3");
  }
  else
  {
    strcpy(quadrante, "Q4");
  };

  printf("%s", quadrante);

  return 0;
}