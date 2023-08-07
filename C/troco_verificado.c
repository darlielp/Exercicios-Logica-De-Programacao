#include <stdio.h>

/* Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
valor restante conforme exemplo. */

int main()
{

  int quantidade;
  double preco, dinheiroRecebido, troco;

  printf("Digite o valor do produto: ");
  scanf("%lf", &preco);

  printf("Digite a quantidade de produtos: ");
  scanf("%d", &quantidade);

  printf("Dinheiro recebido: ");
  scanf("%lf", &dinheiroRecebido);

  troco = dinheiroRecebido - (quantidade * preco);

  if (dinheiroRecebido > (quantidade * preco))
  {
    printf("Troco = %.2lf R$", troco);
  }
  else
  {
    printf("Dinheiro insuficiente, faltam %.2lf R$\n", troco);
  }

  return 0;
}