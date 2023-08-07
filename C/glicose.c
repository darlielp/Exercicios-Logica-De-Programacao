#include <stdio.h>
#include <string.h>

/* Fazer um programa para ler a quantidade de glicose no sangue de uma pessoa e depois mostrar na tela a
classificação desta glicose de acordo com a tabela de referência ao lado. */

int main()
{

  double x;
  char classificacao[20];

  printf("Digite a medida da glicose: ");
  scanf("%lf", &x);

  if (x <= 100)
  {
    strcpy(classificacao, "Normal");
  }
  else if (x <= 140)
  {
    strcpy(classificacao, "Elevado");
  }
  else
  {
    strcpy(classificacao, "Diabetes");
  }

  printf("Classificacao da glicose = %s\n", classificacao);

  return 0;
}