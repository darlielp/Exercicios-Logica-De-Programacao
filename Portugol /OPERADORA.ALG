Algoritmo "operadora"

// Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito
// a 100 minutos de telefone. Cada minuto que exceder a franquia de 100 minutos
// custa R$ 2.00. Fazer um programa paraler a quantidade de minutos que uma
// pessoa consumiu, daí mostrar o valor a ser pago.

Var

     minutos : inteiro
     pagamento : real

Inicio

      escreva("Digite a quantidade de minutos:")
      leia(minutos)
      
      se minutos < 100 entao
         pagamento <- 50
      senao
         pagamento <- 50 + (minutos % 50) * 2
      fimse
      
      escreval("Valor a pagar = R$ ", pagamento:4:2)
      

Fimalgoritmo