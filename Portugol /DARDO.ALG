Algoritmo "dardo"

// No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior
// distância que conseguir. Você deve criar um programa para, dadas as medidas
// das três tentativas de lançamento, informar qual foi a maior.

Var

   distancia1, distancia2, distancia3, maiorDistancia : real


Inicio

      escreval("Digite as tres distancias:")
      leia(distancia1)
      leia(distancia2)
      leia(distancia3)
      
      se (distancia1 > distancia2) e (distancia1 > distancia3) entao
         maiorDistancia <- distancia1
      senao
         se distancia2 > distancia3 entao
            maiorDistancia <- distancia2
         senao
            maiorDistancia <- distancia3
         fimse
      fimse
         
      escreval("Maior distancia = ", maiorDistancia:5:2)

Fimalgoritmo