#include<stdio.h>

int main(void){
    int x;
    int y;
    int z;
    int soma;

    printf("Digite o primeiro inteiro \n");
    scanf("%d", &x);

    printf("Digite o segundo inteiro \n");
    scanf("%d", &y);

    printf("Digite o terceiro inteiro \n");
    scanf("%d", &z);

    soma = x + y + z;

    printf("A soma dos numeros e %d\n", soma);

    return 0;
}
