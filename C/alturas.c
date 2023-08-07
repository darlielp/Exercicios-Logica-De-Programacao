#include <stdio.h>
#include <string.h>

/* Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos, bem como os nomes dessas pessoas caso houver. */

int main()
{
  int n;
  double soma, media, porcentagem;

  printf("Quantas pessoas serao digitadas? ");
  scanf("%d", &n);

  int idade[n];
  double altura[n];
  char nome[n][50];

  for (int i = 0; i < n; i++)
  {
    printf("Digite os dados da %da pessoa: \n", i + 1);
    printf("Nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome[i]);
    printf("Idade: ");
    scanf("%d", &idade[i]);
    printf("Altura: ");
    scanf("%lf", &altura[i]);
  }

  soma = 0;
  porcentagem = 0;
  for (int i = 0; i < n; i++)
  {
    soma = soma + altura[i];

    if (idade[i] < 16)
    {
      porcentagem = porcentagem + 1;
    }
  }

  media = soma / n;
  printf("\nAltura media = %.2lf\n", media);
  porcentagem = porcentagem * 100 / n;
  printf("Pessoas com menos de 16 anos = %.1lf %%\n", porcentagem);

  for (int i = 0; i < n; i++)
  {
    if (idade[i] < 16)
    {
      printf("%s\n", nome[i]);
    }
  }
  return 0;
}