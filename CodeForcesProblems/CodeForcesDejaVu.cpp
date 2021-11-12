#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count, test_case;
    string str1, str2, str3;
    cin >> test_case;
    while (test_case--)
    {
        cin >> str1;
        int count = 1;
        for (int i = 0; i < str1.size(); i++)
        {
            if (str1[i] != 'a')
            {
                count = 0;
                break;  
            }
        }
        if (count == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        str2 = str1 + 'a';
        str3 = str2;
        reverse(str3.begin(), str3.end());
        if (str2 == str3)
        {
            cout << 'a' + str1 << endl; 
        }
        else
        {
            cout << str1 + 'a' << endl;
        }
        }
    }
}