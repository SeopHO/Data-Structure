#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char stack[10];
int top=-1;

void push(char item)
{
    if(top>=9)
    {
        printf("Stack is Full");
        exit(1);
    }
    stack[++top] = item;
}

char pop()
{
    if(top==-1)
    {
        printf("Stack is Empty");
        exit(1);
    }
    else
    {
        return stack[top--];
    }
}

char peek()
{
    if(top==-1)
    {
        printf("Stack is Empty");
        exit(1);
    }
    return stack[top];
}

int priority(char ch) //연산자 우선순위 반환 함수.
{
    switch(ch)
    {
        case '(':
        case ')':
            return 0;
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
    }
    return -1;
}

char infix_to_postfix(char exp[])
{
    char ch,top_op;
    int len = strlen(exp);

    for(int i=0;i<len;i++)
    {
        ch = exp[i];
        switch(ch)
        {
            case '+':
            case '-':
            case '*':
            case '/':
                while((top!=-1) && (priority(ch)<=priority(peek())))
                {
                    printf("%2c",pop());
                }
                push(ch);
                break;
            case '(':
                push(ch);
                break;
            case ')':
                top_op = pop();
                while(top_op!='(')//( <-을 만날 때 까지 출력한다.
                {
                    printf("%2c",top_op);
                    top_op=pop();
                }
                break;
            default:
                printf("%2c",ch);
                break;
        }
    }
    while(top!=-1) //스택에 저장되어있는 연산자들 출력.
    {
        printf("%2c",pop());
    }
    printf("\n");
}

int main()
{
    char exp[] = {"8/2-(3+3*2)"};
    int len = strlen(exp);

    printf("산술식:");
    for(int i=0;i<len;i++)
    {
        printf("%2c",exp[i]);
    }
    printf("\n");

    printf("후위 표기법:");
    infix_to_postfix(exp);
    return 0;
}