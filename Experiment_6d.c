#include <stdio.h>


int ISPRIME(int num) {
    if (num <= 1) {
        return 0; 
    }
    if (num == 2) {
        return 1; 
    }
    if (num % 2 == 0) {
        return 0; 
    }
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (ISPRIME(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
