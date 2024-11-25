/*
1) Crie um programa que tenha uma função soma e a função main. A função main deve ler dois
valores, enviar para a função soma. A função soma deve realizar a soma e retornar o valor. A
Função main deve imprimir o resultado da soma.
*/
#include <stdio.h>

int soma (int x, int y){
    return x + y;
}

int main (){
    int a, b, c;

    printf("1st number:\n");
    scanf("%d", &a);
    printf("2nd number\n");
    scanf("%d", &b);
    
    c = soma(a, b);

    printf("Sum:\n%d", c);

    return 0;
}
