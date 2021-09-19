#include <stdio.h>
int main()
{
    int data[50], BEG, END, mid, item, loc, n;
    printf("enter the size of array element: ");
    scanf("%d", &n);
    printf("enter array elements: ");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &data[i]);
    }
    printf("enter search item: ");
    scanf("%d", &item);
    BEG = 1;
    END = n;
    while (BEG <= END && data[mid] != item)
    {
        mid = ((BEG + END) / 2);

        if (data[mid] == item)
        {
            loc = mid;
            printf("item found at index: %d", mid);
            return 0;
        }

        else if (item > data[mid])
        {
            BEG = mid + 1;
        }
        else
        {

            END = mid - 1;
        }
    }

    printf("item not found.....!");

    return 0;
}