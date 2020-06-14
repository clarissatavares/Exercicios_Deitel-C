/*Calcula a soma dos inteiros de 1 à 10*/
#include<stdio.h>

int main (void){
    int soma, x;    /*declara variáveis soma e x*/

    x = 1;          /*inicializa x*/
    soma = 0        /*inicializa soma*/

    while ( x <= 10){
        soma += x;  /*soma x à variável soma*/
        ++x;        /*incrementa x*/
    }

    printf("A soma e: %d\n", soma); /*exibe a soma*/
    return 0;
}
