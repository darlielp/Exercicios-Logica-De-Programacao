#include <stdio.h>

/* Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso. */

int main()
{
  int x;

  printf("Digite o valor de X:");
  scanf("%d", &x);

  for (int i = 1; i < x; i++)
  {
    if (i % 2 != 0)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}