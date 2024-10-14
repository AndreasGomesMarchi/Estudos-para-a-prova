#include <stdio.h>

typedef struct{
int idade;
int ano;
}Pessoa;

int main (){
Pessoa kaua, *referencia;
referencia = &kaua;
printf("%d\n", &kaua.idade); // printa o endereco da struct de kauan.idade
printf("%d\n", &kaua.ano); //printa o endereco da struct da kaua.ano
printf("%d\n", referencia); // printa o endereco da struct apontada, que e kaua.idade
}