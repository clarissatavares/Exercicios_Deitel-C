/*Programa de Média da Turma com repetição controlada por contador */

#include<stdio.h>

int main (void){
    int contador;       //numero da nota a digitar
    int nota;           //valor da nota
    int total;          //soma das notas inseridas pelo usuario
    int media;          //media das notas

    /*fase de inicialização*/
    total = 0;          //inicializa total
    contador = 1;       //inicializa contador de loop

    while ( contador <= 10){        //loop 10 vezes
        printf("Digite a nota: ");
        scanf("%d", &nota);
        total = total + nota;       //soma nota ao total
        contador = contador + 1;    //incrementa contador
    }       //fim do while

    /*fase de término*/
    media = total / 10;             //divisão de inteiros

    printf("Media da turma e %d\n", media); //exibe resultado
    return 0;
}
