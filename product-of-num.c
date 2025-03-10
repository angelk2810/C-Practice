#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int ans[n];

    int left = 1;
    for (int i = 0; i < n; i++) {
        ans[i] = left;
        left *= a[i];
    }

    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= right;
        right *= a[i];
    }


    for (int i = 0; i < n; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");

    return 0;
}
