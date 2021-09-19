#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lenth;
    cin >> lenth;
    int arr[lenth];
    for (int i = 0; i < lenth; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < lenth - 1; i++)
    {
        for (int j = 0; j < lenth - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < lenth; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
