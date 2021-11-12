#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int n,n2,arrz1[200],arrz2[200],marg[300],lenth;
    cout<<"input array size "<<endl;
    cin>>n;

    for(int i=0 ; i<n ; i++){
        cin>>arrz1[i];
        marg[i]=arrz1[i];

    }
    lenth = n;
    cout<<"enter 2nd array input "<<endl;
    cin>>n2;
    for(int i=0 ; i<n2 ; i++){
        cin>>arrz2[i];
        marg[lenth]=arrz2[i];
        lenth++;

    }
  
    cout<<"Merge Array: "<<endl;
     
    for(int i=0 ; i< lenth; i++)
    {
      cout<<marg[i]<<endl; 
    }

    
    return 0;
}