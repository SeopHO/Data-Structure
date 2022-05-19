#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *leftLink;
    struct Node *rightLink;
}Node;

typedef struct
{
    Node *front,*rear;
}Node;

Node *createDequeue()
{
    Node *newnode = (Node*)malloc(sizeof(Node));
    newnode->front = NULL;
    newnode->rear = NULL;
    return newnode;
}



int main()
{

}