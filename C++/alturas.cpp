/* Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos, bem como os nomes dessas pessoas caso houver. */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  int n;
  double soma, percentIdade, alturaMedia;

  cout << "Quantas pessoas serao digitadas? ";
  cin >> n;
  cin.ignore();

  int idade[n];
  double altura[n];
  string nome[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Dados da " << i + 1 << "a pessoa: " << endl;
    cout << "Nome: ";
    cin >> nome[i];
    cout << "Altura: ";
    cin >> altura[i];
    cout << "Idade: ";
    cin >> idade[i];
    cin.ignore();
  }

  soma = 0;
  percentIdade = 0;

  for (int i = 0; i < n; i++)
  {
    soma = soma + altura[i];
    if (idade[i] < 16)
    {
      percentIdade++;
    }
  }

  alturaMedia = soma / n;
  cout << fixed << setprecision(2);
  cout << "Altura media = " << alturaMedia << endl;
  percentIdade = percentIdade * 100 / n;
  cout << "Pessoas com menos de 16 anos = " << percentIdade << " %" << endl;

  for (int i = 0; i < n; i++)
  {
    if (idade[i] < 16)
    {
      cout << nome[i] << endl;
    }
  }

  return 0;
}