#include <stdio.h>

int main(void){
    int x = 2, *p1, **p2;
    p1 = &x;
    p2 = &p1;

    printf("%d\n", &x); //Imprime o endereco de x
    printf("%d\n", *p1); //Imprime o valor do endereco apontado, nesse caso, como ele aponta para x, o valor mostrado sera 2
    printf("%d\n", *p2); //Imprime o valor do ponteiro apontado, nesse caso, como ele esta apontado para p1, que esta apontado para a variavel x, ele printara o endereco de x, ja que o valor de p1 e o endereco de x
}