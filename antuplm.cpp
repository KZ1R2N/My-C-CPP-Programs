#include<iostream>
using namespace std;

void f()
{
    int i=1;
    do
    {
        int j=1;
        do
        {
            cout<<j<<endl;
            j++;
        }
        while(j<=5);
    }
    while(i<=5);
    i++;
}

int main()
{
    f();
}