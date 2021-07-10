#include <bits/stdc++.h>
using namespace std;

int main()
{
    //    freopen("input.txt", "r", stdin);
    int t, a, i, j, n, c = 0, ar[100010] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        ar[a]++;
    }
    for (i = 0; i < n; i++)
    {
        if (ar[i] > 0)
        {
            c++;
            printf("%d ", i);
        }
    }
    printf("\n%d", c);

    return 0;
}