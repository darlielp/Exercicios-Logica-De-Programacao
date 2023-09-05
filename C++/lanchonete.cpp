/* Uma lanchonete possui vários produtos. Cada produto possui um código e um preço. Você deve fazer um programa para ler o código e a quantidade comprada de um produto (suponha um código válido), e daí informar qual o valor a ser pago, com duas casas decimais, conforme tabela de produtos ao lado. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int codigo, quantidade;
  double valorPagar, preco;

  cout << "Codigo do produto comprado: ";
  cin >> codigo;

  cout << "Quantidade comprada: ";
  cin >> quantidade;

  switch (codigo)
  {
  case 1:
    preco = 5.00;
    break;
  case 2:
    preco = 3.50;
    break;
  case 3:
    preco = 4.80;
    break;
  case 4:
    preco = 8.90;
    break;
  case 5:
    preco = 7.32;
    break;
  default:
    preco = 10.00;
    break;
  }

  valorPagar = preco * quantidade;

  cout << fixed << setprecision(2);
  cout << "Valor a pagar: " << valorPagar << " R$" << endl;
  return 0;
}