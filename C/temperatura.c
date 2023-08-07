#include <stdio.h>
#include <string.h>

/* Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com
duas casas decimais. A seguir é dada a fórmula para converter de Fahrenheit para Celsius (você deve
deduzir a fórmula de Celsius para Fahrenheit): C = 5/9 (F -32) */

int main()
{

  double fahren, celsius;
  char escala[1];

  printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
  gets(escala);

  if (strcmp(escala, "F") == 0)
  {
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &fahren);
    celsius = (fahren - 32) * 5 / 9;
    printf("Temperatura equivalente em Celsius: %.2lf\n", celsius);
  }
  else if (strcmp(escala, "C") == 0)
  {
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);
    fahren = (celsius * 1.8) + 32;
    printf("Temperatura equivalente em Fahrenheit: %.2lf\n", fahren);
  }
  else
  {
    printf("Nenhuma escala correspondente selecionada.\n");
  }

  return 0;
}