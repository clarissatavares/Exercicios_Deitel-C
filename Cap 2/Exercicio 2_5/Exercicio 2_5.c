#include<stdio.h>

int main(void){
    int x;
    int y;
    int z;
    int multiplica;

    printf("Digite o primeiro inteiro \n");
    scanf("%d", &x);

    printf("Digite o segundo inteiro \n");
    scanf("%d", &y);

    printf("Digite o terceiro inteiro \n");
    scanf("%d", &z);

    multiplica = x * y * z;

    printf("O produto dos numeros e %d\n", multiplica);

    return 0;
}
