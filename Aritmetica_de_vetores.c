#include <stdio.h>
#include <stdlib.h>

int main(){

int arr[] = {5, 15, 25, 35, 45, 55, 65, 75, 85, 95};
int *p = arr;
int total = 0;

for(int i = 0; i < 10; i++) {

    if(*p % 2 == 0) {
        total += *p;
    } else {
        total += *p * 2;
    }
    p++;
}

p = arr;

while(*p != 85) {
    if(*p > 50) {
        *p = *p - 10;
    }
    p++;
}

printf("Total: %d\n", total);

return 0;
}

