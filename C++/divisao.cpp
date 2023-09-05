/* Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int n, numerador, denominador;
  double divisao;

  cout << "Quantos casos voce vai testar? ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Entre com o numerador: ";
    cin >> numerador;
    cout << "Entre com o denominador: ";
    cin >> denominador;

    if (denominador == 0)
    {
      cout << "Divisao impossivel" << endl;
    }
    else
    {
      divisao = (double)numerador / denominador;
      cout << fixed << setprecision(2);
      cout << "Divisao = " << divisao << endl;
    }
  }

  return 0;
}