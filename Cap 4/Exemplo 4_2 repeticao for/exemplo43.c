/* Repeti��o Controlada por Contador com Estrutura FOR*/
#include<stdio.h>

int main (void){
    int contador;

    /*inicializa��o, condi��o de repeti��o e incremento
        s�o todos inclu�dos no cabe�alho da estrutura FOR*/
    for (contador = 1; contador <= 10; contador++){
        printf("%d\n", contador);
    }

    return 0;
}
