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
    int i, key, position;
    for (i = 1; i < lenth; i++) //3 4 5 2 1
    {
        key = arr[i];
        position = i;

        while (position >= 0 && arr[position - 1] > key)
        {
            arr[position] = arr[position - 1];
            position = position - 1;
        }
        arr[position] = key;
    }
    for (int i = 0; i < lenth; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
