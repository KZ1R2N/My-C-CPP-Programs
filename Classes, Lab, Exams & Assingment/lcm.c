#include <stdio.h>

int main()
{
    int a, b, x;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < a; i++)
    {
        if (a % i == 0 || b % i == 0)
        {
            x = i;
        }
        printf("%d\n", i);
    }

    return 0;
}
