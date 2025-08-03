#include<stdio.h>

#define N 5
int TOP = -1;
int STACK[N];

void push(int x)
{
    if(TOP == N - 1)
    {
        printf("OVERFLOW\n");
    }
    else{
            TOP = TOP + 1;
            STACK[TOP] = x;
            printf("%d inserted \n", STACK[TOP]);
        }
}

void display()
{
    int i = TOP;
    if(TOP == -1)
    {
        printf("UNDERFLOW\n");
    }
    else{
        while(i != -1)
        {
            printf("%d\t", STACK[i]);
            i--;
        }
    }
}

void peek()
{
    if(TOP == -1)
    {
        printf("UNDERFLOW\n");
    }
    else{
        printf("\n%d\n", STACK[TOP]);
    }
}

void pop()
{
    if(TOP == -1)
    {
        printf("UNDERFLOW\n");
    }
    else{
        printf("%d deleted\n",STACK[TOP]);
        TOP = TOP - 1;
    }
}





int main()
{
    push(2);
    push(3);
    push(4);
    display();
    peek();
    pop();
    pop();
    display();

    return 0;
}