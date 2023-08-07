#include <stdio.h>
#include <math.h>

/* Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula
de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais,
conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.  */

int main()
{

  double a, b, c, x1, x2, delta;

  printf("Digite o coeficiente A: ");
  scanf("%lf", &a);

  printf("Digite o coeficiente B: ");
  scanf("%lf", &b);

  printf("Digite o coeficiente C: ");
  scanf("%lf", &c);

  delta = pow(b, 2) - 4 * a * c;

  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = (-b - sqrt(delta)) / (2 * a);

  if (a == 0 || delta < 0)
  {
    printf("Esta equacao nao possui raizes reais.\n");
  }
  else
  {
    printf("Valor de x1 = %.4lf\n", x1);
    printf("Valor de x2 = %.4lf\n", x2);
  }

  return 0;
}