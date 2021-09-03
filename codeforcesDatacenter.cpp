#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int input, value;
    cin >> input;
    int root = sqrt(input);
    int i;
    for (i = root; i >= 1; --i)
    {
        if ((i * (input / i)) == input)
        {
            break;
        }
    }
    value = 2 * (i + input / i);
    cout << value << endl;

    return 0;
}
