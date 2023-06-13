Algoritmo "glicose"

// Fazer um programa para ler a quantidade de glicose no sangue de uma pessoa
// e depois mostrar na tela a classificação desta glicose.

Var

  medida : real
  classificacao : caractere

Inicio

      escreva("Digite a medida da glicose:")
      leia(medida)
      
      se medida <= 100 entao
         classificacao <- "Normal"
      senao
         se (medida > 100) e (medida <= 140) entao
            classificacao <- "Elevado"
         senao
            classificacao <- "Diabetes"
         fimse
      fimse
      
      escreval("Classificação:", classificacao)

Fimalgoritmo