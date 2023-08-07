#include <stdio.h>

/* Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida. Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir apenas NULO. */

int main()
{
  int n, x;

  printf("Quantos numeros voce vai digitar? ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &x);

    if (x > 0)
    {
      if (i % 2 != 0)
      {
        printf("Par Positivo\n");
      }
      else
      {
        printf("Impar Positivo\n");
      }
    }
    else if (x < 0)
    {
      if (i % 2 != 0)
      {
        printf("Par Negativo\n");
      }
      else
      {
        printf("Impar Negativo\n");
      }
    }
    else
    {
      printf("Nulo\n");
    }
  }

  return 0;
}