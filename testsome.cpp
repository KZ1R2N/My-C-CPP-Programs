
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
		}
	}
	 cout<<count<<endl;
}
    

	return 0;
}
