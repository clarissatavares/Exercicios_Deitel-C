/* Repetição Controlada por Contador com Estrutura FOR*/
#include<stdio.h>

int main (void){
    int contador;

    /*inicialização, condição de repetição e incremento
        são todos incluídos no cabeçalho da estrutura FOR*/
    for (contador = 1; contador <= 10; contador++){
        printf("%d\n", contador);
    }

    return 0;
}
