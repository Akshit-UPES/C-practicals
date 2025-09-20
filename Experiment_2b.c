# include<stdio.h>

int main() {
    int celsius;
    printf("Enter temperature in celsius:");
    scanf("%d", &celsius);

    int fahrenheit = (celsius * 9/5) + 32;
    printf("The temperature from celsius to temperature is %d", fahrenheit);
    return 0;
}