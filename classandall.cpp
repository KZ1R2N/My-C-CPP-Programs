#include <bits/stdc++.h>
using namespace std;
class Diba
{
private:
    int boobs = 10;
    int pussy = 23;
    friend class ratun;

public:
    int c = 20;
    int d = 34;
    // int display(ratun object)
    // {
    //     cout << object.dick << endl;
    // }
    //int andb();
};
class ratun
{
private:
    int Dick = 50;
    //friend class Diba;

public:
    int display(Diba object)
    {
        cout << "Pussy : " << object.pussy << endl;
        cout << "Boobs : " << object.boobs << endl;
    }
};

// int sum ::andb()
// {
//     cout << a << endl;
//     cout << b << endl;
// }
int main()
{
    Diba adiba;
    ratun rifat;

    rifat.display(adiba);
    //adiba.display(rifat);

    // cout << adiba.c << endl;
    // cout << ratun.d << endl;
    //rat1.andb();
}
