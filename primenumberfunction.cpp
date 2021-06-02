#include <iostream>
using namespace std;
prime_number(int number)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int number;
    cout << "Enter A Number: " << endl;
    cin >> number;
    if (prime_number(int number) == true)
    {
        cout << "This Number Is a prime number" << endl;
    }
    else
    {
        cout << "the number is not a prime number" << endl;
    }

    return 0;
}
