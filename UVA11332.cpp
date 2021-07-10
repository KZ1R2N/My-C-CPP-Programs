#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0, input, value;

    while (scanf("%d", &input))
    {
        if (input == 0)
            break;
        while (input > 9)
        {
            value = input % 10;
            input = input / 10;
            input += value;
        }

        cout << input << endl;
    }

    return 0;
}
