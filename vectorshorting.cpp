#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.first!=b.first) return a.first<b.first;
    return a.second>b.second;

}

int main(){
    int i,n,j,a,b,c=0,x;
    vector<pair<int,int>> vp;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b;
        vp.push_back({a,b});
    }
    sort(vp.begin(),vp.end(),cmp);
    for(i=0;i<vp.size();i++){
        cout<<vp[i].first<<' '<<vp[i].second<<endl;
    }

    
}