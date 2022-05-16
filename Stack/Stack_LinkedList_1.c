#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *link;
}Node;

Node *top = NULL;

void push(int item)
{
    Node *newnode = (Node*)malloc(sizeof(Node));
    newnode->data = item;
    newnode->link = top;
    top=newnode;
}

int pop()
{
    int item;
    Node *newnode = top;
    if(top==NULL)
    {
        printf("Stack Empty!!");
        return 0;
    }
    else
    {
        item = newnode->data;
        top = newnode->link;
        free(newnode);
        return item;
    }
}

int peek()
{
    int item;
    if(top==NULL)
    {
        printf("Stack Empty!!");
        return 0;
    }
    else
    {
        item = top->item;
        return item;
    }
}

int main()
{

    return 0;
}