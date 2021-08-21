#include <bits/stdc++.h>
using namespace std;
class tree
{
public:
    int length = 54, width = 13;
    void tree_show()
    {
        cout << "length- " << length << endl
             << "width _ " << width << endl;
    }
};
class mango : virtual public tree
{
public:
    string mango_category;
    mango()
    {
        mango_category = "amrupali";
    }
    void mango_show()
    {
        cout << mango_category << endl;
    }
};
class lichee : virtual public tree
{
public:
    string lichee_category;
    lichee()
    {
        lichee_category = "marin";
    }
    void lichee_show()
    {
        cout << lichee_category << endl;
    }
};
class fruitbox : public mango, public lichee
{
public:
    int number_of_kG;
    fruitbox()
    {
        number_of_kG = 1000;
    }
    void kg_show()
    {
        cout << number_of_kG << endl;
    }
};
int main()
{
    fruitbox o1;
    o1.tree_show();
    o1.mango_show();
    o1.lichee_show();
    o1.kg_show();
}