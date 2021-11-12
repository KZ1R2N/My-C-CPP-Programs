#include <stdio.h>
void selectionSor(int a[], int n)
{
    int i, j, position, swap;
    for (i = 0; i < n - 1; i++)
    {
        position = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[position] > a[j])
                position = j;
        }
        if (position != i)
        {
            swap = a[i];
            a[i] = a[position];
            a[position] = swap;
        }
    }
    printf("Sorted Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
int main()
{
    int a[100], n, i, j, position, swap;
    printf("Enter number of element: ");
    scanf("%d", &n);
    printf("Enter %d Numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    selectionSor(a, n);

    return 0;
}