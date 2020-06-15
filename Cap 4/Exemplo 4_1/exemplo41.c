/*Repetição controlada por contador*/
#include<stdio.h>

int main(void){
    int contador = 1; //inicialização

    while(contador <= 10){          //condição de repetição
        printf("%d\n", contador);   //exibe contador
        ++contador;                 //incrementa
    }
    return 0;
}
