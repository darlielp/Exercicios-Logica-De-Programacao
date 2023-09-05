/* Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int n, quantidade, coelho, rato, sapo, totalCobaias;
  char tipoCobaia;
  double percentCoelho, percentRato, percentSapo;

  cout << "Quantos casos serao testados? ";
  cin >> n;

  coelho = 0;
  rato = 0;
  sapo = 0;
  totalCobaias = 0;

  for (int i = 0; i < n; i++)
  {
    cout << "Quantidade de cobaias: ";
    cin >> quantidade;
    cout << "Tipo de cobaia 'C' para coelho 'R' para rato e 'S' para sapo: ";
    cin >> tipoCobaia;

    if (tipoCobaia == 'C' || tipoCobaia == 'c')
    {
      coelho = coelho + quantidade;
    }
    else if (tipoCobaia == 'S' || tipoCobaia == 's')
    {
      sapo = sapo + quantidade;
    }
    else if (tipoCobaia == 'R' || tipoCobaia == 'r')
    {
      rato = rato + quantidade;
    }
    else
    {
      cout << "Nenhuma cobaia correspondente. " << endl;
    }
  }

  totalCobaias = rato + coelho + sapo;

  cout << "\nRelatorio final: " << endl;
  cout << "Total cobaias = " << totalCobaias << endl;
  cout << "Total de coelhos = " << coelho << endl;
  cout << "Total de sapos = " << sapo << endl;
  cout << "Total de ratos = " << rato << endl;

  percentCoelho = (double)(coelho * 100) / totalCobaias;
  percentSapo = (double)(sapo * 100) / totalCobaias;
  percentRato = (double)(rato * 100) / totalCobaias;

  cout << fixed << setprecision(2);
  cout << "Percentual de coelhos = " << percentCoelho << " % " << endl;
  cout << "Percentual de sapos = " << percentSapo << " % " << endl;
  cout << "Percentual de ratos = " << percentRato << " % " << endl;

  return 0;
}