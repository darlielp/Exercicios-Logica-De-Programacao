#include <stdio.h>
#include <string.h>

/* Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
nomes e a idade média entre essas pessoas, com uma casa decimal. */

int main()
{

  int idade1, idade2;
  double idadeMedia;
  char nome1[50], nome2[50];

  printf("Digite o nome da primeira pessoa: ");
  gets(nome1);
  printf("Digite a idade da primeira pessoa: ");
  scanf("%d", &idade1);

  printf("Digite o nome da segunda pessoa: ");
  fseek(stdin, 0, SEEK_END);
  gets(nome2);
  printf("Digite a idade da segunda pessoa: ");
  scanf("%d", &idade2);

  idadeMedia = (double)(idade1 + idade2) / 2;

  printf("A idade media entre %s e %s e de %.1lf anos\n", nome1, nome2, idadeMedia);

  return 0;
}