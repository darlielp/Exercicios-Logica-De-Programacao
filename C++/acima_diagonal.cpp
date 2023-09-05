/* Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N contendo números inteiros. Mostrar a soma dos elementos acima da diagonal principal. Um exemplo de números acima da diagonal principal é mostrado ao lado (no caso as células com fundo cinza). */

#include <iostream>

using namespace std;

int main()
{
  int n, soma;

  cout << "Qual o tamanho da matriz? ";
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

  soma = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      soma = soma + mat[i][j];
    }
  }

  cout << soma;
  return 0;
}