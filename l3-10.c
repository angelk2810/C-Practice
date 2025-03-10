#include <stdio.h>

int main() {
    int n, a[100], i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Odd Numbers: [");
    int odd_flag = 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            if (odd_flag == 1) {
                printf(", ");
            }
            printf("%d", a[i]);
            odd_flag = 1;
        }
    }
    printf("]\n");
    
    
    printf("Even Numbers: [");
    int even_flag = 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            if (even_flag == 1) {
                printf(", ");
            }
            printf("%d", a[i]);
            even_flag = 1;
        }
    }
    printf("]\n");

    return 0;
}