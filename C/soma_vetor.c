#include <stdio.h>

/* Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor */

int main()
{
  int n;
  double soma, media;

  printf("Quantos numeros voce vai digitar? ");
  scanf("%d", &n);

  double vet[n];
  soma = 0;

  for (int i = 0; i < n; i++)
  {
    printf("Digite um numero: ");
    scanf("%lf", &vet[i]);

    soma = soma + vet[i];
  }

  printf("Valores = ");
  for (int i = 0; i < n; i++)
  {
    printf("%.1lf ", vet[i]);
  }

  media = soma / n;

  printf("\nSoma = %.2lf\n", soma);
  printf("Media = %.2lf\n", media);
}