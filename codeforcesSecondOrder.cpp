#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int length, count = 0;
    cin >> length;
    for (int i = 0; i < length; i++)
    {

        cin >> arr[i];
    }

    sort(arr, arr + length);
    for (int i = 1; i < length; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            cout << arr[i];
            count = 1;
            break;
        }
    }
    if (count == 0)
        cout << "NO";
}
// if (length == 1)
//     cout << "NO" << endl;
// else if (length == 2)
// {
//     if (arr[0] == arr[1])
//         cout << "NO" << endl;
//     else
//         cout << arr[1] << endl;
// }
// // else if (length > 2)
// // {
// //     for (int i = 0; i < length; i++)
// //     {
// //         if (arr[i] == arr[i + 1])
// //         {
// //             count = 0;
// //         }
// //     }
// //     if (count == 0)
// //         cout << "NO" << endl;
// // }
// else
// {
//     for (int i = 0; i < length; i++)
//     {
//         if (arr[i] == arr[i + 1])
//         {
//             count = 0;
//         }
//         else
//             count++;
//     }
//     if (count == 0)
//         cout << "NO" << endl;
//     else if (count > 0)
//     {

//         for (int i = 0; i < length; i++)
//         {
//             if (arr[i] != arr[i + 1])
//             {
//                 cout << arr[i + 1] << endl;
//                 break;
//             }
//         }
//     }
// }

// for (i = 0; i < length; i++)
//     cout << arr[i] << " ";
// cout << endl;
// for (i = 0; i < length; i++)
// {

//     for (j = 0; j < i; j++)
//         if (arr[i] == arr[j])
//             break;

//     if (i == j)
//         // continue;
//         cout << arr[i] + 1 << " ";
//     break;
//     //arr2[100] = arr[i];
//     // cout << endl;
// }
// cout << endl;

//cout << arr[2] << endl;
