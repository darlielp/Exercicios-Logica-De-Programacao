#include <stdio.h>

/* Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna. d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir a matriz alterada. */

int main()
{
  int n, linha, coluna;
  double soma;

  printf("Qual o tamanho da matriz? ");
  scanf("%d", &n);

  double matriz[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("Elemento [%d,%d]: ", i, j);
      scanf("%lf", &matriz[i][j]);
    }
  }

  soma = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (matriz[i][j] > 0)
      {
        soma = soma + matriz[i][j];
      }
    }
  }

  printf("\nSoma dos positivos = %.1lf\n", soma);

  printf("\nEscolha uma linha: ");
  scanf("%d", &linha);
  printf("Linha escolhida: ");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == linha)
      {
        printf("%.1lf ", matriz[i][j]);
      }
    }
  }

  printf("\n\nEscolha uma coluna: ");
  scanf("%d", &coluna);
  printf("Coluna Escolhida: ");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (j == coluna)
      {
        printf("%.1lf ", matriz[i][j]);
      }
    }
  }

  printf("\n\nDiagonal Principal: ");
  for (int i = 0; i < n; i++)
  {
    printf("%.1lf ", matriz[i][i]);
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (matriz[i][j] < 0)
      {
        matriz[i][j] = matriz[i][j] * matriz[i][j];
      }
    }
  }

  printf("\n\nMatriz alterada: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%.1lf ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}