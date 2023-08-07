#include <stdio.h>

/* Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números impares entre eles. */

int main()
{
  int x, y, z, soma;

  printf("Digite dois numeros: \n");
  scanf("%d %d", &x, &y);

  if (x > y)
  {
    z = x;
    x = y;
    y = z;
  }

  soma = 0;

  for (int i = x + 1; i < y; i++)
  {
    if (i % 2 != 0)
    {
      soma = soma + i;
    }
  }
  printf("Soma dos impares = %d", soma);
}