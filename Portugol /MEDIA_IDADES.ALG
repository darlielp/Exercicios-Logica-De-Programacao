Algoritmo "media_idades"

// Fa�a um programa para ler um n�mero indeterminado de dados, contendo cada
// um, a idade de um indiv�duo. O �ltimo dado, que n�o entrar� nos c�lculos,
// cont�m um valor de idade negativa. Calcular e imprimir a idade m�dia deste
// grupo de indiv�duos. Se for entrado um valor negativo na primeira vez,
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
         escreval("IMPOSS�VEL CALCULAR")
      senao
         media <- somaIdade / quantidade
         escreval("M�dias das idades = ", media:4:2)
      fimse

Fimalgoritmo