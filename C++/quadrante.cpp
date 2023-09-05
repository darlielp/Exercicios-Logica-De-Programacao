/* Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma). */

#include <iostream>

using namespace std;

int main()
{

  int x, y;
  string quadrante;

  cout << "Digite os valores das coordenadas X e Y: " << endl;
  cin >> x >> y;

  while (x != 0 && y != 0)
  {
    if (x > 0 && y > 0)
    {
      quadrante = "Quadrante Q1";
    }
    else if (x < 0 && y > 0)
    {
      quadrante = "Quadrante Q2";
    }
    else if (x < 0 && y < 0)
    {
      quadrante = "Quadrante Q3";
    }
    else
    {
      quadrante = "Quadrante Q4";
    }

    cout << quadrante << endl;

    cout << "Digite os valores das coordenadas X e Y: " << endl;
    cin >> x >> y;
  }
}