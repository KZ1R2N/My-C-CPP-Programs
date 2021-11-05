#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int size;
        cin >> size;

        int count = 0;
        int arr[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] <= arr[i + 1])
            {
                count = 1;
                break;
            }
        }
        if (count == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}