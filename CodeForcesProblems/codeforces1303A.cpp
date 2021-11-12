#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    int count, first_one, last_one, i;
    cin >> test_case;
    string str;
    while (test_case--)
    {
        count = 0, first_one = 0, last_one = 0;
        cin >> str;
        for (i = 0; i < str.length(); i++)
        {
            if (str[i] == '1')
            {

                first_one = i;
                break;
            }
        }
        for (i = str.length(); i >= first_one; i--)

        {
            if (str[i] == '1')
            {
                last_one = i;
                break;
            }
        }
        for (i = first_one; i < last_one; i++)
        {
            if (str[i] == '0')
                count++;
        }

        cout << count << endl;
    }
}