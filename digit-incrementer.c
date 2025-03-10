#include <stdio.h>

int main() {
    int num, digit, incremented_num = 0, multiplier = 1;

    scanf("%d", &num);


    int original_num = num;


    while (num != 0) {
        digit = num % 10;
        incremented_num += (digit + 1) * multiplier;
        multiplier *= 10;
        num /= 10;
    }

    printf("%d\n", incremented_num);

    return 0;
}