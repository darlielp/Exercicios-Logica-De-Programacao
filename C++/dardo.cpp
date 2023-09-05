/* No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir. Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual foi a maior. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  double distancia1, distancia2, distancia3, maiorDistancia;

  cout << "Digite as tres distancias: " << endl;
  cin >> distancia1;
  cin >> distancia2;
  cin >> distancia3;

  if (distancia1 > distancia2 && distancia1 > distancia3)
  {
    maiorDistancia = distancia1;
  }
  else if (distancia2 > distancia3)
  {
    maiorDistancia = distancia2;
  }
  else
  {
    maiorDistancia = distancia3;
  }

  cout << fixed << setprecision(2);
  cout << "Maior distancia = " << maiorDistancia << endl;

  return 0;
}