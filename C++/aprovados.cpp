/* Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram no 1o e 2o semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou igual a 6.0 (seis). */

#include <iostream>

using namespace std;

int main()
{

  int n;

  cout << "Quantos alunos serao digitados? ";
  cin >> n;
  cin.ignore();

  double nota1[n], nota2[n], media[n];
  string nome[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Digite nome, primeira e segunda nota do " << i + 1 << "o aluno:" << endl;
    cout << "Nome: ";
    getline(cin, nome[i]);
    cout << "Nota 1: ";
    cin >> nota1[i];
    cout << "Nota 2: ";
    cin >> nota2[i];
    cin.ignore();
  }

  for (int i = 0; i < n; i++)
  {
    media[i] = (nota1[i] + nota2[i]) / 2;
  }

  cout << "\nAlunos aprovados: " << endl;
  for (int i = 0; i < n; i++)
  {
    if (media[i] >= 6.0)
    {
      cout << nome[i] << endl;
    }
  }

  return 0;
}