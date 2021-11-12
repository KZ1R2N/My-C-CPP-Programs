#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int tn = 1;
    while (cin >> s)
    {
        int n, r, w, c;
        cin >> n;
        printf("Case %d:\n", tn++);
        for (int i = 1; i <= n; i++)
        {
            cin >> r >> w;
            c = 0;
            for (int i = min(r, w); i < max(r, w); i++)
            {
                if (s[i] == s[i + 1])
                    continue;
                else
                {
                    c = 1;
                    break;
                }
            }
            if (c == 0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}