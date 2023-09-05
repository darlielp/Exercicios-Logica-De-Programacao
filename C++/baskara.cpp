/* Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais, conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem. */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

  double coeA, coeB, coeC, x1, x2, delta;

  cout << "Coeficiente A: ";
  cin >> coeA;

  cout << "Coeficiente B: ";
  cin >> coeB;

  cout << "Coeficiente C: ";
  cin >> coeC;

  delta = pow(coeB, 2) - 4 * coeA * coeC;

  x1 = (-coeB + sqrt(delta)) / (2 * coeA);
  x2 = (-coeB - sqrt(delta)) / (2 * coeA);

  if (coeA == 0 || delta < 0)
  {
    cout << "Esta equacao nao possui raizes" << endl;
  }
  else
  {
    cout << fixed << setprecision(4);
    cout << "X1 = " << x1 << endl;
    cout << "X2 = " << x2 << endl;
  }
  return 0;
}