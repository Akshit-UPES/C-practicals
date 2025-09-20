#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c;
    printf("Enter the sides of the triangle : ");
    scanf("%f%f%f", &a,&b,&c);

    if(a+b>c || b+c>a || a+c>b)
    {
        printf("\nThe given triangle is valid.");
        if(a==b && b==c)
            printf("\nThe given triangle is an equilateral triangle.");
        if(a==b && a!=c || b==c && b!=a || a==c && c!=b)
            printf("\nThe given triangle is a isosceles triangle.");
        if(a!=b && b!=c && a!=c)
            printf("\nThe given triangle is a scalene triangle.");
    }
    else
        printf("\nThe given triangle is not valid.");
}