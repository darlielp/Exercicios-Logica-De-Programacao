/* Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada. */

#include <iostream>

using namespace std;

int main()
{

  int m, n;

  cout << "Quantas linhas vai ter cada matriz? ";
  cin >> m;
  cout << "Quantas colunas vai ter cada matriz? ";
  cin >> n;

  int matA[m][n], matB[m][n], matC[m][n];

  cout << endl
       << "Digite os valor da matriz A: " << endl;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "Elemento [" << i << "," << j << "]: ";
      cin >> matA[i][j];
    }
  }

  cout << endl
       << "Digite os valor da matriz B: " << endl;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "Elemento [" << i << "," << j << "]: ";
      cin >> matB[i][j];
    }
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      matC[i][j] = matA[i][j] + matB[i][j];
    }
  }

  cout << endl
       << "Resultado da soma da matriz: " << endl;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matC[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}