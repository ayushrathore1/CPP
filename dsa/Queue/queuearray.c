#include<stdio.h>
#define MAX 5

int QUEUE[MAX];
int FRONT = -1;
int REAR = -1;

void enqueue(int data)
{
    if(REAR == MAX - 1)
    {
        printf("OVERFLOW\n");
    }
    else if(FRONT == -1)
    {
        FRONT = REAR = 0;
        QUEUE[REAR] = data;
    }
    else{
        REAR++;
        QUEUE[REAR] = data;
    }
}

void dequeue()
{   int ITEM;
    if(FRONT == -1 || FRONT > REAR)
    {
        printf("UNDERFLOW\n");
    }
    else if(FRONT == REAR)
    {   
        ITEM = QUEUE[FRONT];
        printf("%d deleted\n", ITEM);
        FRONT = 0;
    }
    else{
        ITEM = QUEUE[FRONT];
        FRONT++;
        printf("%d deleted\n",ITEM);
    
    }
}

void display()
{
    if(FRONT == -1 || FRONT > REAR)
    {
        printf("UNDERFLOW\n");
    }
    else 
    {   
        int temp = FRONT;
        while(temp <= REAR)
        {
            printf("%d ",QUEUE[temp]);
            temp++;
        }
        printf("\n");
    }
}
int main()
{
    enqueue(1);
    enqueue(3);
    enqueue(32);
    enqueue(24);
    enqueue(324);
    enqueue(34);
    display();
    dequeue();
    dequeue();

    return 0;
}
