/*Repeti��o controlada por contador*/
#include<stdio.h>

int main(void){
    int contador = 1; //inicializa��o

    while(contador <= 10){          //condi��o de repeti��o
        printf("%d\n", contador);   //exibe contador
        ++contador;                 //incrementa
    }
    return 0;
}
