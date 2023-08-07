#include <stdio.h>

/* Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”. */

int main()
{
  int n, x, y;
  double divisao;

  printf("Quantos numeros voce vai digitar? ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Entre com o numerador: ");
    scanf("%d", &x);

    printf("Entre com o denominador: ");
    scanf("%d", &y);

    if (y == 0)
    {
      printf("Divisao impossivel\n");
    }
    else
    {
      divisao = (double)x / y;
      printf("Divisao = %.2lf\n", divisao);
    }
  }

  return 0;
}