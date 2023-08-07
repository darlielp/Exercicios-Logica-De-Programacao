#include <stdio.h>

/* Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida. Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, conforme exemplo */

int main()
{
  int n, x, dentro, fora;

  printf("Quantos numeros vai digitar?");
  scanf("%d", &n);

  dentro = 0;
  fora = 0;

  for (int i = 0; i < n; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &x);

    if (x >= 10 && x <= 20)
    {
      dentro = dentro + 1;
    }
    else
    {
      fora = fora + 1;
    }
  }

  printf("%d Dentro\n", dentro);
  printf("%d Fora\n", fora);

  return 0;
}