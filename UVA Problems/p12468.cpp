#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input1, input2, result;
    while ((cin >> input1 >> input2) && (input1 != -1 && input2 != -1))
    {
        result = abs(input1 - input2);
        if (result > 50)
        {
            result = 100 - result;
        }
        cout << result << endl;
    }

    return 0;
}
