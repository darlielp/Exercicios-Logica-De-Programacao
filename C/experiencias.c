#include <stdio.h>
#include <string.h>

/* Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto. */

int main()
{
  int n, quantidade, sapos = 0, ratos = 0, coelhos = 0, totalCobaia = 0;
  double percentSapos, percentRatos, percentCoelhos;
  char cobaia;

  printf("Quantos casos de teste serao digitados? ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Quantidade de cobaias: ");
    scanf("%d", &quantidade);

    printf("Tipo de cobaia (C para coelho, S para sapo, R para rato): ");
    scanf(" %c", &cobaia);

    totalCobaia += quantidade;

    if (cobaia == 'C')
    {
      coelhos += quantidade;
    }
    else if (cobaia == 'S')
    {
      sapos += quantidade;
    }
    else if (cobaia == 'R')
    {
      ratos += quantidade;
    }
    else
    {
      printf("Verifique se a cobaia foi digitada corretamente.\n");
    }
  }

  printf("Relatório Final: \n");
  printf("Total de cobaias: %d\n", totalCobaia);
  printf("Total de coelhos: %d\n", coelhos);
  printf("Total de ratos: %d\n", ratos);
  printf("Total de sapos: %d\n", sapos);

  percentCoelhos = (double)(coelhos * 100) / totalCobaia;
  percentRatos = (double)(ratos * 100) / totalCobaia;
  percentSapos = (double)(sapos * 100) / totalCobaia;

  printf("Percentual de coelhos: %.2lf\n", percentCoelhos);
  printf("Percentual de ratos: %.2lf\n", percentRatos);
  printf("Percentual de sapos: %.2lf\n", percentSapos);

  return 0;
}