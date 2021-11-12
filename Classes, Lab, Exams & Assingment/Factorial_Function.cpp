#include <iostream>
using namespace std;
long factorial(int number)
{

    long value = 1;

    for (int counter = 1; counter <= number; counter++)
    {
        value = value * counter;
    }

    return value;
}
int main()
{
    while (true)
    {
        int number;

        cout << "Enter the Number : ";
        cin >> number;

        cout << "The Factorial of " << number << " is : " << factorial(number) << endl
             << endl;
    }

    return 0;
}
