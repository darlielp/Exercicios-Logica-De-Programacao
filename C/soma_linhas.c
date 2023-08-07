#include <stdio.h>

/* Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado. */

int main()
{

  int m, n;
  double soma;

  printf("Quantidade de linhas da matriz: ");
  scanf("%d", &m);
  printf("Quantidade de colunos da matriz: ");
  scanf("%d", &n);

  double matriz[m][n];

  for (int i = 0; i < m; i++)
  {
    printf("Digite os elementos da %da. linha: \n", i + 1);
    for (int j = 0; j < n; j++)
    {
      scanf("%lf", &matriz[i][j]);
    }
  }

  printf("\nSoma das linhas:\n");

  for (int i = 0; i < m; i++)
  {
    soma = 0;
    for (int j = 0; j < n; j++)
    {
      soma = soma + matriz[i][j];
    }
    printf("%.2lf\n", soma);
  }

  return 0;
}