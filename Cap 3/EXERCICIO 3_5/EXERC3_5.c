/*Calcula a soma dos inteiros de 1 � 10*/
#include<stdio.h>

int main (void){
    int soma, x;    /*declara vari�veis soma e x*/

    x = 1;          /*inicializa x*/
    soma = 0        /*inicializa soma*/

    while ( x <= 10){
        soma += x;  /*soma x � vari�vel soma*/
        ++x;        /*incrementa x*/
    }

    printf("A soma e: %d\n", soma); /*exibe a soma*/
    return 0;
}
