#include <stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push(int x)
{
    if (top < CAPACITY - 1)
    {
        top = top + 1;
        stack[top] = x;
        printf("successfully added item: %d\n", x);
    }
    else
    {
        printf("exception! no spaces.\n");
    }
}

int pop()
{
    if (top >= 0)
    {
        int val = stack[top];
        top = top - 1;
        return val;
    }
    printf("exception from pop ! empty stack.\n");
    return -1;
}

int peek()
{
    if (top >= 0)
    {
        return stack[top];
    }
    printf("exception freom peek! empty stack.\n");
    return -1;
}
int main()
{
    printf("implementing my stack in c.\n");
    peek();
    push(10);
    push(20);
    push(30);
    printf("pop item : %d\n", pop());
    push(40);
    printf("TOP of stack : %d \n", peek());
    return 0;
}