/* Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima o vetor C gerado. */

#include <iostream>

using namespace std;

int main()
{

  int n;

  cout << "Quantos valores vai ter cada vetor? ";
  cin >> n;

  int vetA[n];
  int vetB[n];
  int vetC[n];

  cout << "Digite os valores do vetor A:" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> vetA[i];
  }

  cout << "Digite os valores do vetor B:" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> vetB[i];
  }

  for (int i = 0; i < n; i++)
  {
    vetC[i] = vetA[i] + vetB[i];
  }

  cout << "Resultado da soma dos vetores:" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << vetC[i] << endl;
  }

  return 0;
}