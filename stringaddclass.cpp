#include <bits/stdc++.h>
using namespace std;
class Function_Overloading
{
public:
    int value1, value2;
    int add(string input1, string input2)
    {

        input1 = input1 + input2;
        int n = input1.length();

        for (int i = 0; i < n / 2; i++)
            swap(input1[i], input1[n - i - 1]);
        cout << input1 << endl;

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
        cout << reversed;
    }
};
int main()
{
    Function_Overloading sum;
    int input1, input2;
    int value1, value2;

    sum.add("Kazi", "Ratun");
    sum.add(25, 2);
}