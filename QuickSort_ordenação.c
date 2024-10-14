#include <stdio.h>
#include <stdlib.h>

int main(){

    int arr[] = {64, 25, 12, 22};
    int n = 5;
    int i, j, min_idx;

    for(i = 0; i < n - 1; i++) {
        min_idx = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        if (min_idx != i) {
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }

return 0;
}