#include <stdio.h>

int main() {
    int n, num1 = 0, num2 = 1, a, count = 0;

    scanf("%d", &n);

    while (count < n) {
        printf("%d,", num1);
        a = num1 + num2;
        num1 = num2;
        num2 = a;
        count++;
    }

    return 0;
}