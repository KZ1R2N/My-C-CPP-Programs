#include <iostream>
using namespace std;
int main()
{
    cout << "             Without using Static :      " << endl;

    for (int i = 0; i < 10; i++)
    {
        int value = 1;
        value++;
        cout << "value is :" << value << endl;
    }
    ///////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////

    cout << "            Using Static :        " << endl;
    for (int i = 0; i < 10; i++)
    {
        int static value = 1;
        value++;
        cout << "value is :" << value << endl;
    }

    return 0;
}
