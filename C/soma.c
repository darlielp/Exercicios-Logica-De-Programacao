#include <stdio.h>

/* Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes
números. */

int main()
{

  int x, y, soma;

  printf("Digite o valor de X: ");
  scanf("%d", &x);

  printf("Digite o valor de Y: ");
  scanf("%d", &y);

  soma = x + y;

  printf("A soma de X + Y e = %d\n", soma);

  return 0;
}