#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    FILE *ptr;
    char buf[1000];
    int i = 0;
    ptr = fopen("words2.txt", "r");
    int a, b, c, d, e;

    while (fgets(buf, sizeof(buf), ptr) != NULL)
    {

        i++;
        int length;

        if (i == 1)
        {
            a = (strlen(buf) - 1);
        }
        if (i == 2)
        {
            b = (strlen(buf) - 1);
        }
        if (i == 3)
        {
            c = (strlen(buf) - 1);
        }
        if (i == 4)

        {
            d = (strlen(buf) - 1);
        }
        if (i == 5)
        {
            e = (strlen(buf));
        }
    }
    if (a + b + c + d + e == 25)
    {
        cout << "Mim" << endl;
    }
    else
        cout << "Pocha Dim" << endl;
    fclose(ptr);

    return 0;
}