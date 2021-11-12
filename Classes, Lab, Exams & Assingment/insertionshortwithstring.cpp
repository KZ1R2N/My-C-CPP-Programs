#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lenth;
    cin >> lenth;
    // int str[lenth];
    string str;
    for (int i = 0; i < lenth; i++)
    {
        cin >> str[i];
    }
    //getline(cin,str);
    int i, key, position;
    for (i = 1; i < lenth; i++) //3 4 5 2 1
    {
        key = str[i];
        position = i;

        while (position >= 0 && str[position - 1] > key)
        {
            str[position] = str[position - 1];
            position = position - 1;
        }
        str[position] = key;
    }
    for (int i = 0; i < lenth; i++)
    {
        cout << str[i] << " ";
    }

    return 0;
}
