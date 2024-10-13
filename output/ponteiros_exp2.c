#include <stdio.h>


int main(void) {
int x = 1;
int *p = &x;

for(; x < 5; x++){ // Incrementa e compara
// 10 < 5 = false
if(*p % 2 != 0){
*p = (*p) * x;
}
}
printf("%d\n", x); // Printa 10
}