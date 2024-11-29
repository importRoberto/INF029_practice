/*
8) Crie um programa que tenha uma função cadastrarCliente. Essa função deve ler os dados do
cliente (nome, dataNascimento, cpf, sexo) e retornar os dados do cliente. A função main deve
imprimir os dados do cliente.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {

    char nome[50];
    char dataNascimento[11];
    char cpf[15];
    char sexo[10];

} cliente;

cliente cadastrarCliente(){
    cliente x;

    printf("Qual seu nome?\n");
    scanf("%s", x.nome);

    printf("Qual sua data de nascimento? (dd/mm/yyyy)\n");
    scanf("%s", x.dataNascimento);

    printf("Qual seu CPF? (xxx.xxx.xxx-xx)\n");
    scanf("%s", x.cpf);

    printf("Qual seu sexo? (Masculino ou Feminino)\n");
    scanf("%s", x.sexo);

    return x;

}

int main(){
    cliente x = cadastrarCliente();

    printf("%s, nascido em %s, de cpf %s tem o sexo %s", x.nome, x.dataNascimento, x.cpf, x.sexo);

    return 0;
}