#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin >> number;
    if (number == 0)
    {
        cout << "You are not allowed to enter university" << endl;
    }
    else if (number == 1)
        cout << "You are only allowed to attend examinations" << endl;
    else if (number == 2)
        cout << "You are allowed to attend all activities offline" << endl;
    return 0;
}
