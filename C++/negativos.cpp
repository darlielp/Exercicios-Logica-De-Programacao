/* Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos. */

#include <iostream>

using namespace std;

int main()
{

  int n;

  cout << "Quantos numeros voce vai digitar? ";
  cin >> n;

  int vet[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Digite um numero: ";
    cin >> vet[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (vet[i] < 0)
    {
      cout << vet[i] << endl;
    }
  }

  return 0;
}