#include <iostream>
using namespace std;

int main()
{
    int x, y, temp;
    cin >> x >> y;

    temp = x;
    x = y;
    y = temp;

    if (y < x)
    {
        cout << "Hello,BUBTian!" << endl;
    }
    else
        cout << "Nothing" << endl;

    return 0;
}