#include <stdio.h>

/* Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida pela soma dos pesos. */

int main()
{
  int n, x;
  double valor1, valor2, valor3, media;

  printf("Quantos casos voce vai digitar? ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Digite tres numeros: \n");
    scanf("%lf %lf %lf", &valor1, &valor2, &valor3);

    media = ((valor1 * 2) + (valor2 * 3) + (valor3 * 5)) / 10;

    printf("Media = %.1lf\n", media);
  }

  return 0;
}