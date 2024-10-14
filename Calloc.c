#include <stdio.h>
#include <stdlib.h>

int main (void){
int *sequenciaValores = calloc(3, sizeof(int));

printf("%d\n", *(sequenciaValores)); // Imprime 0
printf("%d\n", *(sequenciaValores + 1)); // Imprime 0
printf("%d\n", *(sequenciaValores + 2)); // Imprime 0
}