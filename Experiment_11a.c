# include<stdio.h>

int main() {
    int a, b;
    printf("Enter first integer:");
    scanf("%d", &a);
    printf("Enter second integer:");
    scanf("%d", &b);

    int or_result = a | b;
    printf("Bitwise OR (a | b): %d\n", or_result);

    int and_result = a & b;
    printf("Bitwise AND (a & b): %d\n", and_result);

    int not_result = ~a;
    printf("Bitwise NOT (~a): %d\n", not_result);

    return 0;
}