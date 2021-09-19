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
    int i, key, j;
    for (i = 1; i < lenth; i++)
    {
        key = arr[i];
        j = i - 1;

         while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < lenth; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
