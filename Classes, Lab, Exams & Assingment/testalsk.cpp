#include<bits/stdc++.h>
using namespace std;
long long ar[10001000];
vector<int>v;
void sieve()
{
    long long i,j,n=10001000;
    v.push_back(2);
    for(i=3; i<n; i+=2)
    {
        if(ar[i]==0)
        {
            v.push_back(i);
            if(i>n/i) continue;
            for(j=i*i; j<=n; j+=(i+i)) ar[j]=1;
        }
    }
}

int main()
{
    long long i,j,n,x,y,p=0;
    sieve();

        cin>>n;

        i=0,j=v.size()-1,p=0;
        while(i<j)
        {
            if(v[i]+v[j]==n)
            {
                //printf("%lld %lld\n",v[i],v[j]);
                cout<<v[i]<<" "<<v[j]<<endl;
                p=1;
                break;
            }
            if(v[i]+v[j]<n) i++;
            else j--;
        }
        if(p==0) 
        cout<<-1<<endl;
//    }

    return 0;
}