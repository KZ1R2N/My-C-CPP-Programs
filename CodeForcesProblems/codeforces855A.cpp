#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    string str;
    map<string, int> mp;
    cin >> test_case;
    while (test_case--)
    {
        cin >> str;
        if (mp[str] == 0)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
        mp[str]++;
    }

    return 0;
}
