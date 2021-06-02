#include <stdio.h>

int main()
{
    int count, limit;
    int odd = 0;

    scanf("%d%d", &count, &limit);

    while (count <= limit)
    {
        if (count % 2 != 0)
        {
            odd++;
        }
        count++;
    }
    printf("%d", odd);
    return 0;
}