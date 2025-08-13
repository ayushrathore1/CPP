#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *TOP  = 0;

void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    newnode -> data = x;
    newnode -> next = TOP;

    TOP = newnode;

}

void display()
{
    struct node *temp;
    temp = TOP;
    if(TOP == 0)
    {
        printf("UNDERFLOW\n");
    }
    else{
        while(temp != 0)
        {
            printf("%d\t",temp -> data);
            temp = temp-> next;
        }
    }
}

void peek()
{
    if(TOP == NULL)
    {
        printf("UNDERFLOW\n");
    }
    else{
        printf("%d\t",TOP->data);
    }
}

void pop()
{
    struct node *temp;
    temp = TOP;
    if(TOP == NULL)
    {
        printf("UNDERFLOW\n");
    }
    else{
        printf("%d deleted\n",TOP ->data);
        TOP = TOP->next;
        free(temp);
    }
}

int main()
{
    push(9);
    push(10);
    push(11);
    push(12);
    push(13);
    display();
    peek();
    pop();
    peek();
    display();
    return 0;
}