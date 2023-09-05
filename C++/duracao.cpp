/* Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no formato horas:minutos:segundos. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int horas, segundos, minutos, resto;

  cout << "Digite a duracao em segundos: ";
  cin >> segundos;

  horas = segundos / 3600;
  resto = segundos % 3600;
  minutos = resto / 60;
  segundos = resto % 60;

  cout << horas << ":" << minutos << ":" << segundos << endl;

  return 0;
}