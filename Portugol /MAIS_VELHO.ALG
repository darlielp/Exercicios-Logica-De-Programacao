Algoritmo "mais_velho"

// Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas
// idades. Os nomes devem ser armazenados em um vetor, e as idades em um outro
// vetor. Depois, mostrar na tela o nome da pessoa mais velha.

Var

   nome : caractere
   n, i, idade : inteiro
   nomeVet : vetor [0..9] de caractere
   idadeVet : vetor [0..9] de inteiro

Inicio

      escreva("Quantas pessoas deseja adicionar? ")
      leia(n)
      
      para i de 0 ate n-1 faca
         escreval("Dados da ", i+1,"a pessoa:")
         escreva("Nome: ")
         leia(nomeVet[i])
         escreva("Idade: ")
         leia(idadeVet[i])
      fimpara
      
      idade <- 0
      
      para i de 0 ate n-1 faca
         se idadeVet[i] > idade entao
            idade <- idadeVet[i]
            nome <- nomeVet[i]
         fimse
      fimpara
      
      escreval("A pessoa mais velha e o(a): ", nome)

Fimalgoritmo