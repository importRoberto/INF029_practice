/*
2) Crie um programa que tenha uma função subtrai e a função main. A função main deve ler três
valores, enviar para a função subtrai. A função subtrai deve realizar a subtração dos três valores
(primeiro menos o segundo menos o terceiro) e retornar o valor. A Função main deve imprimir o
resultado da subtração.
*/
#include <stdio.h>

int subtrai(int x,int y,int z) {
    return x - y - z;
}

int main () {
    int a, b, c, result;
    printf("1st number:\n");
    scanf("%d", &a);
    printf("2nd number\n");
    scanf("%d", &b);
    printf("3rd number\n");
    scanf("%d", &c);

    result = subtrai(a, b, c);
    printf("Subtraction:\n%d", result);

}