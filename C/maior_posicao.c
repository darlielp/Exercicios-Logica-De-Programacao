#include <stdio.h>

/* Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento, considerando a primeira posição como 0 (zero). */

int main()
{
  int n, posicao;
  double maiorValor;

  printf("Quantos numeros voce vai digitar? ");
  scanf("%d", &n);

  double vet[n];

  for (int i = 0; i < n; i++)
  {
    printf("Digite um numero: ");
    scanf("%lf", &vet[i]);
  }

  maiorValor = 0;
  posicao = 0;

  for (int i = 0; i < n; i++)
  {
    if (vet[i] > maiorValor)
    {
      maiorValor = vet[i];
      posicao++;
    }
  }

  printf("\nMaior valor = %.1lf\n", maiorValor);
  printf("Posicao do maior valor = %d\n", posicao);

  return 0;
}