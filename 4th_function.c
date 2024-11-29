/*
4) Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do
usuário e retornar os três números. A função main deve imprimir esses três números. Utilize vetor
para fazer o retorno
*/

#include <stdio.h>
#include <stdlib.h>

void ler3Numeros(int num[3]){
    for (int i = 0; i < 3; i++){
        printf("Digite o %dº numero\n", i+1);
        scanf("%d", &num[i]);
    }
}

int main(){
    int num[3];
    ler3Numeros(num);

    for (int j = 0; j < 3; j++){
        printf("Numero %d == %d\n", j+1, num[j]);
    }
}
