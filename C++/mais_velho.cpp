/* Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome da pessoa mais velha. */

#include <iostream>

using namespace std;

int main()
{

  int n, idadeAtual;
  string pessoaMaisVelha;

  cout << "Quantas pessoas voce vai digitar? ";
  cin >> n;

  int idade[n];
  string nome[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Dados da " << i + 1 << "a pessoa:" << endl;
    cout << "Nome: ";
    cin >> nome[i];
    cout << "Idade: ";
    cin >> idade[i];
  }

  idadeAtual = 0;

  for (int i = 0; i < n; i++)
  {
    if (idade[i] > idadeAtual)
    {
      idadeAtual = idade[i];
      pessoaMaisVelha = nome[i];
    }
  }

  cout << "A pessoa mais velha e o " << pessoaMaisVelha << endl;
  return 0;
}