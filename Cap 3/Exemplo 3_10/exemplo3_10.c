#include<stdio.h>

int main(void){
    int aprovados = 0;      /*n�mero de aprova��es*/
    int reprovados = 0;     /*n�mero de reprova��es*/
    int aluno = 1;              /*contator de alunos*/
    int resultado;          /*um resultado de exame*/

    /*processa 10 alunos usando loop controlado por contador*/
    while (aluno <= 10){

        /*pede entrada do usu�rio e l� valor digitado*/
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

    /*se mais de 8 forem aprovados, imprime 'b�nus ao instrutor'*/
    if (aprovados > 8 ){
        printf("Bonus ao instrutor!\n");
    }

    return 0;
}
