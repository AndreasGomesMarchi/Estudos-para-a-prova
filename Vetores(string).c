#include <stdio.h>

int main(){

    char s[10];

    printf("Digite algo (scanf normal):\n");
    scanf("%s", s);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);

    printf("Digite algo (scanf elaborado):\n");
    scanf("%9[^\n]s", s);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);

    return 0;
}