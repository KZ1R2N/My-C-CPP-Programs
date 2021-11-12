#include <stdio.h>

int main()
{
    int number;
    printf("Please enter a number: \n");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("This number is a positive value\n");
    }
    else if (number < 0)
    {
        printf("The Number is a negative value\n");
    }
    else if (number == 0)
    {
        printf("This number is equal to zero\n");
    }

    return 0;
}
