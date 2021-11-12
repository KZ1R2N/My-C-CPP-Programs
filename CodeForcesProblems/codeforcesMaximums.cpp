#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int value = 0;
    int arr2[size];
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[i] + value;
        value = max(value, arr2[i]);
        cout << arr2[i] << " ";
    }
    return 0;
}
