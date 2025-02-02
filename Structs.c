#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "portuguese");

    //Criando e inicializando
    tipo_pessoa pes = {0, 0.0, "Teste"}; //Espaco em memoria (variavel) que serve para guardar dados ou recupera-lo

    printf("Início:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s", pes.nome);

    //Atribuindo valores aos campos
    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "texto");

    printf("\n\nAlterando os campos via código:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s", pes.nome);

    //Solicitando inserções via teclado
    printf("\nInsira um número inteiro:\n");
    scanf("%d", &pes.idade);

    printf("Insira um numero reaal:\n");
    scanf("%f", &pes.peso);

    printf("Insira uma palavra:\n");
    scanf("%s", &pes.nome);

    printf("\nAlterando com dados do usuário:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s", pes.nome);

    return 0;
}