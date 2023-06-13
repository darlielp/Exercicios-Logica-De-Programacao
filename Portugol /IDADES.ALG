Algoritmo "idades"

// Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar
// uma mensagem com os nomes e a idade média entre essas pessoas, com uma casa
// decimal.

Var
     nome1, nome2 : caracter
     idade1, idade2 : inteiro
     idadeMedia : real

Inicio

      escreval("Dados da primeira pessoa:")
      escreva("Nome:")
      leia(nome1)
      escreva("Idade:")
      leia(idade1)
      
      escreval("Dados da segunda pessoa:")
      escreva("Nome:")
      leia(nome2)
      escreva("Idade:")
      leia(idade2)
      
      idadeMedia <- (idade1 + idade2) / 2
      
      
      escreval("A idade média de ", nome1, " e ", nome2, " é de ", idadeMedia, " anos.")

Fimalgoritmo