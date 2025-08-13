#include<stdio.h>
#define N 5
int queue[N];
int FRONT = -1;
int REAR = -1;

void enqueue(int x)
{
    if(FRONT == (REAR + 1)%N)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        
    }
}

int main()
{
    enqueue(2);
    display();
    dequeue();

}