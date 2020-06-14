/*Programa de média da turma com repetição controlada por sentinela*/
#include<stdio.h>

int main (void){
    int contador;
    int nota;
    int total;

    float media;        /*número em ponto flutuante para a média*/

    total = 0;
    contador = 0;

    printf("Digite a nota, -1 para finalizar: ");
    scanf("%d", &nota);

    while ( nota != -1){
        total = total + nota;
        contador = contador + 1;
        /*recebe próxima nota do usuário*/

        printf("Digite a nota, -1 para finalizar: ");
        scanf("%d", &nota);
    }

    if(contador != 0){
        media = (float)total / contador;        /*evita truncar*/

        /*exibir a média com 2 dígitos de precisão*/
        printf("Media da turma e %.2f\n", media);
    }
    else{
        printf("Nenhuma nota foi informada\n");
    }

    return 0;
}
