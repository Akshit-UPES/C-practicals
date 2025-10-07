# include<stdio.h>

void counter() {
    static int static_count = 0;
    int regular_count = 0;

    static_count++;
    regular_count++;

    printf("Static: %d, Regular: %d\n", static_count, regular_count);
}

void main() {
    counter();
    counter();
    counter();
}