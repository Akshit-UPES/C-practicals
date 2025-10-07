# include<stdio.h>

int main() {
    int num, shift;

    printf("Enter an integer:");
    scanf("%d", &num);

    printf("Enter the no. of positions to shift:");
    scanf("%d", &shift);

    printf("Left shift (%d << %d) = %d\n", num, shift, num << shift);
    printf("Right shift (%d >> %d) = %d\n", num, shift, num >> shift);

    return 0;
}