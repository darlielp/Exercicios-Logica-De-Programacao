/* Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas. */

#include <iostream>

using namespace std;

int main()
{
  int horaInicio, horaFim, duracao;

  cout << "Hora inicial: ";
  cin >> horaInicio;

  cout << "Hora final: ";
  cin >> horaFim;

  if ((horaInicio > horaFim) && (horaInicio >= 1) && (horaFim <= 24))
  {
    duracao = 24 % (horaInicio - horaFim);
  }
  else if ((horaInicio < horaFim) && (horaInicio >= 1) && (horaFim <= 24))
  {
    duracao = horaFim - horaInicio;
  }
  else
  {
    duracao = 24;
  };

  cout << "O jogo durou " << duracao << " hora(s)." << endl;

  return 0;
}