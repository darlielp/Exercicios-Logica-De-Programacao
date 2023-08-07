#include <stdio.h>

/* Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo. */

int main()
{

  int n, mult, res;

  printf("Deseja a tabuada para qual valor?");
  scanf("%d", &n);

  for (mult == 1; mult <= 10; mult++)
  {
    res = n * mult;
    printf("%d x %d = %d\n", n, mult, res);
  }
  return 0;
}