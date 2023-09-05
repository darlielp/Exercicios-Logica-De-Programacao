/* Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento, considerando a primeira posição como 0 (zero). */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int n, posicao;
  double maiorValor;

  cout << "Quantos numeros voce vai digitar? ";
  cin >> n;

  double vet[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Digite um numero: ";
    cin >> vet[i];
  }

  posicao = 0;
  maiorValor = 0;

  for (int i = 0; i < n; i++)
  {
    if (vet[i] > maiorValor)
    {
      maiorValor = vet[i];
      posicao++;
    }
  }
  cout << fixed << setprecision(1);
  cout << "Maior valor = " << maiorValor << endl;
  cout << "Posicao = " << posicao << endl;

  return 0;
}