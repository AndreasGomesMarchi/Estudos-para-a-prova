#include <stdio.h>

typedef struct{
char nome[20];
char sobreNome[20];
}Pessoa;

int main (void){
Pessoa joaquim, *referencia;
char *p;
int x;
referencia = &joaquim;
strcpy(referencia->nome, "joaquim"); // Atribui joaquim a nome
strcpy(referencia->sobreNome, "barbosa"); // barbosa no sobrenome
p = strcat(referencia->nome, referencia->sobreNome); // Concatena
x = strlen(p); // Pega o tamanho
printf("%d", x++); // Primeiro printa e depois atribui
}