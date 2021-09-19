#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string language;

    int t = 1;

    cin >> language;
    while (language != "#")
    {
        printf("Case %d: ", t);

        if (language == "HELLO")
            printf("ENGLISH\n");
        else if (language == "HOLA")
            printf("SPANISH\n");
        else if (language == "HALLO")
            printf("GERMAN\n");
        else if (language == "BONJOUR")
            printf("FRENCH\n");
        else if (language == "CIAO")
            printf("ITALIAN\n");
        else if (language == "ZDRAVSTVUJTE")
            printf("RUSSIAN\n");
        else
            printf("UNKNOWN\n");
        ++t;

        cin >> language;
    }

    return 0;
}
