#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class digitchange
{

    int number;
    string str;

public:
    int getstr();
};
int digitchange ::getstr()
{
    while (getline(cin, str))
    {
        number = atoi(str.c_str());
        try
        {
            if (number == -1)
            {
                return 0;
            }
            else
            {

                if (number < -1)
                {
                    throw "you have given an invalid input. Try Again: ";
                }
                else
                {

                    if (str[1] == 'x')
                    {
                        istringstream(str) >> std::hex >> number;
                        cout << std::dec << number << endl;
                    }
                    else
                    {
                        cout << "0x" << std::hex << uppercase << number << endl;
                    }
                }
            }
        }
        catch (const char *e)
        {
            cerr << e << endl
                 << endl;
        }
    }
}
int main()
{
    digitchange rat;
    rat.getstr();

    return 0;
}
