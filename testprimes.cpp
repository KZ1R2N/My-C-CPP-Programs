#include <bits/stdc++.h>
using namespace std;

int primenumbercheck(int number)
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
    cout<< "num" <<number<<endl;
        i=0,j=rat.size()-1,p=0;
        if(number == 2 || number == 3) 
        {
            return 1;
        }
        while(i<j){
            if(rat[i]+rat[j]==number){
               // cout<<"YES"<<endl;
                return 1;
                p=1;
                break;
            }
            if(rat[i]+rat[j]<number) i++;
            else j--;
        }
        if(p==0) return 0;
     
}
int main()
{
    int value, firstprime,secondprime , count2=0, input;
    cin>> input;
    
    for(int i=1; i< input; i++)
    {  
        int returnvalue1=0;
    int returnvalue2=0;
        count2= 0;
        value = input - i;
        //primenumbers();
         returnvalue1 = primenumbercheck(value);
         returnvalue2 = primenumbercheck(i);
        cout<<"retrunvalue first "<<returnvalue1<<endl;
          cout<<"retrunvalue  second "<<returnvalue2<<endl;
         if(returnvalue1 == 1 and returnvalue2 == 1)
         {
          
            cout<< i<<" "<< value<<endl;
            break;
         }
         else 
         {
             count2 = 1;
         }
           
    }
    if (count2 == 1)
    {
        cout<<"-1"<<endl;
    }
}  