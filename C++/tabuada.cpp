/* Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo. */

#include <iostream>

using namespace std;

int main()
{

  int n, mult;

  cout << "digite o valor da tabuada: ";
  cin >> n;

  for (int i = 1; i <= 10; i++)
  {
    mult = n * i;
    cout << n << " x " << i << " = " << mult << endl;
  }

  return 0;
}