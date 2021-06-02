#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void checkbinary();
    void readbinary();
    void swapbinary();
    void displayswapbinary();
    void displaybinary();
};
void binary ::readbinary()
{
    cout << "Please Input your binary number: " << endl;
    cin >> s;
}
void binary ::checkbinary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "It's Not a Binary Number" << endl;
            exit(0);
        }
    }
}
void binary ::swapbinary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::displaybinary()
{
    cout << "Displaying your Binary Number: " << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
void binary ::displayswapbinary()
{
    cout << "Displaying Swapped Binary Number: " << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.readbinary();
    b.checkbinary();
    b.displaybinary();
    b.swapbinary();
    b.displayswapbinary();
}
