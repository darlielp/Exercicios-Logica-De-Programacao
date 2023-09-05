/* Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez, mostrar a mensagem "IMPOSSIVEL CALCULAR". */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int idade, cont;
  double media, soma;

  cout << "Digite as idades: " << endl;
  cin >> idade;
  soma = 0;
  cont = 0;

  while (idade > 0)
  {

    if (idade > 0)
    {
      soma = soma + idade;
      cont++;
    }

    cin >> idade;
  }

  media = soma / cont;

  if (cont > 0)
  {
    cout << fixed << setprecision(2);
    cout << "Media = " << media << endl;
  }
  else
  {
    cout << "Impossivel calcular" << endl;
  }

  return 0;
}