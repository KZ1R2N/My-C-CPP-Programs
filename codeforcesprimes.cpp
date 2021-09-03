#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100010];
vector<int>rat;
int i,j,n=100010;
    rat.push_back(2);
    for(i=3;i<n;i+=2){
        if(arr[i]==0){
            rat.push_back(i);
            if(i>n/i) continue;
            for(j=i*i;j<=n;j+=(i+i)) arr[j]=1;
        }
    }
  int x,y,p=0;
//    for(i=0;i<v.size();i++) cout<<v[i]<<' ';
    while(cin>>n){
        i=0,j=rat.size()-1,p=0;
        while(i<j){
            if(rat[i]+rat[j]==n){
                cout<<"YES"<<endl;
                p=1;
                break;
            }
            if(rat[i]+rat[j]<n) i++;
            else j--;
        }
        if(p==0) cout<<"NO"<<endl;
    } 
}