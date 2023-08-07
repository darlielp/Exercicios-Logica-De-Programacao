#include <stdio.h>

/* Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta é o valor 2002. */

int main()
{

  int senha;

  printf("Digite a senha: ");
  scanf("%d", &senha);

  while (senha != 2002)
  {
    printf("Senha invalida! Tente novamente: ");
    scanf("%d", &senha);
  }

  printf("Acesso permitido!");

  return 0;
}