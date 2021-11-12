#include <iostream>
using namespace std;
int main()
{
    int array[100];
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    cout << "The Value Of Array With For Loop: " << endl
         << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "the value is " << array[i] << endl
             << endl;
    }

    cout << "The Value Of Array With Pointer: " << endl
         << endl;

    int *p = array;
    cout << "the  value is " << *p << endl;
    cout << "the  value is " << *(p + 1) << endl;
    cout << "the  value is " << *(p + 2) << endl;
    cout << "the  value is " << *(p + 3) << endl;
    cout << "the  value is " << *(p + 4) << endl;

    return 0;
}
