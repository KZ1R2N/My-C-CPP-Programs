#include <bits/stdc++.h>
using namespace std;

int main()
{
	int mark;
    cout<<"Enter Your Mark: "<<endl;
    cin>>mark;
	
	if(mark>=80&&mark<=100)
	{
		cout<<"You Have Marked A+"<<endl;
	}
	

	else if(mark>=70&&mark<=79)
	{
		cout<<"You Have Marked A"<<endl;
		
	}
	else if(mark>=60&&mark<=69)
	{
		cout<<"You Have Marked A-"<<endl;
		
	}
	else if(mark>=50&&mark<=59)
	{
		cout<<"You Have Marked B+"<<endl;
		
	}
	else if(mark>=50&&mark<=54)
	{
		cout<<"You Have Marked B"<<endl;
		
	}
	else if(mark>=43&&mark<=49)
	{
		cout<<"You Have Marked C+"<<endl;
		
	}
	else if(mark>=35&&mark<=42)
	{
		cout<<"You Have Marked C"<<endl;
		
	}
	else if(mark>=0&&mark<=35)
	{
		cout<<"You Have Marked F"<<endl;

	}
	else
	{
		cout<< "The number you have entered is invalid."<<endl;
	}
	return 0;
}