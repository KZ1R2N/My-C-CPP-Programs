#include <stdio.h>
int main()
{
    int T;
    long int a;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%ld", &a);
        if (a % 18 == 0)
        {
            printf("YES!\n");
        }
        else
            printf("NO!\n");
    }
    return 0;
}