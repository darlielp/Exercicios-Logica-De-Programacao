/* Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com duas casas decimais. A seguir é dada a fórmula para converter de Fahrenheit para Celsius (você deve deduzir a fórmula de Celsius para Fahrenheit): C = 9 / 5 (F - 32) */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  double F, C;
  char escala;

  cout << "Voce vai digitar a temperatura em qual escala 'C' para Celsius 'F' para Fahrenheit: ";
  cin >> escala;

  if (escala == 'C' || escala == 'c')
  {
    cout << "Digite a temperatura em celsius: ";
    cin >> C;
    F = (C * 1.8) + 32;
    cout << fixed << setprecision(2);
    cout << "Temperatura equivalente em Fahrenheit: " << F << endl;
  }
  else if (escala == 'F' || escala == 'f')
  {
    cout << "Digite a temperatura em fahrenheit: ";
    cin >> F;
    C = (F - 32) * 5 / 9;
    cout << fixed << setprecision(2);
    cout << "Temperatura equivalente em Celsius: " << C << endl;
  }
  else
  {
    cout << "Nenhuma escala correspondente foi selecionada." << endl;
  }

  return 0;
}