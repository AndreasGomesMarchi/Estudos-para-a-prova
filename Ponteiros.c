#include <stdio.h>
#include <stdlib.h>

void display(int var, int *ptr);

int main(){

    int var = 15;
    int *ptr; //PONTEIRO

    ptr  = &var; //Atribuimos a prt o endereco de var

    printf("conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", &var);
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereco apontado por ptr = %p\n", ptr);
    printf("endereco do prt           = %p\n\n", &ptr);

    *ptr = 73;

    printf("conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", &var);
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereco apontado por ptr = %p\n", ptr);
    printf("endereco do prt           = %p\n", &ptr);

    //Ponteiros:
    // *ptr: o apontado por, conteudo do endereco da variavel que ptr aponta
    //  ptr: o endereco da variavel
    // &ptr: o endereco do ponteiro

}
