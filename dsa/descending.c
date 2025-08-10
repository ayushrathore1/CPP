#include<stdio.h>

int main()
{
    int i, j, n, arr[100], temp;

    printf("How many numbers do you want to input ? \n");
    scanf("%d", &n);

    printf("Enter numbers\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("You entered numbers\n");
    for(i = 0; i < n-1; i++)
    
    {
        printf("%d\t",arr[i]);
    }
    for(j = 0; j < n; j++)
    {
        for(i = 0; i < n - 1- j; i++)
    {
        if(arr[i+1] > arr[i])
        {
            temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;        
        }
    } 
    }
   
    
    

    printf("\nNumbers in descending order\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}