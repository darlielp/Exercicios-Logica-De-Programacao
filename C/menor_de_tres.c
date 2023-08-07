#include <stdio.h>

/* Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
números lidos. Em caso de empate, mostrar apenas uma vez. */

int main()
{

  int n1, n2, n3, menorValor;

  printf("Digite o primeiro valor: ");
  scanf("%d", &n1);

  printf("Digite o segundo valor: ");
  scanf("%d", &n2);

  printf("Digite o terceiro valor: ");
  scanf("%d", &n3);

  if (n1 < n2 && n1 < n3)
  {
    menorValor = n1;
  }
  else if (n2 < n3)
  {
    menorValor = n2;
  }
  else
  {
    menorValor = n3;
  }

  printf("Menor valor = %d\n", menorValor);

  return 0;
}