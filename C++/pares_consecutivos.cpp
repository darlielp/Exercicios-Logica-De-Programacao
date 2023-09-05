/* O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X , se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação: 4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a soma de 12+14+16+18+20. */

#include <iostream>

using namespace std;

int main()
{

  int x, soma;

  cout << "Digite um numero inteiro: ";
  cin >> x;

  soma = 0;

  while (x != 0)
  {
    if (x % 2 != 0)
    {
      x++;
    }

    soma = 5 * x + 20;
    cout << "Soma = " << soma << endl;

    cout << "Digite outro numero inteiro (ou 0 para sair): ";
    cin >> x;
    soma = 0;
  }

  return 0;
}