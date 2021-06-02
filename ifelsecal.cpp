#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mult(int x, int y)
{
    return x * y;
}
int dev(int x, int y)
{
    return x / y;
}
int main()
{
    int first_number, second_number;
    char input;
    while (true)
    {

        cout << "ENter two number:" << endl;
        cin >> first_number >> input >> second_number;

        if (input == '+')
        {
            cout << sum(first_number, second_number) << endl;
        }
        else if (input == '-')
        {
            cout << sub(first_number, second_number) << endl;
        }
        else if (input == '*')
        {
            cout << mult(first_number, second_number) << endl;
        }
        else if (input == '/')
        {
            cout << dev(first_number, second_number) << endl;
        }
    }

    return 0;
}
