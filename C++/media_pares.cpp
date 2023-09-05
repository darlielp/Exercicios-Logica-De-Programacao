/* Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for digitado, mostrar a mensagem "NENHUM NUMERO PAR" */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int n, soma, paresCont;
  double media;
  cout << "Quantos elementos vai ter o vetor? ";
  cin >> n;

  int vet[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Digite um numero: ";
    cin >> vet[i];
  }

  soma = 0;
  paresCont = 0;

  for (int i = 0; i < n; i++)
  {
    if (vet[i] % 2 == 0)
    {
      soma = soma + vet[i];
      paresCont++;
    }
  }

  media = (double)soma / paresCont;

  if (paresCont == 0)
  {
    cout << "Nenhum numero par." << endl;
  }
  else
  {
    cout << fixed << setprecision(1);
    cout << "Media dos pares = " << media << endl;
  }

  return 0;
}