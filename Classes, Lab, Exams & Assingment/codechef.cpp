#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    int arr[10000];
    cin >> test_case;
    while (test_case--)
    {
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] == 7)
            {
                count = 1;
            }
        }
        if (count == 0)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}
