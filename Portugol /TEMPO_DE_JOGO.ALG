Algoritmo "tempo_de_jogo"

// Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração
// do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro,
// tendo uma duração mínima de 1 hora e máxima de 24 horas.

Var

   horaInicio, horaFim, duracao : inteiro

Inicio

      escreva("Digite a hora inicial: ")
      leia(horaInicio)
      escreva("Digite a hora final: ")
      leia(horaFim)
      

      
      se (horaInicio > horaFim) e ((horaInicio >= 1) e (horaFim <= 24)) entao
         duracao <- 24 % (horaInicio - horaFim)
      senao
         se (horaInicio < horaFim) e ((horaInicio >= 1) e (horaFim <= 24)) entao
         duracao <- (horaFim - horaInicio)
         senao
            duracao <- 24
         fimse
      fimse

      escreva("O jogo durou ", duracao, " hora(s).")


Fimalgoritmo