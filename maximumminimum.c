#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a < b && c)

        printf("\n1st %d", a);

    else if (b < a && c)
    {

        printf("\n2nd %d", b);
    }
    else if (c < a && b)
    {

        printf("\n3rd %d", c);
    }
}