#include <stdio.h>

/* Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem como as quantidades de cada combustível. */

int main()
{
  int codigo, acool, gasolina, diesel;

  printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
  scanf("%d", &codigo);

  acool = 0;
  gasolina = 0;
  diesel = 0;

  while (codigo != 4)
  {

    if (codigo == 1)
    {
      acool++;
    }
    else if (codigo == 2)
    {
      gasolina++;
    }
    else if (codigo == 3)
    {
      diesel++;
    }

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &codigo);
  }

  printf("Muito Obrigado!\n");
  printf("Acool: %d\n", acool);
  printf("Gasolina: %d\n", gasolina);
  printf("Diesel: %d\n", diesel);

  return 0;
}