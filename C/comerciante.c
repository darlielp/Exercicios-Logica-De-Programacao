#include <stdio.h>
#include <string.h>

/* Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto, mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias proporcionaram:
- lucro < 10%
- 10% ≤ lucro ≤ 20%
- lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como o lucro total. */

int main()
{
  int n, lucroBaixo, lucroMedio, lucroAlto;
  double lucroTotal, somaCompra, somaVenda;

  printf("Serao digitados dados de quantos produtos? ");
  scanf("%d", &n);

  char produto[n][50];
  double precoCompra[n], precoVenda[n], lucro[n];

  for (int i = 0; i < n; i++)
  {
    printf("Produto %d\n", i + 1);
    printf("Nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(produto[i]);
    printf("Preco de compra: ");
    scanf("%lf", &precoCompra[i]);
    printf("Preco de venda: ");
    scanf("%lf", &precoVenda[i]);
  }

  for (int i = 0; i < n; i++)
  {
    lucro[i] = (precoVenda[i] - precoCompra[i]) / precoCompra[i] * 100;
  }

  lucroBaixo = 0;
  lucroMedio = 0;
  lucroAlto = 0;

  printf("\nRelatorio:\n");
  for (int i = 0; i < n; i++)
  {
    if (lucro[i] < 10)
    {
      lucroBaixo++;
    }
    else if (lucro[i] <= 20)
    {
      lucroMedio++;
    }
    else
    {
      lucroAlto++;
    }
  }

  printf("Lucro abaixo de 10%%: %d\n", lucroBaixo);
  printf("Lucro entre 10%% e 20%%: %d\n", lucroMedio);
  printf("Lucro acima de 20%%: %d\n", lucroAlto);

  somaCompra = 0;
  somaVenda = 0;

  for (int i = 0; i < n; i++)
  {
    somaCompra = somaCompra + precoCompra[i];
    somaVenda = somaVenda + precoVenda[i];
  }

  printf("\nValor total da compra = %.2lf\n", somaCompra);
  printf("Valor total da venda = %.2lf\n", somaVenda);

  lucroTotal = somaVenda - somaCompra;

  printf("Lucro total = %.2lf\n", lucroTotal);
  return 0;
}