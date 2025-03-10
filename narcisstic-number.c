#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    scanf("%d", &num);

    originalNum = num;

    // Count digits
    while (originalNum != 0) {
        n++;
        originalNum /= 10;

    }

    originalNum = num;

    // Calculate the sum of nth powers of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if it's a Narcissistic number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
