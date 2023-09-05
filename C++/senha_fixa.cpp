/* Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta é o valor 2002. */

#include <iostream>

using namespace std;

int main()
{

  int senha;

  cout << "Digite a senha: ";
  cin >> senha;

  while (senha != 2002)
  {
    cout << "Senha invalida! Tente novamente: ";
    cin >> senha;
  }

  cout << "Acesso permitido!" << endl;

  return 0;
}