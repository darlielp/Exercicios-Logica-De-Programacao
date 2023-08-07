#include <stdio.h>

/* Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na tela todos os números pares, e também a quantidade de números pares. */

int main()
{
  int n, soma;

  printf("Quantos numero voce vai digitar? ");
  scanf("%d", &n);

  int vet[n];

  for (int i = 0; i < n; i++)
  {
    printf("Digite o numero: ");
    scanf("%d", &vet[i]);
  }

  soma = 0;
  printf("\nNumeros pares: \n");
  for (int i = 0; i < n; i++)
  {
    if (vet[i] % 2 == 0)
    {
      printf("%d ", vet[i]);
      soma++;
    }
  }

  printf("\nQuantidade de pares = %d", soma);

  return 0;
}