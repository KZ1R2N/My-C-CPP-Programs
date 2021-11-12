#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int value, count;
    int lenth;
    int test_case;
    string str2;
    cin>> test_case;
    while(test_case--)
    {
        cin>> str;
        int str3;
        //cout<<str3<<endl;
        lenth = str.size();
        if(lenth <11)
        {
            cout<< str<<endl;
        }
        else 
        {
        
            cout<<str[0]<<lenth - 2<<str[lenth-1]<<endl;
         
        }

    }
}