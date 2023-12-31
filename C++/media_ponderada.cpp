/* Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida pela soma dos pesos. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int n, x;
  double valor1, valor2, valor3, media;

  cout << "Quantos numeros voce vai digitar? ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Digite tres numeros: " << endl;
    cin >> valor1 >> valor2 >> valor3;

    media = ((valor1 * 2) + (valor2 * 3) + (valor3 * 5)) / 10;

    cout << fixed << setprecision(1);
    cout << "Media = " << media << endl;
  }

  return 0;
}