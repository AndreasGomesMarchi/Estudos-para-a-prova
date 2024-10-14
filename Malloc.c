#include <stdio.h>
#include <stdlib.h>

int main(){
    int *x;

    x = malloc(sizeof(int));

    if(x != NULL){ //Testar para ver se o ponteiro x pegou a memoria alocada
        printf("x: %d\n", *x); //Como nao foi colocado nada aqui, apenas alocado na memoria, muito possivelmente apenas aparece lixo de memoria
        printf("Memoria alocada com sucesso!!!\n");
        *x = 50;
        printf("x: %d\n", *x);
    }else{
        printf("Erro ao alocar memoria!\n");
    }


    return 0;
}