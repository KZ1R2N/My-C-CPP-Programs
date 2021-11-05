#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int size;
        cin >> size;
        string str;
        cin >> str;
        int ans = 0;
        map<char, int> mp;
        for (int i = 0; i < size; i++)
        {
            mp[str[i]]++;
            char x = str[i];
            while (str[i] == x)
            {
                i++;
            }
            i--;
            if (mp[x] > 1)
                ans = 1;
        }
        if (ans == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
