#include <stdio.h>
int stack[50];
int choice, maxstack = 0, top = 0, item, i;
void push(int maxstack)
{

    if (top == maxstack)
    {
        printf("\n\tSTACK is overflow");
    }
    else
    {
        printf(" \nEnter a value you want to push : ");
        scanf("%d", &item);
        stack[top] = item;
    }
    top++;
}
void pop()
{

    if (top <= -1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d", stack[top]);
        top--;
    }
}

void display()
{

    if (top >= 0)
    {
        printf("\n The elements in STACK \n");
        for (i = top; i >= 0; i--)
            printf("\n%d", stack[i]);
    }
    else
    {
        printf("\n The STACK is empty");
    }
}
int main()
{

    top = -1;
    printf("\n Enter the size of STACK maximum 50 :  ");
    scanf("%d", &maxstack);
    printf("\n\t STACK IMPLEMENTATION");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    while (choice != 4)
    {
        printf("\n\n Enter the Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push(maxstack);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\n\t EXITED ");
            break;
        }
        }
    }
    void push();

    void pop();

    void display();
}