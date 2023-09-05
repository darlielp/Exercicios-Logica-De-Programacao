/* Fazer um programa para ler a quantidade de glicose no sangue de uma pessoa e depois mostrar na tela a classificação desta glicose de acordo com a tabela de referência ao lado. */

#include <iostream>

using namespace std;

int main()
{
  double glicose;
  string classificacao;

  cout << "Digite a medida da glicose: ";
  cin >> glicose;

  if (glicose <= 100)
  {
    classificacao = "Normal";
  }
  else if (glicose <= 140)
  {
    classificacao = "Elevado";
  }
  else
  {
    classificacao = "Diabetes";
  }

  cout << "Classificacao: " << classificacao << endl;

  return 0;
}
