#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;

    cin >> str;
    string str2;
    str2 = "hello";
    int count = 0;
    int count2 = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str2[count])
        {
            count++;

            count2++;
        }
    }
    if (count2 == str2.size())
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}
