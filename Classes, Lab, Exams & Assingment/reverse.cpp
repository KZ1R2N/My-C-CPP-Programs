#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int value;
    char reverse[20];
    printf("Enter 5 numbers: ");
    cin >> reverse;
    value = strlen(reverse);
    cout << "Reverse Number: ";

    for (int i = value; i >= 0; i--)
    {
        cout << reverse[i];
    }
}