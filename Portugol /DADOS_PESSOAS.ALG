Algoritmo "dados_pessoas"

// Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas.
// Fazer um programa que calcule e escreva a maior e a menor altura do grupo, a
// média de altura das mulheres, e o número de homens.

Var

   n, i, contF, contM: inteiro
   menorAltura, maiorAltura, generoF, media : real
   alturaVet : vetor [0..9] de real
   generoVet : vetor [0..9] de caractere

Inicio

      escreva("Quantas pessoas serao digitadas? ")
      leia(n)
      
      para i de 0 ate n-1 faca
          escreva("Altura da ", i+1,"a pessoa: ")
          leia(alturaVet[i])
          escreva("Genero da ", i+1,"a pessoa: ")
          leia(generoVet[i])
      fimpara
      
      maiorAltura <- alturaVet[0]
      menorAltura <- alturaVet[0]
      
      para i de 1 ate n-1 faca
          se alturaVet[i] > maiorAltura entao
             maiorAltura <- alturaVet[i]
          fimse
          
          se alturaVet[i] < menorAltura entao
              menorAltura <- alturaVet[i]
          fimse
      fimpara
      
      escreval("Menor Altura = ", menorAltura:3:2)
      escreval("Maior Altura = ", maiorAltura:3:2)
      
      generoF <- 0
      contF <- 0
      contM <- 0
      
      para i de 0 ate n-1 faca
           se generoVet[i] = "F" entao
              generoF <- generoF + alturaVet[i]
              contF <- contF + 1
           senao
              contM <- contM + 1
           fimse
      fimpara
      
      media <- generoF / contF
      
      escreval("Media das alturas das mulheres = ", media:3:2)
      escreval("Quantidade de homens = ", contM)
      


Fimalgoritmo
fimse