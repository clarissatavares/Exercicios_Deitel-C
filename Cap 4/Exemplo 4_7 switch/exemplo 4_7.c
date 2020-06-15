/*Contando notas de letras*/
#include<stdio.h>

int main (void){
    int nota;       //uma nota
    int aCount = 0;  //n�mero de As
    int bCount = 0;  //numero de Bs
    int cCount = 0;  //n�mero de Cs
    int dCount = 0;  //n�mero de Ds
    int fCount = 0;  //n�mero de Fs

    printf( "Digite as notas em letra.\n" );
    printf( "Digite o caractere EOF para encerrar a entrada.\n" );

    /*loop at� que o usu�rio digite sequencia de fim de arquivo*/
    while ( ( nota = getchar() ) != 'Z' ) {

        //determina qual nota foi digitada
        switch ( nota ) {   //switch aninhado no while

            case 'A':       /*nota que foi A maiusculo*/
            case 'a':       /*ou a minusculo*/
                ++aCount;   /*incrementa aCount*/
                break;      /*necess�rio para sair do switch*/

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
            case '\t':      /* tabula��es */
            case ' ':       /* e espa�os de entrada */
                break;      /* sai do switch */

            default:        /*apanha todos os outros caracteres*/
                printf("Letra de nota incorreta.");
                printf("Digite nova nota.\n");
        }
    }

    /*sa�da de resumo dos resultados*/
    printf("\nTotais para cada nota s�o:\n");
    printf("A: %d\n", aCount);   /* exibe n�mero de notas A */
    printf("B: %d\n", bCount);   /* exibe n�mero de notas B */
    printf("C: %d\n", cCount);   /* exibe n�mero de notas C*/
    printf("D: %d\n", dCount);   /* exibe n�mero de notas D */
    printf("F: %d\n", fCount);   /* exibe n�mero de notas F */

    return 0;
}
