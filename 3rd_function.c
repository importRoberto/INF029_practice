/*
3) Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial
deste número. Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve
de alguma forma retornar para a main que deu algum erro. A função main deve solicitar o valor do
usuário e imprimir o fatorial dele, ou se não é possível calcular o fatorial.
*/
#include <stdio.h>

int fat (int x) {
    if (x < 0)
        return -1; //Erro

    if (x == 0 || x == 1)
        return 1; //Fatorial == 1
    
    int result = 1;
    for (int i = 2; i <= x; i++)
        result *= i;
    
    return result;

}

int main () {
    int num;
    printf("num:\n");
    scanf("%d", &num);
    
    int result = fat(num);
    
    if (result == -1)
        printf("Não é possível calcular o fatorial\n");
    else
        printf("%d! = %d", num, result);

    return 0;
}