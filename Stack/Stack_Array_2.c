#include <stdio.h>
#define MAX 10
typedef struct ArrayStack
{
    int ArrayStack[MAX];
    int topIndex;
}ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack *ptrStack)
{
    ptrStack->topIndex=-1;
}

int IsEmpty(Stack *ptrStack)
{
    if(ptrStack->topIndex == -1)
        return 1;
    else
        return 0;
}

void push(Stack *ptrStack,int data)
{
    ptrStack->topIndex+=1;
    ptrStack->ArrayStack[ptrStack->topIndex] = data;
}

int pop(Stack *ptrStack)
{
    int target;
    if(IsEmpty(ptrStack))
    {
        printf("Stack is EMPTY!!");
    }
    target = ptrStack->ArrayStack[ptrStack->topIndex];
    //target = ptrStack->topIndex;
    ptrStack->topIndex -=1;

    return target;
    // return ptrStack->ArrayStack[target];
}

int peek(Stack *ptrStack)
{
    if(IsEmpty(ptrStack))
    {
        printf("Stack is EMPTY!!");
        return -1;   
    }
    return ptrStack->ArrayStack[ptrStack->topIndex];
}

int main()
{
    Stack stack;
    StackInit(&stack);

    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    while(!IsEmpty(&stack))
        printf("pop:%d\n",pop(&stack));
    
    return 0;
}