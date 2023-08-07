#include <stdio.h>
#include <math.h>

/* Uma empresa vai conceder um aumento percentual de salário aos seus funcionários dependendo de quanto 20% cada pessoa ganha, conforme tabela ao lado. Fazer um 15% programa para ler o salário de uma pessoa, daí mostrar qual o novo salário desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de aumento. */

int main()
{

  double salarioPessoa, novoSalario, aumento;
  int porcentagem;

  printf("Digite o salário da pessoa: ");
  scanf("%lf", &salarioPessoa);

  if (salarioPessoa < 1000)
  {
    porcentagem = 20;
  }
  else if (salarioPessoa < 3000)
  {
    porcentagem = 15;
  }
  else if (salarioPessoa <= 8000)
  {
    porcentagem = 10;
  }
  else
  {
    porcentagem = 5;
  };

  aumento = (salarioPessoa * porcentagem) / 100;
  novoSalario = salarioPessoa + aumento;

  printf("Novo salário = %.2lf R$\n", novoSalario);
  printf("Aumento = %.2lf R$\n", aumento);
  printf("Porcentagem = %d\n", porcentagem);
  return 0;
}