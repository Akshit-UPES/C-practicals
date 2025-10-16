#include <stdio.h>

int main() {
    int num, positive = 0, negative = 0, zero = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num > 0)
            positive++;
        else if(num < 0)
            negative++;
        else
            zero++;

        printf("Do you want to continue (y/n)? ");

        while ((getchar()) != '\n');
        scanf("%c", &choice);
    } while(choice == 'y' || choice == 'Y');

    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zero numbers: %d\n", zero);

    return 0;
}
