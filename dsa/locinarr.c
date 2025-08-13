#include<stdio.h>

int main()
{
    int arr[20], i, n, x;

    printf("Enter no. of inputs\n");
    scanf("%d",&n);

    printf("Enter elements\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element you want to search\n");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            printf("found\n");
            printf("at index %d\n",i);
            return 0;
        }
    }

    printf("Item not found!\n");
    return 0;
}