/* Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve mostrar o valor do troco a ser devolvido ao cliente. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int quantidade;
  double valorUnidade, dinheiroRecebido, troco, multi;

  cout << "Digite o valor unitario do produto: ";
  cin >> valorUnidade;
  cout << "Digite a quantidade comprada: ";
  cin >> quantidade;
  cout << "Digite o dinheiro recebido: ";
  cin >> dinheiroRecebido;

  multi = valorUnidade * quantidade;
  troco = dinheiroRecebido - multi;

  cout << fixed << setprecision(2);
  cout << "\nTroco Recebido = " << troco << " R$" << endl;

  return 0;
}