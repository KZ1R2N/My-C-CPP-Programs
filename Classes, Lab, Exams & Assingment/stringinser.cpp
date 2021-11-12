#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int insertionsort(string arr, int n)
{
    for (int i = 1; i < n; i++)
    {

        int temp;
        temp = arr[i];
        int j = i - 1;

        while ((temp < arr[j]) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }

    printf("Sorted elements :  ");
    for (int i = 0; i < n; i++)
        //printf(" %d", arr[i]);
        cout << arr[i] << " ";
}

int main()
{

    string arr;
    int n;
    printf("How many numbers u are going to enter :  ");
    scanf("%d", &n);

    printf("Enter %d elements :  ", n);

    for (int i = 0; i < n; i++)
        //  scanf("%d", &arr[i]);

        cin >> arr[i];
    insertionsort(arr, n);

    return 0;
}
