/*Calculando juros compostos*/
#include<stdio.h>
#include<math.h>

int main (void){
    double valor;               /*valor em dep�sito*/
    double principal = 1000.0;  /*principal inicial*/
    double taxa = .05;          /*taxa anual de juros*/
    int ano;                    /*contador do ano*/

    /*cabe�alho de coluna da tabela de resultados*/
    printf("%4s%21s\n", "Ano", "Valor da Conta");

    /*calcula valor em dep�sito para cada um dos dez anos*/
    for ( ano = 1; ano <= 10; ano++){
        /*calcula novo valor para o ano especificado*/
        valor = principal * pow( 1.0 + taxa, ano);

        /*exibe uma linha da tabela*/
        printf("%4d%21.2f\n", ano, valor);
    }
    return 0;
}
