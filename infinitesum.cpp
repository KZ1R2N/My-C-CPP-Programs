#include <stdio.h>

int main()
{
    int x, n, i, j = 0, mod, sum = 0;
    while (true)
    {

        printf("Please insert 2 number : ");

        scanf("%d%d", &x, &n);

        for (i = x; i <= n; i++)
        {
            j = i;
            int sum2 = 0;
            while (j != 0)
            {
                mod = j % 10;
                sum2 = sum2 + mod;
                sum = sum + mod;
                j = j / 10;
            }

            printf("Digit summation of %d is %d\n", i, sum2);
        }
        printf("sum = %d\n", sum);
    }
}