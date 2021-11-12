#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n, i, a, j, count = 0;
    while (cin >> n)
    {
        int arr[200] = {0};
        if (n == 0)
            break;
        else
        {

            for (i = 0; i < n; i++)
            {
                scanf("%d", &a);
                arr[a] = arr[a] + 1; //5 4 3 2 1
                count++;
            }
            //for(i=1;i<=9;i++)
            //{
            //    printf("index %d  = %d \n",i,arr[i]);
            //}
            for (i = 0; i <= 100; i++)
            {
                a = arr[i];
                for (j = 1; j <= a; j++)
                {
                    cout << i; //1 2 3 4 5
                    count--;
                    printf("%d ", i);
                    if (count > 0)
                        cout << " ";
                }
            }
            printf("\n");
        }
    }
    // for (i = 0; i <= 110; i++)
    // {
    //     arr[i] = 0;
    // }
}