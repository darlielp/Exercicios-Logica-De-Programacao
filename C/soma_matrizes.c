#include <stdio.h>

/* Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada. */

int main()
{
  int m, n;

  printf("Quantas linhas vai ter cada matriz? ");
  scanf("%d", &m);

  printf("Quantas colunas vai ter cada matriz? ");
  scanf("%d", &n);

  int matrizA[m][n];
  int matrizB[m][n];
  int matrizC[m][n];

  printf("\nDigite os valores da matriz A: \n");
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("Elemento [%d,%d]: ", i, j);
      scanf("%d", &matrizA[i][j]);
    }
  }

  printf("\nDigite os valores da matriz B: \n");
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("Elemento [%d,%d]: ", i, j);
      scanf("%d", &matrizB[i][j]);
    }
  }

  printf("\nResultao da soma da matriz A e matriz B: \n");
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
      printf("%d", matrizC[i][j]);
    }
  }
  return 0;
}