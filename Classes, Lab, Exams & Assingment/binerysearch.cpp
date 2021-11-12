#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, item;
    cout << "Enter Your Array Size: ";
    cin >> size;
    int arr[size];
    int left = 0;

    int middle;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int right = size - 1;
    //int right = 0;
    cout << "Type The item you wanna search: ";
    cin >> item;

    while (left <= right)
    {
        //middle = (left + right) / 2;
        middle = left + (right - left) / 2;
        if (arr[middle] == item)
        {
            cout << "Item found at position:  " << middle + 1 << endl;
            return 0;
        }
        else if (arr[middle] < item)
        {
            left = middle + 1;
        }
        else
            right = middle - 1;
    }
    cout << "Item not found";
    return 0;
}
