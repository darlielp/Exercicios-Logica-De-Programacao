#include <stdio.h>

/* Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
mensagem "REPROVADO", conforme exemplos. */

int main()
{

  double nota1, nota2, notaFinal;

  printf("Digite a primeira nota: ");
  scanf("%lf", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%lf", &nota2);

  notaFinal = nota1 + nota2;

  if (notaFinal > 60)
  {
    printf("Notal final = %.1lf\n", notaFinal);
  }
  else
  {
    printf("Reprovado\n");
  }

  return 0;
}