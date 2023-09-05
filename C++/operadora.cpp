/* Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int minutos;
  double valorPagar, valorExedido;

  cout << "Digite a quantidade de minutos: ";
  cin >> minutos;

  valorPagar = 50;
  valorExedido = (minutos - 100) * 2;

  if (minutos > 100)
  {
    valorPagar = valorPagar + valorExedido;
    cout << fixed << setprecision(2);
    cout << "Valor a pagar " << valorPagar << " R$" << endl;
  }
  else
  {
    cout << fixed << setprecision(2);
    cout << "Valor a pagar " << valorPagar << " R$" << endl;
  }

  return 0;
}