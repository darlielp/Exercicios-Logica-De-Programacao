#include <stdio.h>

/* Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez, mostrar a mensagem "IMPOSSIVEL CALCULAR". */

int main()
{

  int idade, soma, cont;
  double media;

  printf("Digite as idades: \n");

  soma = 0;
  cont = 0;

  while (idade >= 0)
  {
    scanf("%d", &idade);
    if (idade > 0)
    {
      soma = soma + idade;
      cont = cont + 1;
    }
  }

  media = (double)soma / cont;

  if (cont > 0)
  {
    printf("Media = %.2lf", media);
  }
  else
  {
    printf("Impossivel Calcular");
  }

  return 0;
}