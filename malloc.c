#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rat = 1, *fuc;
    fuc = (int *)malloc(1000 * sizeof(int));
    printf("Enter Test Case: ");
    scanf("%d", &rat);
    while (rat--)
    {
        int Case = 1;
        printf("Enter the element of an array: \n");
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", fuc + i);
        }
        for (int i = 0; i < 5; i++)
        {
            printf("Case %d: --> %d \n", Case, *(fuc + i));
            Case++;
        }
        printf("\n");
        free(fuc);
    }

    return 0;
}
