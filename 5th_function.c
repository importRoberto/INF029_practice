/*
5) Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do
usuário e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize
struct para fazer o retorno.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num[4];
} numeros;
 
numeros ler4Numeros(){
    numeros n;
    
    for (int i = 0; i < 4; i++){
        printf("Digite o numero %d:\n", i+1);
        scanf("%d", &n.num[i]);
    }
    return n;
}


int main()
{
    numeros numeros = ler4Numeros();
    
    printf("Os numeros digitados foram:\n");
    for(int i = 0; i < 4; i++){
        printf("numero %d == %d\n", i+1, numeros.num[i]);
    }

    return 0;
}
