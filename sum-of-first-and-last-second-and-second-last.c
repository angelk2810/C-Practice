//Print the sum of first element, second element,last element,second last element
//in an array //
//Example : [1,2,4,5,5] Output:  1+2+5+5 = 13, [1,2,3] Output : 4//


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("Invalid");
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = arr[0] + arr[1] + arr[n-1] + arr[n-2];
    printf("Sum: %d\n", sum);

    return 0;
}