/* Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme exemplo. Em seguida, mostrar na tela somente os números negativos da matriz. */

#include <iostream>

using namespace std;

int main()
{
  int m, n;

  cout << "Qual a quantidade de linhas da matriz? ";
  cin >> m;
  cout << "Qual a quantidade de colunas da matriz? ";
  cin >> n;

  int mat[m][n];

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "Elemento [" << i << "," << j << "]: ";
      cin >> mat[i][j];
    }
  }

  cout << "Numeros negativos: " << endl;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (mat[i][j] < 0)
      {
        cout << mat[i][j] << endl;
      }
    }
  }

  return 0;
}