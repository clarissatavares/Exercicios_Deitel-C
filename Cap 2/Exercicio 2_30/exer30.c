#include<stdio.h>

int main (void){
    int num;
    int x5, x4, x3, x2, x1;
    int resto5, resto4, resto3, resto2;

    printf("Entre com 5 digitos:");

    scanf("%d", &num);

    x5 = num/10000;
    resto5 = num%10000;
    x4 = resto5/1000;
    resto4 = resto5%1000;
    x3 = resto4/100;
    resto3 = resto4%100;
    x2 = resto3/10;
    resto2 = resto3%10;
    x1 = resto2;

    printf("%d   %d   %d   %d   %d \n", x5, x4, x3, x2, x1);
    return 0;
}
