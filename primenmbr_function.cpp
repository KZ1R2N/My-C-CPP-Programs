#include <iostream>
using namespace std;
int prime_number(int number)
{
    int value = 0;

    for (int i = 1; i <= number; i++)
    {

        if (number % i == 0)
        {
            value++;
        }
    }
    if (value == 2)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    while (true)
    {
        int number;
        cout << "Enter A Number: " << endl;
        cin >> number;
        if (prime_number(number))
        {
            cout << "This Number Is a prime number" << endl
                 << endl;
        }
        else
        {
            cout << "the number is not a prime number" << endl
                 << endl;
        }
    }

    return 0;
}
