#include<stdio.h>

#define MAXSTK 5

int TOP = -1;
int STACK[MAXSTK];

void push(int ITEM);
void pop();
void display();


int main()
{
   int ITEM;
  
    push(10);
    push(40);
    push(20);

    pop();

    display();





}

void push(int ITEM)
{
    if(TOP == MAXSTK -1)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        TOP = TOP + 1;
        STACK[TOP] = ITEM;
        printf("ITEM %d is inserted\n",ITEM);
    }
}

void pop()
{
    if(TOP == -1)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        int item = STACK[TOP];
        TOP = TOP - 1;
        printf("%d ITEM is popped out\n",item);
    }
}

void display()
{
    if(TOP == -1)
    {
        printf("UNDERFLOW\n");

    }
    else
    {
        for(int i = 0; i <= TOP ;i++)
        {
            printf("%d ",STACK[i]);
        }
    }
}