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
    int i, j, n, x, y, p = 0;
    sieve();
    //    for(i=0;i<v.size();i++) cout<<v[i]<<' ';
    int input;
    cin>>input;
       for(i=0;i<input;i++) cout<<v[i]<<' ';
  

    return 0;
}
