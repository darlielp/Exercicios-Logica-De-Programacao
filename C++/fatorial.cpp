/* Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o fatorial de N. */

#include <iostream>

using namespace std;

int main()
{

  int n, fatorial;

  cout << "Digite o valor de N (no maximo 15): ";
  cin >> n;

  fatorial = 1;

  if (n <= 15)
  {
    for (int i = 1; i <= n; i++)
    {
      fatorial = fatorial * i;
    }
    cout << "Fatorial = " << fatorial << endl;
  }
  else
  {
    cout << "O numero digitado e maior que 15" << endl;
  }

  return 0;
}