Algoritmo "media_idades"

// Faça um programa para ler um número indeterminado de dados, contendo cada
// um, a idade de um indivíduo. O último dado, que não entrará nos cálculos,
// contém um valor de idade negativa. Calcular e imprimir a idade média deste
// grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
// mostrar a mensagem "IMPOSSIVEL CALCULAR".

Var

   idade, somaIdade, quantidade : inteiro
   media : real

Inicio

      somaIdade <- 0
      quantidade <- 0

      escreval("Digite as idades:")
      leia(idade)
      
      enquanto idade >= 0 faca
      
         quantidade <- quantidade + 1
         somaIdade <- somaIdade + idade
         
         leia(idade)

      fimenquanto
      
      se quantidade = 0 entao
         escreval("IMPOSSÍVEL CALCULAR")
      senao
         media <- somaIdade / quantidade
         escreval("Médias das idades = ", media:4:2)
      fimse

Fimalgoritmo