Algoritmo "media_pares"

// Fazer um programa para ler um vetor de N números inteiros. Em seguida,
// mostrar na tela a média aritmética somente dos números pares lidos, com uma
// casa decimal. Se nenhum número par for digitado, mostrar a mensagem
// "NENHUM NUMERO PAR"

Var

   n, i, soma, cont : inteiro
   media : real
   vet : vetor [0..9] de inteiro

Inicio

      escreva("Quantos numeros vai ter o vetor?" )
      leia(n)
      
      para i de 0 ate n-1 faca
         escreva("Digite os numeros do vetor: ")
         leia(vet[i])
      fimpara
      
      soma <- 0
      cont <- 0
      
      para i de 0 ate n-1 faca
         se vet[i] % 2 = 0 entao
            soma <- soma + vet[i]
            cont <- cont + 1
         fimse
      fimpara
      
      se cont = 0 entao
         escreval("Nenhum numero par")
      senao
         media <- soma / cont
         escreval("A media dos pare e = ", media:3:1)
      fimse
      
Fimalgoritmo