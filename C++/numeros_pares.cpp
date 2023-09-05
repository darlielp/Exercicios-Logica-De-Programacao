/* Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na tela todos os números pares, e também a quantidade de números pares. */

#include <iostream>

using namespace std;

int main()
{

  int n, contPares;

  cout << "Quantos numeros voce vai digitar? ";
  cin >> n;

  int vet[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Digite um numero: ";
    cin >> vet[i];
  }

  contPares = 0;

  cout << "Numeros pares: ";
  for (int i = 0; i < n; i++)
  {
    if (vet[i] % 2 == 0)
    {
      cout << vet[i] << " ";
      contPares++;
    }
  }

  cout << "\nQuantidade de pares = " << contPares << endl;

  return 0;
}