#include <stdio.h>
#include<stdlib.h>

union Pessoa {
int idade;
double peso;
double altura;
};

int main(void) {
union Pessoa joaquim;
joaquim.altura = 1.8;
joaquim.idade = 78;
joaquim.peso = 79.0;
printf("%f\n", joaquim.altura); // Imprime 79.0
}