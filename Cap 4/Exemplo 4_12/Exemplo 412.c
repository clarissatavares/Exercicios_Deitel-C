/*Usando o comando CONTINUE em uma estrutura FOR*/

#include<stdio.h>

int main (void){
    int x;
            //loop por 10 vezes
    for (x = 1; x <= 10; x++){
            //se x é 5, continua com a próxima interação do loop
        if ( x == 5 ){
            continue;   //salta código restante no corpo do loop
        }
        printf("%d ", x);
    }
    printf("\nUsou continue para pular a exibicao do valor 5\n");

    return 0;
}
