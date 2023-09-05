/* Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número de homens. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int n, contHomens, contMulheres;
  double menorAltura, maiorAltura, mediaMulheres, somaAlturas;

  cout << "Quantas pessoas serao digitadas? ";
  cin >> n;

  double altura[n];
  string genero[n];

  contHomens = 0;
  contMulheres = 0;

  for (int i = 0; i < n; i++)
  {
    cout << "Altura da " << i + 1 << "a pessoa: ";
    cin >> altura[i];
    cout << "Genero da " << i + 1 << "a pessoa (F ou M): ";
    cin >> genero[i];

    if (genero[i] == "F")
    {
      contMulheres++;
    }
    else if (genero[i] == "M")
    {
      contHomens++;
    }
    else
    {
      cout << "Genero nao especificado.";
    }
  }

  menorAltura = altura[0];
  maiorAltura = altura[0];

  for (int i = 0; i < n; i++)
  {
    if (altura[i] > maiorAltura)
    {
      maiorAltura = altura[i];
    }
    else if (altura[i] < menorAltura)
    {
      menorAltura = altura[i];
    }
  }

  cout << "Menor altura = " << menorAltura << endl;
  cout << "Maior altura = " << maiorAltura << endl;

  somaAlturas = 0;

  for (int i = 0; i < n; i++)
  {

    if (genero[i] == "F")
    {
      somaAlturas = altura[i] + somaAlturas;
    }
  }

  mediaMulheres = somaAlturas / contMulheres;

  cout << fixed << setprecision(2);
  cout << "Media das alturas entre as mulheres = " << mediaMulheres << endl;
  cout << "Quantidade de homens = " << contHomens << endl;
  return 0;
}