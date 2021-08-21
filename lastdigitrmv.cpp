// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {   int num;
//     cin>>num;
//     int value;
//      num %= static_cast<int>(pow(10, static_cast<size_t>(log10(num))));
//      cout<<num<<endl;
    
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int test_case,value, number;
    stringstream rat(str);
    while(test_case--)
    {
       cin>> str;
       rat >> number;
       if(number > 10)
       {
           cout<<number<<endl;
       }
       else{

       for(int i=10; i< number; i++)
       {
         for(int j = i; j< str.size(); j++ )
         {
             if (str[i]== str[i+1])
             {
                 value++;
             }
         }
       }
       }
    }
   
    
}




















// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int newNum,y,x;
//     cin>>x;
//     y = x;
//     if (y < 10)
//         newNum = 0; // or what should it be?
//     else
//     {
//         int denominator = 1;
//         while (y >= 10)
//         {
//             y /= 10;
//             denominator *= 10;
//         }
//         newNum = x % denominator;
//     }
//     cout<<newNum<<endl;
// }
