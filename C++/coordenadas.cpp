/* Leia os valores das coordenadas X e Y de um ponto no plano cartesiano. A seguir, determine qual o quadrante ao qual pertence o ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação. */

#include <iostream>

using namespace std;

int main()
{

  double x, y;
  string quadrante;

  cout << "Digite o valor de X: ";
  cin >> x;

  cout << "Digite o valor de Y: ";
  cin >> y;

  if (x == 0 && y == 0)
  {
    quadrante = "Origem";
  }
  else if (x == 0 && y > 0)
  {
    quadrante = "Eixo Y";
  }
  else if (x > 0 && y == 0)
  {
    quadrante = "Eixo X";
  }
  else if (x > 0 && y > 0)
  {
    quadrante = "Q1";
  }
  else if (x < 0 && y > 0)
  {
    quadrante = "Q2";
  }
  else if (x < 0 && y < 0)
  {
    quadrante = "Q3";
  }
  else
  {
    quadrante = "Q4";
  }

  cout << quadrante << endl;

  return 0;
}