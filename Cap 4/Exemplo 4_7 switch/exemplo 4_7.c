/*Contando notas de letras*/
#include<stdio.h>

int main (void){
    int nota;       //uma nota
    int aCount = 0;  //número de As
    int bCount = 0;  //numero de Bs
    int cCount = 0;  //número de Cs
    int dCount = 0;  //número de Ds
    int fCount = 0;  //número de Fs

    printf( "Digite as notas em letra.\n" );
    printf( "Digite o caractere EOF para encerrar a entrada.\n" );

    /*loop até que o usuário digite sequencia de fim de arquivo*/
    while ( ( nota = getchar() ) != 'Z' ) {

        //determina qual nota foi digitada
        switch ( nota ) {   //switch aninhado no while

            case 'A':       /*nota que foi A maiusculo*/
            case 'a':       /*ou a minusculo*/
                ++aCount;   /*incrementa aCount*/
                break;      /*necessário para sair do switch*/

            case 'B':
            case 'b':
                ++bCount;
                break;

            case 'C':
            case 'c':
                ++cCount;
                break;

            case 'D':
            case 'd':
                ++dCount;
                break;

            case 'F':
            case 'f':
                ++fCount;
                break;

            case '\n':      /*ignora caracteres de nova linha*/
            case '\t':      /* tabulações */
            case ' ':       /* e espaços de entrada */
                break;      /* sai do switch */

            default:        /*apanha todos os outros caracteres*/
                printf("Letra de nota incorreta.");
                printf("Digite nova nota.\n");
        }
    }

    /*saída de resumo dos resultados*/
    printf("\nTotais para cada nota são:\n");
    printf("A: %d\n", aCount);   /* exibe número de notas A */
    printf("B: %d\n", bCount);   /* exibe número de notas B */
    printf("C: %d\n", cCount);   /* exibe número de notas C*/
    printf("D: %d\n", dCount);   /* exibe número de notas D */
    printf("F: %d\n", fCount);   /* exibe número de notas F */

    return 0;
}
