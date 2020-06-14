#include<stdio.h>

int main(void){
    int aprovados = 0;      /*número de aprovações*/
    int reprovados = 0;     /*número de reprovações*/
    int aluno = 1;              /*contator de alunos*/
    int resultado;          /*um resultado de exame*/

    /*processa 10 alunos usando loop controlado por contador*/
    while (aluno <= 10){

        /*pede entrada do usuário e lê valor digitado*/
        printf("Forneca resultado (1=aprovado 2=reprovado)");
        scanf("%d", &resultado);

        /*se resultado 1 incrementa aprovados*/
        if (resultado==1){
            aprovados = aprovados + 1;
        }
        else{
            reprovados = reprovados + 1;
        }
        aluno = aluno + 1;      /*incrementa contador de alunos*/
    }

    printf("Aprovados %d\n", aprovados);
    printf("Reprovados %d\n", reprovados);

    /*se mais de 8 forem aprovados, imprime 'bônus ao instrutor'*/
    if (aprovados > 8 ){
        printf("Bonus ao instrutor!\n");
    }

    return 0;
}
