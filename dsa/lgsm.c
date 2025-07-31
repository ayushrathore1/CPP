#include<stdio.h>

int main()
{
    int i, p, n, arr[100], temp;

    printf("How many numbers do you want to input ? \n");
    scanf("%d", &n);

    printf("Enter numbers\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("You entered numbers\n");
    for(i = 0; i < n; i++)
    
    {
        printf("%d\t",arr[i]);
    }
    for(p = 0; p < n - 1; p++)
    {
        for(i = 0; i < n - 1 - p; i++)
        {
         if(arr[i] < arr[i + 1])
            {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;        
            }
        } 
    }
   
printf("\nNumbers in descending order\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\nlargest number: %d\n",arr[0]);  
    printf("\nsecond largest number: %d\n",arr[1]);  
    printf("\nsmallest number: %d\n",arr[n-1]);  
    printf("\nsecond smallest number: %d\n",arr[n-2]);  
    

    
  
    return 0;
}