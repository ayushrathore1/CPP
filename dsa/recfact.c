#include<stdio.h>

int rec(int x);

int main()
{
    int n, fact;
    printf("Enter a number\n");
    scanf("%d",&n);
    fact = rec(n);
    printf("Factorial of %d is %d",n,fact);
}

int rec(int x)
{
    if(x == 0 || x == 1)
    {
        return 1;
    }
    else{
        return x * rec(x-1);
    }
}