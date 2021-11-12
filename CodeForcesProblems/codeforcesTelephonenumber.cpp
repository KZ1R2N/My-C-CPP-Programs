#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    int test_case;
    string str;
    cin >> test_case;
    while (test_case--)
    {
        cin >> size;
        cin >> str;
        int count = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '8' && str.size() - i >= 11)
            {
                count = 1;
                break;
            }
        }
        if (count == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

// count = 0;
// first_eight = 0;
// last_eight = 0;

// cin >> size;
// for (int i = 0; i < size; i++)
// {
//     cin >> str[i];
// }
// for (int i = 0; i < str.size(); i++)
// {
//     if (str[i] == '8')
//     {

//         first_eight = i;
//         count++;
//         break;
//     }
// }
// for (int i = str.length(); i >= first_eight; i--)

// {
//     if (str[i] == '8')
//     {
//         last_eight = i;
//         break;
//     }
// }
// for (int i = first_eight; i < last_eight; i++)
// {
//     if (str[i] != '8')
//         count++;
// }
// if (size - count <= 11)
// {
//     cout << "No" << endl;
// }
// else
//     cout << "yes" << endl;
// }

// return 0;
// }
