#include <stdio.h>
int prime_nmbr(int ratun)
{
    int i, c = 0;
    for (i = 1; i <= ratun; i++)
    {
        if (ratun % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
        return 1;
    else
        return 0;
}
int main()
{
    int adiba;
    printf("enter a number\n");
    scanf("%d", &adiba);
    if (prime_nmbr(adiba) == 1)
        printf("This number Is a prime number\n");
    else
        printf("this number is not a prime number\n");

    return 0;
}