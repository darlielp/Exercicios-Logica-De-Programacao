#include <stdio.h>

/* Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente. */

int main()
{
  double nota1, nota2, media;

  printf("Digite a primeira nota:");
  scanf("%lf", &nota1);

  while (nota1 < 0 || nota1 > 10)
  {
    printf("Valor invalido! Tente novamente:");
    scanf("%lf", &nota1);
  }

  printf("Digite a segunda nota:");
  scanf("%lf", &nota2);

  while (nota2 < 0 || nota2 > 10)
  {
    printf("Valor invalido! Tente novamente:");
    scanf("%lf", &nota2);
  }

  media = (nota1 + nota2) / 2;

  printf("Media = %.2lf", media);

  return 0;
}