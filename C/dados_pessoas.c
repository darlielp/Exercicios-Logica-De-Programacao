#include <stdio.h>
#include <string.h>

/* Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número de homens. */

int main()
{
  int n, quantHomens, quantMulheres;
  double menorAltura, maiorAltura, mediaAltura, generoF;

  printf("Quantas pessoas serao digitadas? ");
  scanf("%d", &n);

  double altura[n];
  char genero[n];

  for (int i = 0; i < n; i++)
  {
    printf("Altura da %da pessoa: ", i + 1);
    scanf("%lf", &altura[i]);
    printf("Genero da %da pessoa (M ou F): ", i + 1);
    scanf(" %c", &genero[i]); // Use %c to read a single character
  }

  maiorAltura = altura[0];
  menorAltura = altura[0];

  for (int i = 0; i < n; i++)
  {
    if (altura[i] > maiorAltura)
    {
      maiorAltura = altura[i];
    }

    if (altura[i] < menorAltura)
    {
      menorAltura = altura[i];
    }
  }

  printf("\nMaior altura = %.2lf\n", maiorAltura);
  printf("Menor altura = %.2lf\n", menorAltura);

  quantHomens = 0;
  quantMulheres = 0;
  generoF = 0;

  for (int i = 0; i < n; i++)
  {
    if (genero[i] == 'F') // Use single quotes for character comparison
    {
      generoF = generoF + altura[i];
      quantMulheres++;
    }
    else
    {
      quantHomens++;
    }
  }

  mediaAltura = generoF / quantMulheres;

  printf("Media das alturas das mulheres = %.2lf\n", mediaAltura);
  printf("Numero de homens = %d\n", quantHomens);

  return 0;
}