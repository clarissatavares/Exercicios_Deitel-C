/*usando a estrutura de repeti��o WHILE*/

#include<stdio.h>

int main ( void ) {
    int contador = 1;

    do {
        printf( "%d ", contador);   /*exibe o contador*/
    } while ( ++contador <= 10 );

    return 0;
}


