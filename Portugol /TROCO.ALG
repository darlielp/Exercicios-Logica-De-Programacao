Algoritmo "troco"

// Fazer um programa para calcular o troco no processo de pagamento de um
// produto de uma mercearia. O programa deve ler o pre�o unit�rio do produto,
// a quantidade de unidades compradas deste produto, e o valor em dinheiro
// dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
// mostrar o valor do troco a ser devolvido ao cliente.

Var

   precoUnitario, troco, dinheiroRecebido : real
   quantidade : inteiro


Inicio

      escreva("Pre�o unit�rio do produto:")
      leia(precoUnitario)
      escreva("Quantidade comprada:")
      leia(quantidade)
      escreva("Dinheiro recebido:")
      leia(dinheiroRecebido)
      
      troco <- dinheiroRecebido - (precoUnitario * quantidade)
      
      escreval("Troco =", troco:8:2)


Fimalgoritmo