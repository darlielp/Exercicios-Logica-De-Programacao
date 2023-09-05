/* Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int m, n;
  double soma;

  cout << "Qual a quantidade de linhas da matriz? ";
  cin >> m;
  cout << "Qual a quantidade de colunas da matriz? ";
  cin >> n;

  double mat[m][n];

  for (int i = 0; i < m; i++)
  {
    cout << "Digite os elementos da " << i + 1 << "a linha: " << endl;
    for (int j = 0; j < n; j++)
    {
      cin >> mat[i][j];
    }
  }

  cout << "Soma das linhas: " << endl;
  for (int i = 0; i < m; i++)
  {
    soma = 0;
    for (int j = 0; j < n; j++)
    {
      soma = soma + mat[i][j];
    }

    cout << fixed << setprecision(2);
    cout << soma << endl;
  }

  return 0;
}