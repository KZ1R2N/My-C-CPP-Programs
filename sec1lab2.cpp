#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class tree
{
    float hight;
    float width;

public:
    int displaytree()
    {
        hight = 20.2;
        width = 5.7;
        cout << "hight = " << hight << " cm" << endl;
        cout << "width = " << width << " cm" << endl;
    }
};
class mango : virtual public tree
{
    string catagory;

public:
    int displaymango()
    {
        catagory = "Fazli";
        cout << "Mango Catagory = " << catagory << endl;
    }
};
class lichi : virtual public tree
{
    string catagory;

public:
    int displaylichi()
    {
        catagory = "Marine";
        cout << "Lichi Catagory = " << catagory << endl;
    }
};
class FruitBox : public mango, public lichi
{
    int kg;

public:
    int displayFruitBox()
    {
        kg = 15;
        cout << "Kg = " << kg << endl;
    }
};
int main()
{
    FruitBox obj;

    obj.displaytree();
    obj.displaymango();
    obj.displaylichi();
    obj.displayFruitBox();

    return 0;
}
