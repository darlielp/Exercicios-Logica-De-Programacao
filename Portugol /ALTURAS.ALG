Algoritmo "alturas"

// Fazer um programa para ler nome, idade e altura de N pessoas. Depois, mostrar
// na tela a altura média das pessoas, e mostrar também a porcentagem de pessoas
// com menos de 16 anos, bem como os nomes dessas pessoas caso houver.

Var

   nomes : caractere
   n, i : inteiro
   alturaMedia, porcentagem, soma: real
   
   nomeVet : vetor [0..9] de caractere
   idadeVet : vetor [0..9] de inteiro
   alturaVet : vetor [0..9] de real

Inicio

      escreva("Quantas pessoas serao digitadas? ")
      leia(n)
      
      escreval
      para i de 0 ate n - 1 faca
      
         escreval("Dados da ", i+1,"a pessoa: ")
         escreva("Nome: ")
         leia(nomeVet[i])
         escreva("Idade: ")
         leia(idadeVet[i])
         escreva("Altura: ")
         leia(alturaVet[i])
         escreval
         
      fimpara
      
      soma <- 0
      porcentagem <- 0
      
      para i de 0 ate n - 1 faca
         soma <- soma + alturaVet[i]
         
         se idadeVet[i] < 16 entao
            porcentagem <- porcentagem + 1
         fimse
      fimpara
      
      alturaMedia <- soma / n
      escreval("Altura média = ", alturaMedia:4:2)
      porcentagem <- porcentagem * 100 / n
      escreval("Porcentagem de pessoas com menos de 16 anos: ", porcentagem:4:1, "%")
      escreval("Nome das pessoas com menos de 16 anos: ")
      
      para i de 0 ate n - 1 faca
           se idadeVet[i] < 16 entao
              escreval(nomeVet[i])
           fimse
      fimpara
      
      
      
Fimalgoritmo