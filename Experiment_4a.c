# include<stdio.h>

int global_number = 10;

void print_global() {
    printf("From print_global: %d\n", global_number);
}

void modify_global() {
    global_number = 40;
    printf("From modify_global: %d\n", global_number);
}


void main() {
    print_global();
    modify_global();
    print_global();
}