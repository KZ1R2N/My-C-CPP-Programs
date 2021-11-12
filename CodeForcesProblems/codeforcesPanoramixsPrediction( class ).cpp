#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class prime
{
    int first_prime, second_prime;
    int count = 0;
    int value = 0;

public:
    int takenumber();
    int checkprime();
    int takesecondprime();
    int takevalue();
};
int prime ::takenumber()
{
    cin >> first_prime >> second_prime; // input 3 & 5
}
int prime::checkprime()
{
    for (int i = first_prime + 1; i <= second_prime; i++)
    {
        first_prime++;

        cout << "firstprime after ++: " << first_prime << endl;
        int j = 0;
        int count = 0;
        for (j = 1; j <= first_prime; j++)
        {
            cout << "afterfirst iteration j: " << j << endl;
            cout << "firstprime after ++ and so on: " << first_prime << endl;

            if (first_prime % j == 0)
            {
                count++;
            }
        }
        cout << "count after checking: " << count << endl;
        if (count == 2)
        {
            cout << "firstprime:::" << first_prime << endl;
            value = first_prime;
            cout << "Value: " << value << endl;

            return true;
            break;
        }
    }
}
int prime::takesecondprime()
{
    return second_prime;
}
int prime::takevalue()
{
    return value;
}
int main()
{

    prime rat;
    int value, secondprime;
    rat.takenumber();
    value = rat.takevalue();
    secondprime = rat.takesecondprime();
    cout << "value: " << value << endl;
    cout << "second prime: " << secondprime << endl;
    if (rat.checkprime())
    {
        if (value == secondprime)
        {

            cout << "YES" << endl;
        }

        else
            cout << "NO" << endl;
    }
    // if (count >= 1)
    // {
    //     cout << "NO" << endl;
    // }
    // else if (second_prime % 2 == 0)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    //     cout << "NO" << endl;

    // return 0;
}
