#include <bits/stdc++.h>
using namespace std;
class unery
{
     private:
     int firstValue;
     public:
     unery()
     {
         firstValue= 1;
     }
     unery(int x)
     {
         firstValue = x;
     }
     void printValue()
     {
         cout<< "the value is : "<<firstValue<<endl;
     }
    void operator ++()
    {
        ++firstValue;
    }
    void operator ++(int)
    {
        firstValue++;
    }
    void operator --()
    {
        --firstValue;
    }
    void operator --(int)
    {
        firstValue--;
    }
};
int main()
{   
    unery rat;
    rat.printValue();
    ++rat;
    rat.printValue();
    rat++;
    rat.printValue();
    --rat;
    rat.printValue();
    rat--;
    rat.printValue();


    

    
}