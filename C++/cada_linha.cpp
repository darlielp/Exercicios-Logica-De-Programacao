/* Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento de cada linha. Suponha não haver empates. */

#include <iostream>

using namespace std;

int main()
{
  int n, maior;

  cout << "Qual a ordem da matriz? ";
  cin >> n;

  int mat[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "Elemento [" << i << "," << j << "]: ";
      cin >> mat[i][j];
    }
  }

  cout << "Maior elemento de cada linha:" << endl;
  for (int i = 0; i < n; i++)
  {
    maior = 0;
    for (int j = 0; j < n; j++)
    {
      if (mat[i][j] > maior)
      {
        maior = mat[i][j];
      }
    }
    cout << maior << endl;
  }

  return 0;
}