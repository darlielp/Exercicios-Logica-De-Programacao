Algoritmo "temperatura"

// Deseja-se converter uma medida de temperatura da escala Celsius para
// Fahrenheit ou vice-versa. Para isso, você deve construir um programa que
// leia a letra "C" ou "F" indicando em qual escala vai ser informada uma
// temperatura. Em seguida o programa deve mostrar a temperatura na outra
// escala com duas casas decimais.

Var

   celsius, fahrenheit : real
   escala : caractere

Inicio

    escreva("Voce vai digitar a temperatura em qual escala (C/F)?: ")
    leia(escala)
    
    se (escala = "C") ou (escala = "c") entao
       escreva("Digite a temperatura em Celsius: ")
       leia(celsius)
       fahrenheit <- celsius * (9/5) + 32
       escreval("Temperatura equivalente em Fahrenheit: ", fahrenheit:4:2, " °F.")
    senao
       se (escala = "F") ou (escala = "f") entao
          escreva("Digite a temperatura em fahrenheit: ")
          leia(fahrenheit)
          celsius <- (fahrenheit - 32) / (9/5)
          escreval("Temperatura equivalente em celsius: ", celsius:4:2, " °C.")
       fimse
    fimse
    

Fimalgoritmo