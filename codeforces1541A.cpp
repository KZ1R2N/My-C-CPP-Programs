#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case, number;
    cin >> test_case;
    while (test_case--)
    {
        cin >> number;

        if (number == 3)
        {
            cout << 3 << " " << 1 << " " << 2 << " ";
        }
        else if (number % 2 == 0)
        {
            for (int i = 1; i < number; i += 2)
            {
                cout << i + 1 << " " << i << " ";
            }
        }
        else if (number % 2 == 1)
        {
            cout << 3 << " " << 1 << " " << 2 << " ";
            for (int i = 4; i < number; i += 2)
            {
                cout << i + 1 << " " << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
