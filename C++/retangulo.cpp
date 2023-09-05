/* Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos. */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

  double base, altura, area, perimetro, diagonal;

  cout << "Digite a base do retangulo: ";
  cin >> base;
  cout << "Digite a altura do retangulo: ";
  cin >> altura;

  area = base * altura;
  perimetro = 2 * (base + altura);
  diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

  cout << fixed << setprecision(4);
  cout << "Base = " << area << endl;
  cout << "Perimetro = " << perimetro << endl;
  cout << "Diagonal = " << diagonal << endl;

  return 0;
}