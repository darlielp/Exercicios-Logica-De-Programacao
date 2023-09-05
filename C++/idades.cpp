/* Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo. */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

  int idade1, idade2;
  double media;
  string nome1, nome2;

  cout << "Digite os dados da primeira pessoa: " << endl;
  cout << "Nome: ";
  getline(cin, nome1);
  cout << "Idade: ";
  cin >> idade1;

  cin.ignore();

  cout << "\nDigite os dados da segunda pessoa: " << endl;
  cout << "Nome: ";
  getline(cin, nome2);
  cout << "Idade: ";
  cin >> idade2;

  media = double(idade1 + idade2) / 2;

  cout << fixed << setprecision(1);
  cout << "A idade media entre " << nome1 << " e " << nome2 << " e de " << media << " anos." << endl;
  return 0;
}