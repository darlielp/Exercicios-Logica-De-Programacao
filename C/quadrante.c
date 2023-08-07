#include <stdio.h>

/* Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma). */

int main()
{
  int Q1, Q2, Q3, Q4, X, Y;

  printf("Digite os valores de X e Y: \n");
  scanf("%d", &X);
  scanf("%d", &Y);

  while ((X != 0) && (Y != 0))
  {
    if ((X > 0) && (Y > 0))
    {
      printf("Quadrante Q1\n");
    }
    else if ((X < 0) && (Y > 0))
    {
      printf("Quadrante Q2\n");
    }
    else if ((X < 0) && (Y < 0))
    {
      printf("Quadrante Q3\n");
    }
    else
    {
      printf("Quadrante Q4\n");
    }

    printf("Digite os valores de X e Y: \n");
    scanf("%d", &X);
    scanf("%d", &Y);
  }

  return 0;
}