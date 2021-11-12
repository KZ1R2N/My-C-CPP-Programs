#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    long long n, w, m, a, remain;
    while (t--)
    {
        scanf("%lld%lld%lld", &n, &w, &m);
        n++;
        remain = m - (n * w);
        if (remain <= 0)
            printf("0\n");
        else
        {
            a = remain / w;
            if (remain % w == 0)
                printf("%lld\n", a);
            else
                printf("%lld\n", a + 1);
        }
    }

    return 0;
}