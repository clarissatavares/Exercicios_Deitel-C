/*Programa de M�dia da Turma com repeti��o controlada por contador */

#include<stdio.h>

int main (void){
    int contador;       //numero da nota a digitar
    int nota;           //valor da nota
    int total;          //soma das notas inseridas pelo usuario
    int media;          //media das notas

    /*fase de inicializa��o*/
    total = 0;          //inicializa total
    contador = 1;       //inicializa contador de loop

    while ( contador <= 10){        //loop 10 vezes
        printf("Digite a nota: ");
        scanf("%d", &nota);
        total = total + nota;       //soma nota ao total
        contador = contador + 1;    //incrementa contador
    }       //fim do while

    /*fase de t�rmino*/
    media = total / 10;             //divis�o de inteiros

    printf("Media da turma e %d\n", media); //exibe resultado
    return 0;
}
