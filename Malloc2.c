#include <stdio.h>
#include <stdlib.h>

int main (void){
int *sequenciaValores = (int *)malloc(sizeof(int) * 3);
int *p = sequenciaValores; // Referencia p

*(p + 1) = 20; // Atribui 20 ao primeiro endereço dinâmico 1

*(sequenciaValores) = 40; // Atribui 40 ao ponteiro seq 0

*(p + 2) = *(sequenciaValores) * 2; //Atribui o dobro do valor de seq no segundo endereço alocado 2

printf("%d\n", *(p + 2));

}