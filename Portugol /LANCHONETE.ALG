Algoritmo "lanchonete"

// Uma lanchonete possui v�rios produtos. Cada produto possui um c�digo
// e um pre�o. Voc� deve fazer um programa para ler o c�digo e a
// quantidade comprada de um produto (suponha um c�digo v�lido), e da�
// informar qual o valor a ser pago, com duas casas decimais.

Var

    codigoDoProduto, quantidadeComprada : inteiro
    valor, precoDoProduto : real

Inicio

      escreva("Codigo do produto comprado: ")
      leia(codigoDoProduto)
      escreva("Quantidade comprada: ")
      leia(quantidadeComprada)
      
      escolha codigoDoProduto
      caso 1
         precoDoProduto <- 5.00
      caso 2
         precoDoProduto <- 3.50
      caso 3
         precoDoProduto <- 4.80
      caso 4
         precoDoProduto <- 8.90
      caso 5
         precoDoProduto <- 7.32
      outrocaso
         precoDoProduto <- 9.00
      fimescolha
      
      valor <- quantidadeComprada * precoDoProduto
      
      escreval("Valor a pagar = R$ ", valor:4:2)
      
      


Fimalgoritmo