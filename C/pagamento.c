#include <stdio.h>

/* Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
uma mensagem explicativa.  */

int main()
{

  int horasTrabalhadas;
  double valorHora, pagamento;
  char nome[50];

  printf("Nome: ");
  gets(nome);

  printf("Valor por hora: ");
  scanf("%lf", &valorHora);

  printf("Horas trabalhadas: ");
  scanf("%d", &horasTrabalhadas);

  pagamento = valorHora * horasTrabalhadas;

  printf("O pagamento para %s deve ser %.2lf R$\n", nome, pagamento);

  return 0;
}