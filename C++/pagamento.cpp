/* Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com uma mensagem explicativa, conforme exemplo. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int horasTrabalhadas;
  double valorHora, valorPagamento;
  string nome;

  cout << "Nome: ";
  getline(cin, nome);

  cout << "Valor por hora: ";
  cin >> valorHora;

  cout << "Horas trabalhadas: ";
  cin >> horasTrabalhadas;

  valorPagamento = valorHora * horasTrabalhadas;

  cout << fixed << setprecision(2);
  cout << "O pagamento para " << nome << " deve ser de " << valorPagamento << " R$" << endl;

  return 0;
}