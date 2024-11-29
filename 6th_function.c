/*
6) Crie um programa que tenha uma função ler3Letras. Essa função deve ler três letras do usuário
e retornar as três letras. A função main deve imprimir essas três letras.
*/

#include <stdio.h>
#include <stdlib.h>

void ler3Letras(char c[3]){
    for (int i = 0; i < 3; i++){
        printf("Digite a letra %d\n", i+1);
        scanf(" %c", &c[i]);
    }
}

int main(){
    char c[3];
    ler3Letras(c);

    for (int j = 0; j < 3; j++){
        printf("letra %d == %c\n", j+1, c[j]);
    }
}
