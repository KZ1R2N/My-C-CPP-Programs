#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (true)
    {
        cin>>n;
    int digit=log10(n)+1;
    int z=5-digit;
    if(z<=0)cout<<n;
    else
    {
        if(z%2==0)
        {
            for(int a=1;a<=z/2;a++)cout<<0;
            cout<<n;
            for(int a=1;a<=z/2;a++)cout<<0;
        }
        else
        {
            int x=ceil(z*1.0/2);
            int y=z-x;
            for(int a=0;a<x;a++)cout<<0;
            cout<<n;
            for(int a=0;a<y;a++)cout<<0;
        }
    }
    cout<<endl;
    }
    
}