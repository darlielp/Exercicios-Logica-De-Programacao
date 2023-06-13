Algoritmo "comerciante"

// Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele
// comercializa. Para isto, mandou digitar um conjunto de N mercadorias, cada uma
// contendo nome, preço de compra e preço de venda das mesmas. Fazer um programa
// que leia tais dados e determine e escreva quantas mercadorias proporcionaram:
// - lucro < 10%
// - 10% >= lucro <= 20%
// - lucro > 20%
// Determine e escreva também o valor total de compra e de venda de todas as
// mercadorias, assim como o lucro total.

Var

   n, i, lucroBaixo, lucroMedio, lucroAlto : inteiro
   lucroTotal, somaCompra, somaVenda : real
   nomeVet: vetor [0..9] de caractere
   compraVet : vetor [0..9] de real
   vendaVet : vetor [0..9] de real
   lucroVet: vetor [0..9] de real

Inicio

      escreva("Serao digitados dados de quantos produtos? ")
      leia(n)
      
      para i de 0 ate n-1 faca
           escreval("Produto ", i+1)
           escreva("Nome: ")
           leia(nomeVet[i])
           escreva("Preco da compra: ")
           leia(compraVet[i])
           escreva("Preco da venda: ")
           leia(vendaVet[i])
      fimpara
      
      para i de 0 ate n-1 faca
           lucroVet[i] <- (vendaVet[i] - compraVet[i]) / compraVet[i] * 100
      fimpara
      
      lucroBaixo <- 0
      lucroMedio <- 0
      lucroAlto <- 0
      
      escreval
      escreval("Relatorio: ")
      para i de 0 ate n-1 faca
           se lucroVet[i] < 10 entao
              lucroBaixo <- lucroBaixo + 1
           senao
              se lucroVet[i] <= 20 entao
                 lucroMedio <- lucroMedio + 1
              senao
                 lucroAlto <- lucroAlto + 1
              fimse
           fimse
      fimpara
      
      escreval("Lucro abaixo de 10%: ", lucroBaixo)
      escreval("Lucro entre 10% e 20%: ", lucroMedio)
      escreval("Lucro maior que 20%: ", lucroAlto)
      
      somaCompra <- 0
      somaVenda <- 0
      
      para i de 0 ate n-1 faca
           somaCompra <- somaCompra + compraVet[i]
           somaVenda <- somaVenda + vendaVet[i]
      fimpara
      
      escreval("Valor total de compra: ", somaCompra:4:2)
      escreval("Valor total de venda: ", somaVenda:4:2)

      lucroTotal <- somaVenda - somaCompra
      
      escreval("Lucro total = ", lucroTotal:4:2)

Fimalgoritmo