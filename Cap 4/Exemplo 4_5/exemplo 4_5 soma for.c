/*Somat�rio comFOR*/
#include<stdio.h>

int main (void){
    int soma = 0;   /*inicializa soma*/
    int numero;     /*numero a ser acrescido � soma*/

    for ( numero = 2; numero <= 100; numero += 2){
        soma += numero; /*adiciona n�mero a soma*/
    }

    printf("Soma e %d\n", soma);

    return 0;
}
