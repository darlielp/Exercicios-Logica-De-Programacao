Algoritmo "experiencias"

// Maria acabou de iniciar seu curso de graduação na faculdade de medicina e
// precisa de sua ajuda para organizar os experimentos de um laboratório o qual
// ela é responsável. Ela quer saber no final do ano, quantas cobaias foram
// utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.
// Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e
// coelhos. Para obter estas informações, ela sabe exatamente o número de
// experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade
// de cobaias utilizadas em cada experimento. Faça um programa que leia um
// valor inteiro N que indica os vários casos de teste que vem a seguir. Cada
// caso de teste contém um inteiro que representa a quantidade de cobaias
// utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo de cobaia
//(R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de
// cada tipo de cobaia utilizada e o percentual de cada uma em relação ao total
// de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois
// dígitos após o ponto.

Var

   n, i, quant, totalCobaia, sapos, ratos, coelhos  : inteiro
   percentSapos, percentRatos, percentCoelhos : real
   cobaia : caractere

Inicio

    totalCobaia <- 0

    escreva("Quantos casos de teste serao digitados? ")
    leia(n)
    
    para i de 1 ate n faca

        escreva("Quantidade de cobaias: ")
        leia(quant)
        
        escreva("Tipo de cobaia (C, R ou S): ")
        leia(cobaia)
        
        se cobaia = "C" entao
           coelhos <- coelhos + quant
        senao
          se cobaia = "R" entao
             ratos <- ratos + quant
          senao
             sapos <- sapos + quant
          fimse
        fimse
        
        totalCobaia <- totalCobaia + quant
    
    fimpara
    
    escreval("Relatório Final: ")
    escreval("Total de cobaias: ", totalCobaia)
    escreval("Total de coelhos: ", coelhos)
    escreval("Total de ratos: ", ratos)
    escreval("Total de sapos: ", sapos)
    
    percentCoelhos <- (coelhos * 100) / totalCobaia
    percentRatos <- (ratos * 100) / totalCobaia
    percentSapos <- (sapos * 100) / totalCobaia
    
    escreval("Percentual de coelhos: ", percentCoelhos:4:2)
    escreval("Percentual de ratos: ", percentRatos:4:2)
    escreval("Percentual de sapos: ", percentSapos:4:2)
    


Fimalgoritmo