#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int input, count = 0;

    int count2 = 1;

    cin >> input;
    string str[input];

    for (int i = 0; i < input; i++)
    {

        cin >> str[i];
    }

    for (int i = 0; i < str[0].length(); i++)
    {
        for (int j = 0; j < input - 1; j++)
        {
            if (str[j][i] == str[j + 1][i])
                continue;
            else
            {
                count2 = 0;
                break;
            }
        }

        if (count2)
            count++;
        else
            break;
    }

    cout << count << endl;

    return 0;
}