#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;
}Node;

typedef struct ListStack
{
    Node *head;
}ListStack;

typedef ListStack Stack; //재정의

void StackInit(Stack *ptrStack)
{
    ptrStack->head=NULL;
}
int IsEmpty(Stack *ptrStack)
{
    if(ptrStack->head==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(Stack *ptrStack, int data)
{
    Node *newnode = (Node*)malloc(sizeof(Node));
    newnode->data = data;
    newnode->link = ptrStack->head;

    ptrStack->head = newnode;
}
int pop(Stack *ptrStack)
{
    int targetData;
    Node *targetNode;

    if(IsEmpty(ptrStack))
    {
        printf("Stack Memory Error");
        exit(-1);
    }
    targetData = ptrStack->head->data;
    targetNode = ptrStack->head;

    ptrStack->head=ptrStack->head->link;
    free(targetNode);

    return targetData;
}
int peek(Stack *ptrStack)
{
    if(IsEmpty(ptrStack))
    {
        printf("Stack Memory Error!");
        exit(-1);
    }
    return ptrStack->head->data;
}

int main()
{
    Stack stack;
    StackInit(&stack);

    push(&stack,10);
    push(&stack,20);
    push(&stack,30);

    while(!IsEmpty(&stack))
    {
        printf("pop:%d\n",pop(&stack));
    }

    return 0;
}