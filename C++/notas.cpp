/* Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a mensagem "REPROVADO", conforme exemplos. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  double nota1, nota2, notaFinal;

  cout << "Digite a primeira nota: ";
  cin >> nota1;

  cout << "Digite a segunda nota: ";
  cin >> nota2;

  notaFinal = nota1 + nota2;

  if (notaFinal >= 60)
  {
    cout << fixed << setprecision(1);
    cout << notaFinal << endl;
  }
  else
  {
    cout << fixed << setprecision(1);
    cout << notaFinal << endl;
    cout << "Reprovado" << endl;
  }

  return 0;
}