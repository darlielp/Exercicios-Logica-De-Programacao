/* Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int n;
  double soma, media;

  cout << "Quantos numeros voce vai digitar? ";
  cin >> n;

  double vet[n];
  soma = 0;

  for (int i = 0; i < n; i++)
  {
    cout << "Digite um numero: ";
    cin >> vet[i];

    soma = soma + vet[i];
  }

  cout << fixed << setprecision(2);
  cout << "Valores = ";
  for (int i = 0; i < n; i++)
  {
    cout << vet[i] << " ";
  }

  media = soma / n;
  cout << "\nSoma = " << soma << endl;
  cout << "Media = " << media << endl;
  return 0;
}