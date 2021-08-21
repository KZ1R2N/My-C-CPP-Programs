
#include <bits/stdc++.h>
using namespace std;
class RemoveLetter
{
   
   string str;
    string temp = "";
    string temp2 = "";
    public:
    int remove_operation(); 

   
};

int RemoveLetter:: remove_operation()
{
     
    getline(cin, str);
      for (int i = 0; i < str.size(); ++i) {
 
        if ((str[i] >= 32 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96 ) || (str[i] >= 123 && str[i] <= 127 )) 
        {
            temp2 +=  str[i];
        }
    }
    
    cout  << "Output-1:"<<temp2<<endl;
   

    for (int i = 0; i < str.size(); i++) 
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            temp += str[i];
        }
    }
      cout  << "Output-2:"<<temp<< endl;
  
    
   

  
}
int main()
{
   RemoveLetter rat;
   rat.remove_operation();

    
};