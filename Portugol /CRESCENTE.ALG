Algoritmo "crescente"

// Leia uma quantidade indeterminada de duplas de valores inteiros X e Y.
// Escreva para cada X e Y uma mensagem que indique se estes valores foram
// digitados em ordem crescente ou decrescente. O programa deve finalizar
// quando forem digitados dois valores iguais.

Var

   x, y : inteiro

Inicio

   escreval("Digite dois n�meros:")
   leia(x)
   leia(y)
   

   enquanto x <> y faca
   
      se x < y entao
         escreval("CRESCENTE")
      senao
         escreval("DECRESCENTE")
      fimse
      
      escreval("Digite outros dois n�meros:")
      leia(x)
      leia(y)
   
   fimenquanto


Fimalgoritmo