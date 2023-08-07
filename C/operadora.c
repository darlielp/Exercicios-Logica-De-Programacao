#include <stdio.h>

/* Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago. */

int main()
{

  int minutos;
  double valorPagar, valorExcedido;

  printf("Digite a quantidade de minutos: ");
  scanf("%d", &minutos);

  valorPagar = 50.00;
  valorExcedido = (minutos - 100) * 2.00;

  if (minutos > 100)
  {
    valorPagar = valorPagar + valorExcedido;
    printf("Valor a pagar = %.2lf R$\n", valorPagar);
  }
  else
  {
    printf("Valor a pagar = %.2lf R$\n", valorPagar);
  }
}