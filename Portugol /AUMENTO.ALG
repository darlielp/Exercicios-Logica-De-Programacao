Algoritmo "aumento"

// Uma empresa vai conceder um aumento percentual de
// salário aos seus funcionários dependendo de quanto
// cada pessoa ganha. Fazer um programa para ler o salário
// de uma pessoa, daí mostrar qual o novo salário desta
// pessoa depois do aumento, quanto foi o aumento e qual
// foi a porcentagem de aumento.

Var

   salarioPessoa, novoSalario, aumento : real
   porcentagem : inteiro

Inicio

      escreva("Digite o salario da pessoa: ")
      leia(salarioPessoa)
      
      se salarioPessoa <= 1000 entao
         porcentagem <- 20
      senao
         se (salarioPessoa > 1000) e (salarioPessoa <= 3000) entao
            porcentagem <- 15
         senao
            se (salarioPessoa > 3000) e (salarioPessoa <= 8000) entao
               porcentagem <- 10
            senao
               porcentagem <- 5
            fimse
         fimse
      fimse
      
      aumento <- salarioPessoa * porcentagem / 100
      novoSalario <- salarioPessoa + aumento
      
      escreval("Aumento = ", aumento:4:2)
      escreval("Novo salário = ", novoSalario:4:2)
      escreval("Porcentagem = ", porcentagem," %")

      
               

      
      
      
      
      
      


Fimalgoritmo