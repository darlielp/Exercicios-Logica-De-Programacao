#include <stdio.h>

/* Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o fatorial de N. */

int main()
{
  int n, fatorial;

  printf("Digite o valor de N no maximo 15: ");
  scanf("%d", &n);

  fatorial = 1;

  if (n <= 15)
  {
    for (int i = 1; i <= n; i++)
    {
      fatorial = fatorial * i;
    }
    printf("Fatorial = %d", fatorial);
  }
  else
  {
    printf("O numero e maior que 15");
  }

  return 0;
}