/* Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida, o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com duas casas decimais, conforme exemplo. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double largura, comprimento, valor, area, preco;

  cout << "Digite a largura do terreno: ";
  cin >> largura;
  cout << "Digite o comprimento do terreno: ";
  cin >> comprimento;
  cout << "Digite o valor do metro quadrado: ";
  cin >> valor;

  area = largura * comprimento;
  preco = area * valor;

  cout << fixed << setprecision(2);
  cout << "Area do terreno = " << area << endl;
  cout << "Preco do terreno = " << preco << endl;

  return 0;
}