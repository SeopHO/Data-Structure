// 스택을 이용한 후위 표기법 연산
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        return stack[top--];
}
char peek()
{
    if(top==-1)
    {
        printf("Stack is Empty");
    }
    return stack[top];
}

void print_stack()
{
    for(int i=0;i<=top;i++)
    {
        printf("%3c",stack[i]);
    }
    printf("\n");
}

int eval(char exp[])
{
    int item1,item2,value;
    int len = strlen(exp);
    char ch;

    for(int i=0;i<len;i++)
    {
        ch = exp[i];
        if(ch!='+' && ch!='-' && ch!='*' && ch!='/')
        {
            value = ch-'0'; //입력이 피연산자라면,
            push(value);
        }
        else //연산자면 피연산자를 스택에서 제거해준다.
        {
            item2 = pop();
            item1 = pop();
            switch(ch) //연산을 수행하고, 스택에 저장한다.
            {
                case '+': 
                    push(item1+item2);
                    break;
                case '-':
                    push(item1-item2);
                    break;
                case '*':
                    push(item1*item2);
                    break;
                case '/':
                    push(item1/item2);
                    break;
            }
        }
    }
    return pop();
}

int main()
{
    int result;
    printf("후위표기식은 82/3-32*+\n");
    result = eval("82/3-32*+");
    printf("result = %d\n",result);
    return 0;
}