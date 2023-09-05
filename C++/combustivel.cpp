/* Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem como as quantidades de cada combustível. */

#include <iostream>

using namespace std;

int main()
{

  int codigo, alcool, gasolina, diesel;

  cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
  cin >> codigo;

  alcool = 0;
  gasolina = 0;
  diesel = 0;

  while (codigo != 4)
  {
    switch (codigo)
    {
    case 1:
      alcool++;
      break;
    case 2:
      gasolina++;
      break;
    case 3:
      diesel++;
      break;
    }

    cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
    cin >> codigo;
  }

  cout << "Muito obrigado!" << endl;
  cout << "Alcool = " << alcool << endl;
  cout << "Gasolina = " << gasolina << endl;
  cout << "Diesel = " << diesel << endl;

  return 0;
}