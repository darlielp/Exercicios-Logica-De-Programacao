#include <stdio.h>

/* Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo números podem ser digitados em qualquer ordem. */

int main()
{

  int n1, n2, res1, res2;

  printf("Digite dois numeros inteiros: \n");
  scanf("%d", &n1);
  scanf("%d", &n2);

  res1 = n1 / n2;
  res1 = res1 * n2;

  res2 = n2 / n1;
  res2 = res2 * n1;

  if ((res1 == n1) || (res2 == n2))
  {
    printf("São multiplos.");
  }
  else
  {
    printf("Não são multiplos.");
  };

  return 0;
}