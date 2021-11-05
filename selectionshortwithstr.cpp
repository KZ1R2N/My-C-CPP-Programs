#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionSor(string a, int n)
{
    int i, j, position, swap;
    for (i = 0; i < a.size() - 1; i++)
    {
        position = i;
        for (j = i + 1; j < a.size(); j++)
        {
            if (a[position] > a[j])
                position = j;
        }
        if (position != i)
        {
            swap = a[i];
            a[i] = a[position];
            a[position] = swap;
        }
    }
    printf("Sorted Array: ");
    for (i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    //printf("%d ", a[i]);
}
int main()
{
    int n, i, j, position, swap;
    string a;
    // printf("Enter number of element: ");
    //scanf("%d", &n);
    cin >> n;
    printf("Enter %d Numbers: ", n);
    //for (i = 0; i < n; i++)
    cin >> a[i];
    //scanf("%d", &a[i]);
    selectionSor(a, n);

    return 0;
}