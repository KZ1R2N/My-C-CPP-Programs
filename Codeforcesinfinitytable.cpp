#include <bits/stdc++.h>
using namespace std;
int main()
{

    int intput,test_case, root_value, row, col;
    cin>>test_case;
    while (test_case--)
    {
    cin >> intput;
    root_value = (int)ceil(sqrt(intput));
    //cout<<root_value<<endl;
    int square_value = root_value * root_value;
    int value = square_value - intput;
    if (value < root_value)
    {
        row = root_value;
        col = value + 1;
    }
    else
    {
        col = root_value;
        value -= root_value;
        value = root_value - value - 1;
        row = value;
    }
    cout << row << " " << col << endl;
        
    }
}
