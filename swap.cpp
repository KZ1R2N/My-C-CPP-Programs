#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename temp>
int swapvalue(temp input1, temp input2)
{
    temp value = input1;
    input1 = input2;
    input2 = value;
    cout << "Your swapvalueed Value: " << endl;
    cout << "First Value:  " << input1 << endl;
    cout << "second Value: " << input2 << endl;
    cout << endl;
}

int main()
{
    int input1, input2;
    string str1, str2;
    float flot1, flot2;
    cout << "INT TYPE: " << endl;
    cin >> input1 >> input2;
    swapvalue(input1, input2);
    cout << "Char TYPE: " << endl;
    cin >> str1 >> str2;
    swapvalue(str1, str2);
    cout << "Float TYPE: " << endl;
    cin >> flot1 >> flot2;
    swapvalue(flot1, flot2);

    return 0;
}
