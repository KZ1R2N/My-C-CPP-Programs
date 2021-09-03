#include <bits/stdc++.h>
using namespace std;
int ar[100010];
vector<int> v;
void sieve()
{
    int i, j, n = 100010;
    v.push_back(2);
    for (i = 3; i < n; i += 2)
    {
        if (ar[i] == 0)
        {
            v.push_back(i);
            if (i > n / i)
                continue;
            for (j = i * i; j <= n; j += (i + i))
                ar[j] = 1;
        }
    }
}
int main()
{
    int i, j, k, x, y, n, count, count2 = 0;
    sieve();
    while (scanf("%d", &n) == 1 && n) //2
    {
        int value = n;
        count2 = 0;
        for (i = 0; v[i] * v[i] <= n; i++)
        {
            if (n % v[i] == 0)
            {
                count = 0;
                while (n % v[i] == 0)
                {
                    n /= v[i];
                    count++;
                }
                // v.push_back((v[i], count));
                // cout << v[i] << " " << count << endl;
                count2++;
            }
        }
        if (n != 1)
        {
            //v.push_back((n, 1));
            count2++;

            //cout << n << " " << 1 << endl;
        }
        cout << value << " : " << count2 << endl;
        // for (i = 0; i < v.size(); i++)
        // {
        //     cout << v[i].first << " " << v[i].second << endl;
        // }
    }
}