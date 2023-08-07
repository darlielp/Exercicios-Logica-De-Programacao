#include <stdio.h>

/* Uma lanchonete possui vários produtos. Cada produto possui um código e um preço. Você deve fazer um programa para ler o código e a quantidade comprada de um produto (suponha um código válido), e daí informar qual o valor a ser pago, com duas casas decimais, conforme tabela de produtos ao lado. */

int main()
{

  int codigoDoProduto, quantidade;
  double valorPagar, precoProduto;

  printf("Codigo do produto comprado:");
  scanf("%d", &codigoDoProduto);
  printf("Quantidade comprada:");
  scanf("%d", &quantidade);

  switch (codigoDoProduto)
  {
  case 1:
    precoProduto = 5.00;
    break;
  case 2:
    precoProduto = 3.50;
    break;
  case 3:
    precoProduto = 4.80;
    break;
  case 4:
    precoProduto = 8.90;
    break;
  case 5:
    precoProduto = 7.32;
    break;
  default:
    precoProduto = 9.00;
    break;
  }

  valorPagar = quantidade * precoProduto;

  printf("Valor a pagar = %.2lf R$", valorPagar);

  return 0;
}