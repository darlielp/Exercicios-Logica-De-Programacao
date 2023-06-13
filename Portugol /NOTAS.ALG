Algoritmo "notas"

// Fazer um programa para ler as duas notas que um aluno obteve no primeiro e
// segundo semestres de uma disciplina anual. Em seguida, mostrar a nota final
// que o aluno obteve (com uma casa decimal) no ano juntamente com um texto
// explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
// mensagem "REPROVADO".

Var

   nota1, nota2, notaFinal : real


Inicio

      escreva("Digite a primeira nota:")
      leia(nota1)
      escreva("Digite a segunda nota:")
      leia(nota2)
      
      notaFinal <- nota1 + nota2
      
      escreval("Nota Final = ", notaFinal:5:1)
      
      se notaFinal >= 60 entao
         escreval("APROVADO")
      senao
         escreval("REPROVADO")
      fimse


Fimalgoritmo