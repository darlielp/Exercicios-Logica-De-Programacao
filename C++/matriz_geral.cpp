/* Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna. d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir a matriz alterada. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int n, linha, coluna;
  double soma;

  cout << "Qual o tamanho da matriz? ";
  cin >> n;

  double mat[n][n];

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
    for (int j = 0; j < n; j++)
    {
      if (mat[i][j] > 0)
      {
        soma = soma + mat[i][j];
      }
    }
  }

  cout << endl;
  cout << fixed << setprecision(1);
  cout << "Soma dos positivos = " << soma << endl;

  cout << endl;
  cout << "Escolha uma linha: ";
  cin >> linha;

  cout << "Linha escolhida: ";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == linha)
      {
        cout << mat[i][j] << " ";
      }
    }
  }

  cout << endl;
  cout << "\nEscolha uma coluna: ";
  cin >> coluna;

  cout << "Coluna escolhida: ";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (j == coluna)
      {
        cout << mat[i][j] << " ";
      }
    }
  }

  cout << endl;
  cout << "\nDiagonal principal: ";
  for (int i = 0; i < n; i++)
  {
    cout << mat[i][i] << " ";
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (mat[i][j] < 0)
      {
        mat[i][j] = mat[i][j] * mat[i][j];
      }
    }
  }

  cout << endl;
  cout << "\nMatriz alterada: " << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}