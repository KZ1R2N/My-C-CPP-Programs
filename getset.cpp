#include <iostream>
using namespace std;
class calculator
{
    int first_number, second_number;

public:
    void inputnumbers();

    int sum();
    int sub();
    int dev();
    int mult();
};
void calculator ::inputnumbers()
{
    cout << "Enter The First Number: " << endl;
    cin >> first_number;
    cout << "Enter The Second Number: " << endl;
    cin >> second_number;
}
int calculator ::sum()
{
    return first_number + second_number;
}
int calculator ::sub()
{
    return first_number - second_number;
}
int calculator ::dev()
{
    try
    {
        if (second_number == 0)
            throw "You cannot devide number by 0";
    }
    catch (const char *e)

    {
        cerr << e;
    }

    return first_number / second_number;
}
int calculator ::mult()
{
    return first_number * second_number;
}
int main()
{
    while (1)
    {
        calculator number;
        char value;
        number.inputnumbers();
        cout << "what you want to do? " << endl;
        cout << "For sum (+): Press 1" << endl;
        cout << "For sub (-): Press 2" << endl;
        cout << "For dev (/): Press 3" << endl;
        cout << "For mult (*): Press 4" << endl;
        try
        {
            cin >> value;

            if (value == '1')
            {
                number.sum();
                cout << "The result is: " << number.sum() << endl
                     << endl;
            }
            else if (value == '2')
            {
                number.sub();
                cout << "The result is: " << number.sub() << endl
                     << endl;
            }
            else if (value == '3')
            {
                number.dev();
                cout << "The result is: " << number.dev() << endl
                     << endl;
            }
            else if (value == '4')
            {
                number.mult();
                cout << "The result is: " << number.mult() << endl
                     << endl;
            }
            if (value != '1' || value != '2' || value != '3' || value != '4')
                throw "Your Input Is Invalid, TRY AGAIN:\n\n";
        }
        catch (const char *e)
        {
            cerr << e;
        }
    }
}
