/*Pr�-Incremento e P�s-Incremento*/
#include<stdio.h>

int main (void){
    int c;                  //define vari�vel
                /*demonstra p�s-incremento*/
    c = 5;
    printf("%d\n", c);
    printf("%d\n", c++);    //imprime c e depois p�s-incrementa
    printf("%d\n\n", c);    //imprime 6

                /*demonstra pr�-incremento*/
    c=5;
    printf("%d\n",c);
    printf("%d\n",++c);     //pr�-incrementa e depois imprime 6
    printf("%d\n",c);       //imprime 6

    return 0;
}
