/* Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto, mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias proporcionaram:
- lucro < 10%
- 10% ≤ lucro ≤ 20%
- lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como o lucro total. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int n, lucroBaixo, lucroMedio, lucroAlto;
  double lucroTotal, somaCompra, somaVenda;

  cout << "Quantos produtos serao digitados? ";
  cin >> n;

  double precoDeCompra[n], precoDeVenda[n], lucro[n];
  string nome[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Produto " << i + 1 << endl;
    cout << "Nome: ";
    cin >> nome[i];
    cout << "Preco de compra: ";
    cin >> precoDeCompra[i];
    cout << "Preco de venda: ";
    cin >> precoDeVenda[i];
  }

  for (int i = 0; i < n; i++)
  {
    lucro[i] = (precoDeVenda[i] - precoDeCompra[i]) / precoDeCompra[i] * 100;
  }

  lucroBaixo = 0;
  lucroMedio = 0;
  lucroAlto = 0;

  cout << "Relatorio: " << endl;

  for (int i = 0; i < n; i++)
  {
    if (lucro[i] < 10)
    {
      lucroBaixo++;
    }
    else if (lucro[i] <= 20)
    {
      lucroMedio++;
    }
    else
    {
      lucroAlto++;
    }
  }

  cout << "Lucro abaixo de 10% = " << lucroBaixo << endl;
  cout << "Lucro entre 10% "
       << "e 20% = " << lucroMedio << endl;
  cout << "Lucro acima de 20% = " << lucroAlto << endl;

  somaCompra = 0;
  somaVenda = 0;

  for (int i = 0; i < n; i++)
  {
    somaVenda = somaVenda + precoDeVenda[i];
    somaCompra = somaCompra + precoDeCompra[i];
  }

  lucroTotal = somaVenda - somaCompra;

  cout << fixed << setprecision(2);
  cout << "Valor total da compra = " << somaCompra << endl;
  cout << "Valor total da venda = " << somaVenda << endl;
  cout << "Lucro total = " << lucroTotal << endl;

  return 0;
}
