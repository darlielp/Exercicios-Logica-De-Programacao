/* Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do círculo com três casas decimais. A fórmula da área do círculo é a seguinte: 𝑎𝑟𝑒𝑎 = 𝜋. 𝑟􏰀. Você pode usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use diretamente o valor 3.14159. */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

  double area, raio;

  cout << "Digite o valor do raio do circulo: ";
  cin >> raio;

  area = pow(raio, 2.0) * M_PI;

  cout << fixed << setprecision(3);
  cout << "Area do circulo = " << area << endl;

  return 0;
}