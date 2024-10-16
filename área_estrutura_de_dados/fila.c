#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

void inserir_na_fila(No **fila, int num){
    No *aux,*novo = malloc(sizeof(No));
    if(novo != NULL){
        novo->valor = num; //-> é o operador de acesso a membros via ponteiro em C. Ele é usado para acessar os membros de uma estrutura quando você está trabalhando com um ponteiro para essa estrutura.
        novo->proximo = NULL; //Serve para acessar o campo do no que o ponteiro esta apontando
        if(*fila == NULL){
            *fila = novo; //Cria o primeiro no, e falso depois disso
        }else{
            aux = *fila;
            while(aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;   
        }
    }else{
        printf("\nErro ao alocar memoria.\n");
    }
}

No* remover_da_fila(No **fila){ //No* isso aqui significa que e uma funcao que vai retornar um ponteiro
    No *remover = NULL;

    if(*fila){ //*fila quando esta sozinho assim, e a mesma coisa que pergunta: *fila != NULL?
        remover = *fila;
        *fila = remover->proximo;
    }else{
        printf("\nFila vazia\n");
    }
    return remover;
}




int main(){



    return 0;
}