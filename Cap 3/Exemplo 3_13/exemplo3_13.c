/*Pré-Incremento e Pós-Incremento*/
#include<stdio.h>

int main (void){
    int c;                  //define variável
                /*demonstra pós-incremento*/
    c = 5;
    printf("%d\n", c);
    printf("%d\n", c++);    //imprime c e depois pós-incrementa
    printf("%d\n\n", c);    //imprime 6

                /*demonstra pré-incremento*/
    c=5;
    printf("%d\n",c);
    printf("%d\n",++c);     //pré-incrementa e depois imprime 6
    printf("%d\n",c);       //imprime 6

    return 0;
}
