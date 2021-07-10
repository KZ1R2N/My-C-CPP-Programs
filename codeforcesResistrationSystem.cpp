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
            cout << "OK" << endl;
        }
        else
            cout << str << mp[str] << endl;
        mp[str]++;
    }

    return 0;
}
