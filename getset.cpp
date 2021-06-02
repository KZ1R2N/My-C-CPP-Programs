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
        cout << "For sum : +" << endl;
        cout << "For sub : -" << endl;
        cout << "For dev : /" << endl;
        cout << "For mult : *" << endl;

        cin >> value;

        if (value == '+')
        {
            number.sum();
            cout << "The result is: " << number.sum() << endl
                 << endl;
        }
        else if (value == '-')
        {
            number.sub();
            cout << "The result is: " << number.sub() << endl
                 << endl;
        }
        else if (value == '/')
        {
            number.dev();
            cout << "The result is: " << number.dev() << endl
                 << endl;
        }
        else if (value == '*')
        {
            number.mult();
            cout << "The result is: " << number.mult() << endl
                 << endl;
        }
    }
}
