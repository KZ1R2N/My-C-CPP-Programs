#include <bits/stdc++.h>
using namespace std;
class Function_Overloading
{
public:
    int add(string input1, string input2)
    {
        input1 = input1 + input2;
        reverse(input1.begin(), input1.end());
        cout << "Reversed String: " << input1 << endl
             << endl;

        return 0;
    }
    int add(int value1, int value2)
    {
        int value = value1 + value2;
        int reversed = 0, temp;
        while (value != 0)
        {
            temp = value % 10;
            reversed = reversed * 10 + temp;
            value /= 10;
        }
        cout << "Reversed Number: " << reversed << endl
             << endl;
    }
};
int main()
{
    Function_Overloading sum;
    string input1, input2;
    int value1, value2;
    while (true)
    {
        cout << "Enter Two String:" << endl;

        cin >> input1 >> input2;
        sum.add(input1, input2);
        {
            cout << "Enter Two Number:" << endl;
            cin >> value1 >> value2;
            sum.add(value1, value2);
        }
    }
}