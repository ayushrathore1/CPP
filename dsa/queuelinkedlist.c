#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *FRONT = 0;
struct node *REAR = 0;

void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->next = 0;

    if(FRONT == 0 && REAR == 0)
    {
        FRONT = REAR = newnode;
    }
    else
    {
        REAR->next = newnode;
        REAR = newnode;

    }

}

void display()
{
    struct node *temp;
    if(FRONT == 0 && REAR == 0)
    {
        printf("UNDERFLOW\n");
    }
    else{
        temp = FRONT;
        while(temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
       
    }
}

void dequeue()
{
    struct node *temp;
    temp = FRONT;
    if(FRONT == 0 && REAR == 0)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        FRONT = FRONT->next;
        printf("%d is deleted",temp-> data);
        free(temp);
    }
}

void peek()
{
    if(FRONT == 0 && REAR == 0)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        printf("%d\n",FRONT->data);
    }
}
int main()
{
    enqueue(2);
    enqueue(26);
    enqueue(25);
    display();
    dequeue();
    enqueue(24);
    display();
    peek();

    return 0;
}
