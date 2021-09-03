#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case, count=0, constestant, place;

    cin >> constestant >> place;
    int arr[100010];
    for (int i = 0; i < constestant; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < constestant; i++)
    {
        if (arr[place - 1] <= arr[i] && arr[i] > 0)
        {
            count++;
        }
    }

    cout << count << endl;
}