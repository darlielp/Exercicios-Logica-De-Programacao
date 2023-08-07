#include <stdio.h>

/* Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento de cada linha. Suponha não haver empates. */

int main()
{
  int n, maior;

  printf("Qual o tamanho da matriz? ");
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

  printf("\nMaior elemento de cada linha:\n");
  for (int i = 0; i < n; i++)
  {
    maior = 0;
    for (int j = 0; j < n; j++)
    {
      if (matriz[i][j] > maior)
      {
        maior = matriz[i][j];
      }
    }
    printf("%d\n", maior);
  }
}