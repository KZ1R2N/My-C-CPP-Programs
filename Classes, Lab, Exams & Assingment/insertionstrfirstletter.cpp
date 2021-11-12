
#include<bits/stdc++.h>
using namespace std;

void insertionsort(string arr[],int n)
{
    for(int i=1;i<n;i++)
    {
          string temp = arr[i];
          int j = i-1;

          while((temp[0]<arr[j][0])&&(j>=0))
         {
          arr[j+1]=arr[j];
          j=j-1;
         }
      arr[j+1]=temp;
   }

   printf("Sorted elements :  ");
   for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";

      cout<<endl;
}

int main(){

   int i,n;

   printf("How many words are going to enter :  ");
   scanf("%d",&n);

   string arr[n];

   printf("Enter %d elements :  ", n);

   for(i=0;i<n;i++)
    cin>>arr[i];



  insertionsort(arr,n);

   return 0;
}
