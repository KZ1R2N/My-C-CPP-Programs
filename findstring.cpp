#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char r[100000];
    cout << "Please Enter Here: " << endl;
    cin >> r;

    int letter = 0, i = 0;
    while (r[i] != '\0')
    {
        if (r[i] >= 'a' && r[i] <= 'z' || r[i] >= 'A' && r[i] <= 'Z')
        {
            letter++;
        }
    }
    cout << "Letter = " << letter << endl;

    return 0;
}

