#include <stdio.h>

/* Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
formato horas:minutos:segundos. */

int main()
{

  int horas, minutos, segundos, resto;

  printf("Digite a duracao em segundos: ");
  scanf("%d", &segundos);

  horas = segundos / 3600;
  resto = segundos % 3600;
  minutos = resto / 60;
  segundos = resto * 60;

  printf("%d:%d:%d\n", horas, minutos, segundos);

  return 0;
}