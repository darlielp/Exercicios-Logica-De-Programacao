#include <stdio.h>

/* Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram no 1o e 2o semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou igual a 6.0 (seis). */

int main()
{
  int n;

  printf("Quantos alunos serao digitados? ");
  scanf("%d", &n);

  char nome[n][50];
  double nota1[n], nota2[n], media[n];

  for (int i = 0; i < n; i++)
  {
    printf("Digite nome, primeira e segunda nota do %do aluno:\n", i + 1);
    fseek(stdin, 0, SEEK_END);
    gets(nome[i]);
    scanf("%lf", &nota1[i]);
    scanf("%lf", &nota2[i]);
  }

  for (int i = 0; i < n; i++)
  {
    media[i] = (nota1[i] + nota2[i]) / 2;
  }

  printf("\nAlunos aprovados:\n");
  for (int i = 0; i < n; i++)
  {
    if (media[i] >= 6)
    {
      printf("%s\n", nome[i]);
    }
  }

  return 0;
}