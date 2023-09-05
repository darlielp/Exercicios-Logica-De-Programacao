/* Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três números lidos. Em caso de empate, mostrar apenas uma vez. */

#include <iostream>

using namespace std;

int main()
{

  int n1, n2, n3, menor;

  cout << "Digite o primeiro valor: ";
  cin >> n1;

  cout << "Digite o segundo valor: ";
  cin >> n2;

  cout << "Digite o terceiro valor: ";
  cin >> n3;

  if (n1 < n2 && n1 < n3)
  {
    menor = n1;
  }
  else if (n2 < n3)
  {
    menor = n2;
  }
  else
  {
    menor = n3;
  }

  cout << "Menor = " << menor << endl;

  return 0;
}