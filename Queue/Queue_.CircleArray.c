//원형 큐
#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int queue[MAX];
int front=0,rear=0; 

void enQueue(int item)
{
    rear = (rear+1)%MAX; //Queue_Arrary와는 다르게, 먼저 rear값을 증가시킨다.
    if(rear==front)
    {
        printf("Queue is Full");
        exit(1);
    }
    else
        queue[rear]=item;
}

int deQueue()
{
    if(front==rear)
    {
        printf("Queue is Empty");
        exit(1);
    }
    else
    {
        front = (front+1)%MAX; //먼저 front값을 증가시킨다. 11번줄과 이 줄의 식은 1,2,3....MAX 값으로 계속 반복된다.
        return queue[front];
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
    else
        return queue[front+1];
}

void display()
{
    int first,last;
    first = (front+1)%MAX;
    last = (rear+1)%MAX;
    int i=first;
    while(i!=last)
    {
        printf("%2c",queue[i]);
        i=(i+1)%MAX;
    }
    printf("\t front=%d, rear=%d\n",front,rear);
}

int main()
{
    
    return 0;
}