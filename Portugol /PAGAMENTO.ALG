Algoritmo "pagamento"

// Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a)
// recebe por hora, e a quantidade de horas trabalhadas por ele(a). Ao final,
// mostrar o valor do pagamento do funcionário com uma mensagem explicativa.

Var

   nome : caractere
   valorHora, pagamento : real
   trabalhoHora : inteiro

Inicio

      escreva("Nome:")
      leia(nome)
      escreva("Valor por hora:")
      leia(valorHora)
      escreva("Horas trabalhadas:")
      leia(trabalhoHora)
      
      pagamento <- valorHora * trabalhoHora
      
      escreval("O pagamento para ", nome, " deve ser ", pagamento:8:2)

Fimalgoritmo