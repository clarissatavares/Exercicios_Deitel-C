/*Usando instruções if, operadores relacionais e operadores de igualdade*/
#include<stdio.h>

int main (void){
    int num1;       //primeiro numero do usuario a ser lido
    int num2;       //segundo numero do usuario a ser lido

    printf("Entre com dois numeros inteiros e eu lhe direi\n");
    printf("as relacoes que eles satisfazem: ");

    scanf("%d%d", &num1, &num2);    //lê dois inteiros

    if(num1==num2){
        printf("%d eh igual a %d\n", num1, num2);
    }

    if(num1!=num2){
        printf("%d nao eh igual a %d\n", num1, num2);
    }

    if(num1<num2){
        printf("%d eh menor que %d\n", num1, num2);
    }

    if(num1>num2){
        printf("%d eh maior que %d\n", num1, num2);
    }

    if(num1<=num2){
        printf("%d eh menor ou igual a %d\n", num1, num2);
    }

    if(num1>=num2){
        printf("%d eh maior ou igual a %d\n", num1, num2);
    }
    return 0;
}
