#include <stdio.h>

/* Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima o vetor C gerado. */

int main()
{

  int n;

  printf("Quantos valores vai ter cada vetor? ");
  scanf("%d", &n);

  int vetA[n], vetB[n], vetC[n];

  printf("Digite os valor do vetor A:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &vetA[i]);
  }

  printf("Digite os valores do vetor B:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &vetB[i]);
  }

  printf("\nResultado da soma de vetores: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\n", vetC[i] = vetA[i] + vetB[i]);
  }

  return 0;
}