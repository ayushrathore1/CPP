#include<stdio.h>

#define N 5

int QUEUE[N];
int FRONT = -1;
int REAR = -1;

void enqueue(int x)
{
    if(REAR == N -1)
    {
        printf("OVERFLOW");
        return;
    }
    else if(FRONT == -1)
    {
        FRONT = REAR = 0;
        QUEUE[REAR] = x;
    }
    else{
        REAR++;
        QUEUE[REAR] = x;
    }
}

int dequeue()
{
    if(FRONT == -1 || FRONT > REAR)
    {
        printf("UNDERFLOW\n");
        return -1;
    }
    else
    {
        return QUEUE[FRONT++];
    }
}

int isEmpty()
{
    return FRONT == -1 || FRONT > REAR;
}

int isFull()
{
    return REAR == N -1;
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(31);
    enqueue(32);
    enqueue(33);
    printf("Dequeued element: %d\n",dequeue());
    printf("Dequeued element: %d\n",dequeue());
    printf("Dequeued element: %d\n",dequeue());
    printf("Dequeued element: %d\n",dequeue());
    printf("Dequeued element: %d\n",dequeue());
    printf("Dequeued element: %d\n",dequeue());
    printf("Is QUEUE empty ? %s\n", isEmpty() ? "YES" : "NO" );
    return 0;

}