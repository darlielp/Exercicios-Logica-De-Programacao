#include <stdio.h>

/* Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas. */

int main()
{

  int horaInicio, horaFim, duracao;

  printf("Digite o horario inicial:");
  scanf("%d", &horaInicio);

  printf("Digite o horario final:");
  scanf("%d", &horaFim);

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

  printf("O jogo durou %d horas", duracao);

  return 0;
}