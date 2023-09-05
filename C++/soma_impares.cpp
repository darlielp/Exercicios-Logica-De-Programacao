/* Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números impares entre eles. */

#include <iostream>

using namespace std;

int main()
{
  int x, y, z, soma;

  cout << "Digite dois numeros: " << endl;
  cin >> x >> y;

  if (x > y)
  {
    z = x;
    x = y;
    y = z;
  }

  soma = 0;

  for (int i = x + 1; i < y; i++)
  {
    if (i % 2 != 0)
    {
      soma = soma + i;
    }
  }

  cout << "Soma dos impares = " << soma << endl;
  return 0;
}