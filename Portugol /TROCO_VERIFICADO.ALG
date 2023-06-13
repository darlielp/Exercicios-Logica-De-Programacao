Algoritmo "troco_verificado"

// Fazer um programa para calcular o troco no processo de pagamento de um
// produto de uma mercearia. O programa deve ler o preço unitário do produto,
// a quantidade de unidades compradas deste produto, e o valor em dinheiro dado
// pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
// ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma
// mensagem informando o valor restante.

Var

   preco, troco, restante, dinheiro : real
   produto : inteiro

Inicio

      escreva("Preço unitário do produto:")
      leia(preco)
      escreva("Quantidade comprada:")
      leia(produto)
      escreva("Dinheiro recebido:")
      leia(dinheiro)
      
      preco <- preco * produto

      se dinheiro < preco entao
         restante <- preco - dinheiro
         escreval("Dinheiro insuficiente, faltam ", restante:4:2, " reais.")
      senao
         troco <- dinheiro - preco
         escreval("Troco = ", troco:4:2)
      fimse



Fimalgoritmo