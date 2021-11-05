#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int lenth;
        cin >> lenth;
        string str;
        cin >> str;
        for (int i = 0; i < lenth; i++)
        {
            if (str[i] == 'U')
            {
                str[i] = 'D';
            }
            else if (str[i] == 'D')
            {
                str[i] = 'U';
            }
        }
        cout << str << endl;
    }

    return 0;
}
