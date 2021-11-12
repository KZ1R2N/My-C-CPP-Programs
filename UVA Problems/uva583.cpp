#include <bits/stdc++.h>

using namespace std;

int ar[1000010] = {0};
vector<int> v;

void sieve()
{
    int i, j, n = 1000010;
    v.push_back(2);
    for (i = 3; i < n; i += 2)
    {
        if (ar[i] == 0)
        {
            v.push_back(i);
            if (i > n / i)
                continue;
            for (j = i * i; j < n; j += (i + i))
                ar[j] = 1;
        }
    }
}

int main()
{
    int i, n, count2, value, value2;

    sieve();

    while (scanf("%d", &n) == 1 && n)
    {
        if (n < 0)
        {
            cout << n << " = -1 x ";
            n = n * (-1);
        }
        else
            cout << n << " = ";

        for (i = 0; n > 1 && i < v.size(); i++)
        {

            while (n % v[i] == 0)
            {
                n /= v[i];
                cout << v[i];
                if (n > 1)
                    cout << " x ";
            }
        }
        if (n > 1)
            cout << n;
        cout << endl;
    }
    return 0;
}