#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
    char str[100];
    int i = 0;
    int Alphabets = 0, num = 0, special = 0, space = 0;
    cout << "Please enter the string \n";
    gets(str);

    while (str[i] != '\0')
    {
        //check for Alphabets
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            Alphabets++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        { //check numeric
            num++;
        }

               else
        {
            special++; //find special
        }
        i++;
    }
    cout << "\nAlphabets letters: " << Alphabets;

    cout << "\nnumbers: " << num;
    cout << "\nSpace: " << space;
    cout << "\nSpecial characters: " << special;

    return 0;
}