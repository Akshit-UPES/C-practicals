#include <stdio.h>

int GCD(int num1, int num2) {
    if (num2 == 0)
        return num1;
    return GCD(num2, num1 % num2);
}

int main() {
    int num1, num2, result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    result = GCD(num1, num2);

    printf("Greatest Common Divisor of %d and %d is %d\n", num1, num2, result);

    return 0;
}
