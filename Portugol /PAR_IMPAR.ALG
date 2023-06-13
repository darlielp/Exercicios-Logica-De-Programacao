Algoritmo "par_impar"

// Leia um valor inteiro N. Este valor será a quantidade de números inteiros
// que serão lidos em seguida. Para cada valor lido, mostre uma mensagem dizendo
// se este valor lido é PAR ou IMPAR, e também se é POSITIVO ou NEGATIVO. No
// caso do valor ser igual a zero (0), seu programa deverá imprimir apenas NULO.

Var

   n, x, i : inteiro

Inicio

      escreva("Quantos numeros você vai digitar? ")
      leia(n)
      
      para i de x+1 ate n faca
        escreva("Digite um numero: ")
        leia(x)
        
        se x = 0 entao
           escreval("Nulo")
        senao
           se (x > 0) e (x % 2 = 0) entao
              escreval("Par Positivo")
           senao
              se (x < 0) e (x % 2 = 0) entao
                 escreval("Par Negativo")
              senao
                 se (x > 0) e (x % 2 = 1) entao
                    escreval("Impar Positivo")
                 senao
                    escreval("Impar Negativo")
                 fimse
              fimse
           fimse
        fimse
        
      fimpara

Fimalgoritmo