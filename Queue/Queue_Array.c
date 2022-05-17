//큐 배열로 구현.
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX];
int front=-1; //삭제가 일어나는 부분.
int rear=-1; //삽입이 일어나는 부분.

void In_queue(int item)
{
    if(rear>=MAX-1)
    {
        printf("Queue is Full");
        exit(1);
    }
    queue[++rear] = item; 
}

int Del_queue()
{
    if(front==rear)
    {
        printf("Queue is Empty");
        exit(1);
    }
    else
    {
        return queue[++front];
    }
}

void del()
{
    if(front==rear)
    {
        printf("Queue is Empty");
        exit(1);
    }
    else
        front++;
}

int peek()
{
    if(front==rear)
    {
        printf("Queue is Empty");
        exit(1);
    }
    return queue[front+1];
}

int main()
{

    return 0;
}