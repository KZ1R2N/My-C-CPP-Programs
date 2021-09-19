#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input = 0, value = 0, count = 0;
    cin >> input;
    while (input)
    {
        value = input / 5; //here I want to know how many times there are 5 in input,
        // you can change the value to anything as like 7
        count += value;
        input /= 5;
    }
    cout << count << endl;
    return 0;
}
