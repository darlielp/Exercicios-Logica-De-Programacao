/* Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida, mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos os elementos do vetor que estejam abaixo da média, com uma casa decimal cada. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int n;
  double soma, media;

  cout << "Quantos elementos vai ter o vetor? ";
  cin >> n;

  double vet[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Digite um numero: ";
    cin >> vet[i];

    soma = soma + vet[i];
  }

  media = soma / 4;

  cout << fixed << setprecision(3);
  cout << "Media do vetor = " << media << endl;
  cout << fixed << setprecision(1);
  cout << "Elementos abaixo da media:" << endl;

  for (int i = 0; i < n; i++)
  {
    if (vet[i] < media)
    {
      cout << vet[i] << endl;
    }
  }

  return 0;
}