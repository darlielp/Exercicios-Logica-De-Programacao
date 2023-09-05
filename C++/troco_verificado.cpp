/* Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o valor restante conforme exemplo. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int quantidadeComprada;
  double precoUnitario, dinheiroRecebido, troco, total, resto;

  cout << "Preco unitario do produto: ";
  cin >> precoUnitario;

  cout << "Quantidade comprada: ";
  cin >> quantidadeComprada;

  cout << "Dinheiro Recebido: ";
  cin >> dinheiroRecebido;

  total = precoUnitario * quantidadeComprada;
  resto = total - dinheiroRecebido;

  if (total <= dinheiroRecebido)
  {
    troco = dinheiroRecebido - total;
    cout << fixed << setprecision(2);
    cout << "Troco = " << troco << " R$" << endl;
  }
  else
  {
    cout << fixed << setprecision(2);
    cout << "Dinheiro insuficiente. Faltam " << resto << " R$" << endl;
  }

  return 0;
}