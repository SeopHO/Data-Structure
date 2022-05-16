#include <stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;

void push(int item)
{
    if(top==MAX)
    {
        printf("Stack Full!!");
        return; 
    }
    else
    {
        stack[++top] = item; 
    }
}

int pop()
{
    if(top==-1)
    {
        printf("Stack Empty!!");
        return top;
    }
    return stack[top--];
}


int peek()
{
    if(top==-1)
    {
        printf("Stack Empty!!");
        
    }
    return stack[top];
}

void print()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d ",stack[i]);
    }
}

int main()
{   
    return 0;
}