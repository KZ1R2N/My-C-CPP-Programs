#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Overloading
{
private:
    int firstValue, secondValue;

public:
    Overloading()
    {
        firstValue = 0;
        secondValue = 0;
    }
    Overloading(int r, int i)
    {
        firstValue = r;
        secondValue = i;
    }
    Overloading operator +(Overloading rif)
    {
        Overloading temp;
        temp.firstValue = firstValue + rif.firstValue;
        temp.secondValue = secondValue + rif.secondValue;
         return temp;
    }
    void print()
    {
        cout<< firstValue << "+" << secondValue<<endl;
    }
};
int main()
{
   Overloading rat1(4,6);
   Overloading rat2(6,7);
   Overloading rat3(8,9);
   Overloading rat;
   rat = rat1+ rat2+ rat3;
   rat.print();
    
}