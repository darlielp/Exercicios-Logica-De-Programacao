/* Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida. Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir apenas NULO. */

#include <iostream>

using namespace std;

int main()
{

  int n, x;

  cout << "Quantos numeros voce vai digitar? ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Digite um numero: ";
    cin >> x;

    if (x == 0)
    {
      cout << "Nulo" << endl;
    }
    else if (x > 0 && x % 2 != 0)
    {
      cout << "Impar positivo" << endl;
    }
    else if (x > 0 && x % 2 == 0)
    {
      cout << "Par positivo" << endl;
    }
    else if (x < 0 && x % 2 != 0)
    {
      cout << "Impar negativo" << endl;
    }
    else
    {
      cout << "Par negativo" << endl;
    }
  }

  return 0;
}