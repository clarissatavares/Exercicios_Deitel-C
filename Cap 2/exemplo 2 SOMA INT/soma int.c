/*PROGRAMA DE ADI��O*/

#include<stdio.h>

    //inicio do programa
int main(void){
    int inteiro1;    /*primeiro numero a ser informado*/
    int inteiro2;    /*segundo numero a ser informado*/
    int soma;        /*variavel em que a soma sera mantida*/

    printf("Digite o primeiro inteiro: \n");
    scanf("%d",&inteiro1);                  //l� um inteiro

    printf("Digite o segundo inteiro: \n");
    scanf("%d",&inteiro2);                  //l� um inteiro

    soma = inteiro1 + inteiro2;              //atribui o total � soma

    printf("A soma e %d\n", soma);          //print soma

    return 0; //indica que o programa foi conclu�do com sucesso
}             //fim da fun��o main
