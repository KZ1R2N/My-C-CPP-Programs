#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int count = 5, moves = 1, input;

    cin >> input;
    while (input > count)
    {
        count += 5;
        moves++;
    }

    cout << moves << endl;

    return 0;
}
