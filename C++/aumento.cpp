/* Uma empresa vai conceder um aumento percentual de salário aos seus funcionários dependendo de quanto 20% cada pessoa ganha, conforme tabela ao lado. Fazer um 15% programa para ler o salário de uma pessoa, daí mostrar qual o novo salário desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de aumento. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int porcentagem;
  double salario, novoSalario, aumento;

  cout << "Digite o salario da pessoa: ";
  cin >> salario;

  if (salario <= 1000)
  {
    porcentagem = 20;
  }
  else if (salario <= 3000)
  {
    porcentagem = 15;
  }
  else if (salario <= 8000)
  {
    porcentagem = 10;
  }
  else
  {
    porcentagem = 5;
  }

  aumento = (salario * porcentagem) / 100;
  novoSalario = salario + aumento;

  cout << fixed << setprecision(2);
  cout << "Porcentagem: " << porcentagem << "%" << endl;
  cout << "Aumento: R$ " << aumento << endl;
  cout << "Novo salario: R$ " << novoSalario << endl;

  return 0;
}