#include<stdio.h>
void main()
{
    float w,h;
    printf("Enter weight and height : ");
    scanf("%f%f", &w,&h);
    float bmi=w/(h*h);
    if(bmi<=15)
        printf("\nSTARVATION.\n BMI : %f", bmi);
    else if(bmi<17.5)
        printf("\nANOREXIC\nBMI : %f", bmi);
    else if(bmi<18.5)
        printf("\nUNDERWEIGHT\nBMI : %f",bmi);
    else if(bmi<24.9)
        printf("\nIDEAL\nBMI : %f",bmi);
    else if (bmi<25.9)
        printf("\nOVERWEIGHT\nBMI : %f",bmi);
    else if (bmi<39.9)
        printf("\nOBESE\nBMI : %f",bmi);
    else 
        printf("\nMORBIDITY OBESE\nBMI : %f",bmi);
}