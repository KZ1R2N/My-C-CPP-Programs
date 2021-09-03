#include <bits/stdc++.h>
using namespace std;

vector<int>v;
int ar[100010]={0};

sieve()
{

    int n;
    cin>>n;
    v.push_back(2);

    for(int i=3; i<n; i+=2)
    {

        if(ar[i]==0)
        {
            v.push_back(i);

            if(i>n/i) continue;

            for(int j=i*i; j<n; j+=(i+i)) ar[j]=1;
        }
    }

}
int main()
{

    sieve();

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"Total prime number = "<<v.size()<<endl;

}