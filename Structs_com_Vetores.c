#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 3

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL,"portuguese");

    tipo_pessoa lista[TAM]; //Essa declaração, no sentido literal, e igual a declaração de baixo, já que a tipo_pessoa virou um tipo que nem o int
    int i;

    for(i=0;i<TAM;i++){
        printf("Insira os dados (%d):\n", i+1);
        puts("Nome: ");
        scanf("%50[^\n]s", &lista[i].nome);
        fflush(stdin);

        puts("Idade: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        puts("Peso: ");
        scanf("%f", &lista[i].peso);
        fflush(stdin);

    }

    system("cls");

    puts("Seus dados:\n");
    for(i=0;i<TAM;i++){
        printf("------------ Pessoa %d ------------\n", i+1);
        printf("\tNome: %s\n",lista[i].nome);
        printf("");
    }



}
