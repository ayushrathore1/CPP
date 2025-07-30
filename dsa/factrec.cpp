#include<stdio.h>

int fact(int n);

int main()
{
    int n,ans;

    printf("Enter a number: ");
    scanf("%d", &n);

    ans = fact(n);
    printf("factorial of %d is %d",n,ans);
    


}

int fact(int n)
{
    if(n == 1 )
    {
        return 1;
    }
    else return n * fact(n-1);


}