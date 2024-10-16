#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct NO{
    int dado;
    struct NO *prox;
}NO;

typedef struct PILHA{
    NO *topo;
}PILHA;

void inicializaPilha(PILHA *p){
    p->topo = NULL;
}

void empilha(int dado, PILHA *p){  //os parametros são: dado que voce empilha, e a referencia para a pilha!!!
    NO *ptr = (NO*) malloc(sizeof(NO));

    if(ptr == NULL){
        printf("Erro de alocacao de no.\n");
        return;
    }else{
        ptr->dado = dado;
        ptr->prox = p->topo;
        p->topo = ptr;
    }
} 

int desempilha(PILHA *p){
    NO* ptr = p->topo;
    int dado;

    if(ptr == NULL){
        printf("Pilha vazia. \n");
        return 0;
    }else {
        p->topo = ptr->prox;
        ptr->prox = NULL;
        dado = ptr->dado;
        free(ptr);
        return dado;
    }
}

void imprimePilha (PILHA *p){
    NO *ptr = p->topo;

    if(ptr == NULL){
        printf("Pilha vazia.\n");
        return;
    }else{
        while(ptr != NULL){
            printf("%d ", ptr->dado);
            ptr = ptr->prox;
        }
        printf("\n");
    }
}

int main(){
    PILHA *p1 = (PILHA*) malloc(sizeof(PILHA));

    if(p1 == NULL){
        printf("Erro de alocacao da pilha.\n");
        exit(0);
    }else{
        inicializaPilha(p1);

        empilha(10, p1);
        empilha(20, p1);
        empilha(30, p1);

        imprimePilha(p1);

        printf("Tentando desempilhar - resultado: %d\n", desempilha(p1));
        printf("Tentando desempilhar - resultado: %d\n", desempilha(p1));
        printf("Tentando desempilhar - resultado: %d\n", desempilha(p1));
    }
}

 /*1. Estrutura da Pilha
No C, uma pilha segue o princípio LIFO (Last In, First Out), ou seja, o último elemento que entra é o primeiro que sai.

O código define duas estruturas:

NO: Representa um nó da lista encadeada, ou seja, cada elemento da pilha. Ele contém:
Um campo dado, que armazena o valor.
Um ponteiro prox que aponta para o próximo nó da lista.
PILHA: Representa a própria pilha. Ela contém:
Um ponteiro topo, que aponta para o nó que está no topo da pilha.
2. Função inicializaPilha
c
Copiar código
void inicializaPilha(PILHA *p){
    p->topo = NULL;
}
Essa função inicializa a pilha. O ponteiro topo começa como NULL, indicando que a pilha está vazia.

3. Função empilha
c
Copiar código
void empilha(int dado, PILHA *p){
    NO *ptr = (NO*) malloc(sizeof(NO));

    if(ptr == NULL){
        printf("Erro de alocacao de no.\n");
        return;
    }else{
        ptr->dado = dado;
        ptr->prox = p->topo;
        p->topo = ptr;
    }
}
Essa função empilha (adiciona) um novo valor na pilha. Aqui está o processo:

Aloca memória para um novo nó com malloc.
Verifica se a alocação falhou. Se sim, imprime uma mensagem de erro.
Se a memória foi alocada com sucesso:
Coloca o valor no campo dado do novo nó.
O ponteiro prox desse novo nó vai apontar para o nó que estava no topo da pilha.
Agora, o ponteiro topo da pilha aponta para o novo nó.
Exemplo
Vamos ver um exemplo de como essa função funciona:

A pilha está vazia (o topo é NULL).
Chame empilha(10, p1): um nó com o valor 10 é criado, e o topo agora aponta para ele.
Chame empilha(20, p1): um nó com o valor 20 é criado. O prox desse nó aponta para o nó com 10, e o topo agora aponta para o nó com 20.
A pilha ficaria assim:

rust
Copiar código
Topo -> 20 -> 10 -> NULL
4. Função desempilha
c
Copiar código
int desempilha(PILHA *p){
    NO* ptr = p->topo;
    int dado;

    if(ptr == NULL){
        printf("Pilha vazia. \n");
        return 0;
    }else {
        p->topo = ptr->prox;
        ptr->prox = NULL;
        dado = ptr->dado;
        free(ptr);
        return dado;
    }
}
Essa função desempilha (remove) o valor do topo da pilha:

Verifica se a pilha está vazia (se topo é NULL). Se sim, imprime uma mensagem e retorna 0.
Caso contrário:
Armazena o valor do nó do topo em dado.
Move o ponteiro topo para o próximo nó.
Libera a memória do nó removido.
Retorna o valor desempilhado.
Exemplo
Se a pilha estiver assim:

rust
Copiar código
Topo -> 20 -> 10 -> NULL
Após chamar desempilha(p1):

O nó com 20 é removido, o valor 20 é retornado, e o topo passa a apontar para o nó com 10.
5. Função imprimePilha
c
Copiar código
void imprimePilha (PILHA *p){
    NO *ptr = p->topo;

    if(ptr == NULL){
        printf("Pilha vazia.\n");
        return;
    }else{
        while(ptr != NULL){
            printf("%d ", ptr->dado);
            ptr = ptr->prox;
        }
        printf("\n");
    }
}
Essa função percorre a pilha imprimindo todos os elementos do topo até o fim.

6. Função main
c
Copiar código
int main(){
    PILHA *p1 = (PILHA*) malloc(sizeof(PILHA));

    if(p1 == NULL){
        printf("Erro de alocacao da pilha.\n");
        exit(0);
    }else{
        inicializaPilha(p1);

        empilha(10, p1);
        empilha(20, p1);
        empilha(30, p1);

        imprimePilha(p1);

        printf("Tentando desempilhar - resultado: %d\n", desempilha(p1));
        printf("Tentando desempilhar - resultado: %d\n", desempilha(p1));
        printf("Tentando desempilhar - resultado: %d\n", desempilha(p1));
    }
}
No main:

Uma pilha é criada e inicializada.
Três valores (10, 20 e 30) são empilhados.
A pilha é impressa.
Valores são desempilhados e os resultados são exibidos.
Resumo
O código implementa uma pilha usando lista encadeada.
Ele pode empilhar e desempilhar valores, além de imprimir o conteúdo da pilha.
Cada elemento é representado por um nó que aponta para o próximo.*/