#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  

    int a[n];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);  
    }

    int sum = 0;
    

    for (int i = 0; i < n; i++) {
        int isUnique = 1;  
        
        
        for (int j = 0; j < n; j++) {
            if (i != j && a[i] == a[j]) {
                isUnique = 0; 
                break;
            }
        }

        
        if (isUnique) {
            sum += a[i];
        }
    }

    printf("Sum of unique numbers: %d\n", sum);  
    return 0;
}
