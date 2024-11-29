/*
7) Crie um programa que tenha uma função ler3Palavras. Essa função deve ler três palavras do
usuário e retornar as três palavras. A função main deve imprimir essas três palavras.
*/

#include <stdio.h>
#include <stdlib.h>


void ler3Palavras(char p[3][45]){
    for (int i = 0; i < 3; i++){
        printf("Digite a palavra %d: ", i+1);
        scanf("%44s", p[i]);
    }
}

int main(){
    char p[3][45];
    ler3Palavras(p);

    for (int j = 0; j < 3; j++){
        printf("letra %d == %s\n", j+1, p[j]);
    }
}
