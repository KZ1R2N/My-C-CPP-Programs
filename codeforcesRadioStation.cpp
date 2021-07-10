#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int first_input, second_input;
    string str1, str2, str3, str4;
    cin >> first_input >> second_input;

    map<string, string> mp;
    for (int i = 0; i < first_input; i++)
    {
        cin >> str1 >> str2;
        str2 += ';';
        mp[str2] = str1;
    }
    for (int i = 0; i < second_input; i++)
    {
        cin >> str3 >> str4;
        cout << str3 << " " << str4 << " "
             << "#" << mp[str4] << endl;
    }

    return 0;
}
