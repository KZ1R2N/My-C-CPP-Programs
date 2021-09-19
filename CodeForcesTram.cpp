#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    int value = 0, count = 0;
    cin >> test_case;
    while (test_case--)
    {
        int arr[100010];
        for (int i = 0; i < 2; i++)
        {
            cin >> arr[i];
        }
        value = (arr[0] + count) - arr[1];
        if (value < 0)
        {
            count = 0;
        }
        else
            count = value;
    }
    cout << value << endl;

    return 0;
}
