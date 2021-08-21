// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int number, test_case, count, first_digit, last_digit;

//     cin >> test_case;
//     while (test_case--)
//     {
//         cin >> number;
//         if (number < 10)
//         {
//             cout << number << endl;
//         }
//         else if ( number<100)

//         {  
//             count = 9;
//             for (int i = 10; i <= number; i++)
//         {  
            
//             first_digit = i;
//             while (first_digit >= 10)
//             {
//                 first_digit = first_digit / 10;
//             } 
//             last_digit = i % 10;
//             if (first_digit == last_digit)
//             {
//                 count++;
//             }
//             cout<<count<<endl;
//         }
//         }
//         else 
//         {
            
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
	int number, test_case;
 
    cin>>test_case;
    while(test_case--)
{
  cin>>number;
    	int value = 0, count = 0;
 
 
	int n = log10(number) + 1;
 
	for (int i = 0; i < n; i++) {
       
	
		value = value * 10 + 1;
        
		for (int j = 1; j <= 9; j++) {
 
			if ((value * j) <= number) {
				count++;
			} 
            else break;
		}
	}
cout<<count<<endl;
}
    
 
	return 0;
}
