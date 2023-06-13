Algoritmo "soma_impares"

// Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e
// mostre a soma dos números impares entre eles.

Var

   x, y, z, i, soma : inteiro

Inicio

      escreval("Digite dois numeros: ")
      leia(x)
      leia(y)
      
      se x > y entao
         z <- x
         x <- y
         y <- z
      fimse
      
      soma <- 0

      para i de x+1 ate y-1 faca

         se i % 2 <> 0 entao
            soma <- soma + i
         fimse

      fimpara
      
      escreval("SOMA DOS IMPARES = ", soma)


Fimalgoritmo