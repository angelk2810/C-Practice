/*Array Chunking - Eg1 : Chunk size = 2, array size 8, elements (1,2,3,4,5,6,7,8) - Ans : [1,2] [3,4] [5,6] [7,8]
Eg2: Chunk size = 3, array size 4, elements (1,2,3,4) - Ans : [1,2,3] [4]*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, chunkSize, i, j;

    // Input array size
    scanf("%d", &n);

    // Input chunk size
    scanf("%d", &chunkSize);

    // Input array elements
    int* arr = (int*)malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Chunk the array
    for (i = 0; i < n; i += chunkSize) {
        printf("[");
        for (j = i; j < i + chunkSize && j < n; j++) {
            printf("%d", arr[j]);
            if (j < i + chunkSize - 1 && j < n - 1) {
                printf(",");
            }
        }
        printf("]\n");
    }

    // Free memory
    free(arr);

    return 0;
}