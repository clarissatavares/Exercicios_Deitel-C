/*Usando o comando BREAK em uma estrutura FOR*/

#include<stdio.h>

int main ( void ) {
    int x;                          //contador
    for ( x = 1; x <= 10; x++ ){    //loop por 10 vezes
            /*se x é 5, encerra o loop*/
            if ( x == 5 ) {
                break;              //sai do loop somente se x é 5
            }

        printf("%d ", x);          //exibe o valor de x
    }
    printf("\nSaiu do loop em x == %d\n", x);
    return 0;
}
