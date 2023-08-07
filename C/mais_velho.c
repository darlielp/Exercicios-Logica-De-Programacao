#include <stdio.h>
#include <string.h>

/* Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome da pessoa mais velha. */

int main()
{
  int n, idade;
  char nome[50];

  printf("Quantas pessoas voce vai digitar? ");
  scanf("%d", &n);

  char nomeVet[n][50];
  int idadeVet[n];

  for (int i = 0; i < n; i++)
  {
    printf("Digite os dados da %da pessoa:\n", i + 1);
    printf("Nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nomeVet[i]);
    printf("Idade: ");
    scanf("%d", &idadeVet[i]);
  }

  idade = 0;

  for (int i = 0; i < n; i++)
  {
    if (idadeVet[i] > idade)
    {
      idade = idadeVet[i];
      strcpy(nome, nomeVet[i]);
    }
  }

  printf("\nPessoa mais velha: %s\n", nome);

  return 0;
}