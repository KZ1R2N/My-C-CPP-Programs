#include <iostream >
using namespace std;
class cse
{
private:
    long long id;

public:
    int section;

    void insertnumber();

    // void set_info(long long i, int j)
    // {
    //     id = i;
    //     section = j;
    // }
    void show_info();
};
void cse ::insertnumber()
{
    cin >> id;
    cin >> section;
}
void cse ::show_info()
{
    cout << "id :  " << id << endl
         << "section:  " << section << "\n";
}
int main()
{
    cse o1, o2, o3;
    cout << "student 1:" << endl;
    // long long i;
    // int j;
    // cin >> i;
    // cin >> j;
    o1.insertnumber();
    o1.show_info();
    cout << "student 2:" << endl;
    o2.insertnumber();
    o2.show_info();
    // cin >> i;
    // cin >> j;
    // o1.set_info(i, j);
    // o2.show_info();
    cout << "student 3:" << endl;

    o3.insertnumber();
    o3.show_info();
    // cin >> i;
    // cin >> j;
    // o1.set_info(i, j);

    return 0;
}