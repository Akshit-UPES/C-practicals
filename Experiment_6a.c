# include<stdio.h>

int fact_recursive(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact_recursive(n-1);
    }
}
int fact_non_recursive(int n)
{
        int fact = 1;
        for(int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        return fact;
}
    
int main() 
{
        int n, r;
        printf("Enter a value of n:");
        scanf("%d", &n);
        printf("Enter a value of r:");
        scanf("%d", &r);

        printf("Factorial of %d: %d\n", n, fact_recursive(n));
        printf("Factorial of %d: %d\n", r, fact_non_recursive);
        return 0;
}
