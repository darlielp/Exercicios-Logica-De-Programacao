/* Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores negativos da matriz. */

#include <iostream>

using namespace std;

int main()
{

  int n, contNegativos;

  cout << "Qual a ordem da matriz? ";
  cin >> n;

  int mat[n][n];

  contNegativos = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "Elemento [" << i << "," << j << "]: ";
      cin >> mat[i][j];

      if (mat[i][j] < 0)
      {
        contNegativos++;
      }
    }
  }

  cout << "Diagonal principal: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << mat[i][i] << " ";
  }

  cout << "\nQuantidade de negativos = " << contNegativos << endl;
  return 0;
}