#include <stdio.h>

/* No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
foi a maior. */

int main()
{

  double distancia1, distancia2, distancia3, maiorDistancia;

  printf("Digite as tres distancias: \n");
  scanf("%lf", &distancia1);
  scanf("%lf", &distancia2);
  scanf("%lf", &distancia3);

  if (distancia1 > distancia2 && distancia1 > distancia3)
  {
    maiorDistancia = distancia1;
  }
  else if (distancia2 > distancia3)
  {
    maiorDistancia = distancia2;
  }
  else
  {
    maiorDistancia = distancia3;
  }

  printf("A maior distancia e = %.2lf\n", maiorDistancia);

  return 0;
}