#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
int main()
{
    cout << "enter a decimal number\n";
    cin >> str;
    for (i = 0; i < str.size(); i++)
    {
        if (str[i] == '.')
            break;
    }

    for (j = i + 1; j < str.size(); j++)
    {
        cout << str[j];
    }
}