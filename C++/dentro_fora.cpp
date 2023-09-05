/* Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida. Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, conforme exemplo */

#include <iostream>

using namespace std;

int main()
{

  int n, x, dentro, fora;

  cout << "Quantos numeros voce vai digitar? ";
  cin >> n;

  dentro = 0;
  fora = 0;

  for (int i = 0; i < n; i++)
  {
    cout << "Digite um numero: ";
    cin >> x;

    if (x >= 10 && x <= 20)
    {
      dentro++;
    }
    else
    {
      fora++;
    }
  }

  cout << dentro << " Dentro." << endl;
  cout << fora << " Fora." << endl;

  return 0;
}