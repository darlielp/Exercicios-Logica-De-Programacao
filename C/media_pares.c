#include <stdio.h>

/* Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for digitado, mostrar a mensagem "NENHUM NUMERO PAR" */

int main()
{

  int n, soma, media, paresCont;

  printf("Quantos elementos vai ter o vetor? ");
  scanf("%d", &n);

  int vet[n];

  for (int i = 0; i < n; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &vet[i]);
  }

  soma = 0;
  paresCont = 0;
  for (int i = 0; i < n; i++)
  {
    if (vet[i] % 2 == 0)
    {
      soma = soma + vet[i];
      paresCont++;
    }
  }

  if (paresCont == 0)
  {
    printf("\nNenhum numero par");
  }
  else
  {
    media = soma / paresCont;
    printf("\nMedia dos pares = %.1lf", (double)media);
  }

  return 0;
}