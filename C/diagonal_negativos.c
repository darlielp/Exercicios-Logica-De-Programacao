#include <stdio.h>

/* Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores negativos da matriz. */

int main()
{
  int n, cont;

  printf("Qual a ordem da matriz? ");
  scanf("%d", &n);

  int matriz[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("Elemento [%d,%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("Diagonal Principal: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", matriz[i][i]);
  }

  cont = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (matriz[i][j] < 0)
      {
        cont++;
      }
    }
  }
  printf("\nQuantidade de negativos = %d\n", cont);

  return 0;
}