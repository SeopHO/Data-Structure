//큐 연결리스트로 구현
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;
}Node;

Node *front,*rear;

void In_queue(int item)
{
    Node *newnode = (Node*)malloc(sizeof(Node));
    newnode->data = item;
    newnode->link = NULL;
    
    if(front==NULL)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->link = newnode;
        rear = newnode;
    }
}

int Del_queue()
{
    Node *temp = front;
    int item;
    if(front==NULL)
    {
        printf("Queue is Empty");
        exit(1);
    }
    else
    {
        item = front->data;
        front = front->link;
        if(front==NULL)
        {
            rear = NULL;
        }
        free(temp);
        return item;
    }
}

int main()
{
    return 0;
}