#include <stdio.h>

/* Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
mostrar o valor do troco a ser devolvido ao cliente. */

int main()
{

  double precoUnidade, dinheiroRecebido, troco;
  int quantidadeComprada;

  printf("Preco unitario do produto: ");
  scanf("%lf", &precoUnidade);

  printf("Quanditade comprada: ");
  scanf("%d", &quantidadeComprada);

  printf("Dinheiro recebido: ");
  scanf("%lf", &dinheiroRecebido);

  troco = dinheiroRecebido - (quantidadeComprada * precoUnidade);

  printf("Troco = %.2lf R$\n", troco);

  return 0;
}