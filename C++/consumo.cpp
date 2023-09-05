/* Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo médio do carro, com três casas decimais. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  double distanciaPercorrida, combustivelGasto, consumoMedio;

  cout << "Distancia percorrida: ";
  cin >> distanciaPercorrida;

  cout << "Combustivel gasto: ";
  cin >> combustivelGasto;

  consumoMedio = distanciaPercorrida / combustivelGasto;

  cout << fixed << setprecision(3);
  cout << "Consumo medio = " << consumoMedio;

  return 0;
}