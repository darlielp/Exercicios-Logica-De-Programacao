Algoritmo "experiencias"

// Maria acabou de iniciar seu curso de gradua��o na faculdade de medicina e
// precisa de sua ajuda para organizar os experimentos de um laborat�rio o qual
// ela � respons�vel. Ela quer saber no final do ano, quantas cobaias foram
// utilizadas no laborat�rio e o percentual de cada tipo de cobaia utilizada.
// Este laborat�rio em especial utiliza tr�s tipos de cobaias: sapos, ratos e
// coelhos. Para obter estas informa��es, ela sabe exatamente o n�mero de
// experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade
// de cobaias utilizadas em cada experimento. Fa�a um programa que leia um
// valor inteiro N que indica os v�rios casos de teste que vem a seguir. Cada
// caso de teste cont�m um inteiro que representa a quantidade de cobaias
// utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo de cobaia
//(R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de
// cada tipo de cobaia utilizada e o percentual de cada uma em rela��o ao total
// de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois
// d�gitos ap�s o ponto.

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
    
    escreval("Relat�rio Final: ")
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