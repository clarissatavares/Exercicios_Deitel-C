/*Programa de m�dia da turma com repeti��o controlada por sentinela*/
#include<stdio.h>

int main (void){
    int contador;
    int nota;
    int total;

    float media;        /*n�mero em ponto flutuante para a m�dia*/

    total = 0;
    contador = 0;

    printf("Digite a nota, -1 para finalizar: ");
    scanf("%d", &nota);

    while ( nota != -1){
        total = total + nota;
        contador = contador + 1;
        /*recebe pr�xima nota do usu�rio*/

        printf("Digite a nota, -1 para finalizar: ");
        scanf("%d", &nota);
    }

    if(contador != 0){
        media = (float)total / contador;        /*evita truncar*/

        /*exibir a m�dia com 2 d�gitos de precis�o*/
        printf("Media da turma e %.2f\n", media);
    }
    else{
        printf("Nenhuma nota foi informada\n");
    }

    return 0;
}
