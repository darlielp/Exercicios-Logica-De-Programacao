/* Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo números podem ser digitados em qualquer ordem. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int n1, n2;

  cout << "Digite dois numeros inteiros: " << endl;
  cin >> n1;
  cin >> n2;

  if (n1 % n2 == 0 || n2 % n1 == 0)
  {
    cout << "Sao multiplos";
  }
  else
  {
    cout << "Nao sao multiplos.";
  }

  return 0;
}