#include <stdio.h>

/* Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
a) a área do quadrado que tem lado A
b) a área do triângulo retângulo que base A e altura B
c) a área do trapézio que tem bases A e B, e altura C  */

int main()
{

  double medidaA, medidaB, medidaC, quadrado, triangulo, trapezio;

  printf("Digite a medida A: ");
  scanf("%lf", &medidaA);

  printf("Digite a medida B: ");
  scanf("%lf", &medidaB);

  printf("Digite a medida C: ");
  scanf("%lf", &medidaC);

  quadrado = medidaA * medidaA;
  triangulo = (medidaA * medidaB) / 2;
  trapezio = ((medidaA + medidaB) / 2) * medidaC;

  printf("Area do quadrado = %.4lf\n", quadrado);
  printf("Area do triangulo = %.4lf\n", triangulo);
  printf("Area do trapezio = %.4lf\n", trapezio);

  return 0;
}