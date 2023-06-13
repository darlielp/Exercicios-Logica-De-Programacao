Algoritmo "aprovados"

// Fazer um programa para ler um conjunto de N nomes de alunos, bem como as
// notas que eles tiraram no 1º e 2º semestres. Cada uma dessas informações deve
// ser armazenada em um vetor. Depois, imprimir os nomes dos alunos aprovados,
// considerando aprovados aqueles cuja média das notas seja maior ou igual a
// 6.0 (seis).

Var

   n, i : inteiro
   nomeVet : vetor [0..9] de caractere
   primeiroVet : vetor [0..9] de real
   segundoVet : vetor [0..9] de real
   notaVet : vetor [0..9] de real

Inicio

      escreva("Quantos alunos serao digitados? ")
      leia(n)
      
      para i de 0 ate n-1 faca
         escreval("Digite nome, primeira e segunda nota do ",i+1,"o aluno:")
         escreva("Nome do aluno: ")
         leia(nomeVet[i])
         escreva("Primeira nota: ")
         leia(primeiroVet[i])
         escreva("Segunda nota: ")
         leia(segundoVet[i])
      fimpara
      
      para i de 0 ate n-1 faca
          notaVet[i] <- (primeiroVet[i] + segundoVet[i]) / 2
      fimpara
      
      escreval("Alunos aprovados: ")
      para i de 0 ate n-1 faca
           se notaVet[i] >= 6.0 entao
              escreval(nomeVet[i])
           fimse
      fimpara

Fimalgoritmo