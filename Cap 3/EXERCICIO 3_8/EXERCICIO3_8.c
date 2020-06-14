/*eleva x a potencia y*/
#include<stdio.h>

int main (void){
    int x, y, i, potencia;

    i = 1;
    potencia = 1;
    scanf("%d",&x);     /*lê do usuário o valor para x*/
    scanf("%d",&y);     /*lê do usuário o valor para y*/

    while (i <= y){     /*loop while i é menor ou igual a y*/
        potencia *= x;  /*multiplica potencia por x*/
        ++i;            /*incrementa i*/
    }

    printf("%d", potencia); /*exibe potencia*/
    return 0;
}

