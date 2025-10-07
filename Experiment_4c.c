# include<stdio.h>

void main() {
    int x = 40;

    {
        int y = 30;
        printf("Inside x: %d, y = %d\n", x, y);
    }

    printf("Outside: x = %d\n", x);


    
}