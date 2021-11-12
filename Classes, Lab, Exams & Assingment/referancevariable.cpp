#include <iostream>
using namespace std;
int swapreferencevariable(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 4, b = 3;
    cout << "        Using Reference Variable         " << endl
         << endl;

    cout << "Before Swap: " << endl;
    cout << "The Value of a is " << a << endl;
    cout << "The Value Of b is " << b << endl;
    swapreferencevariable(a, b);
    cout << "After Swap: " << endl;

    cout << "The Value of a is " << a << endl;
    cout << "The Value Of b is " << b << endl;

    return 0;
}
//without using reference variable::::
// int swappointers(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int main()
// {
//     int a = 4, b = 3;
//     cout << "       Without Using Reference Variable         " << endl
//          << endl;
//     cout << "Before Swap: " << endl;
//     cout << "The Value of a is " << a << endl;
//     cout << "The Value Of b is " << b << endl;

//     swappointers(&a, &b);
//     cout << "After Swap" << endl;

//     cout << "The Value of a is " << a << endl;
//     cout << "The Value Of b is " << b << endl;

//     return 0;
// }