#include <iostream>
using namespace std;
int main()

{
    int i;
    cout << "using break" << endl;

    for (int i = 0; i < 20; i++)
    {
        if (i == 9)
        {
            break;
        }

        cout << i << endl;
    }

    cout << "using continue" << endl;

    for (int i = 0; i < 20; i++)
    {
        if (i == 9)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}
