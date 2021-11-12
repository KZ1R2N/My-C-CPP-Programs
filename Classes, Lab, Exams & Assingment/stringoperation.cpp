#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{

   cout << "PRESS: 1 to concatinate another string: " << endl;
   cout << "PRESS: 2 to compare the strings: " << endl;
   cout << "PRESS: 3 to copy a string into first one: " << endl;
   cout << "PRESS: 4 to get the substring: " << endl;
   cout << "PRESS: 5 to reverse a string: " << endl;
   cout << "PRESS: 0 to end the program: " << endl;

   while (true)
   {

      int task;
      cin >> task;

      if (task == 1)
      {
         cout << "Insert first string: " << endl;
         char str[100];
         // gets(str);
         cin >> str;
         cout << "Insert another string you wanna concatenate: " << endl;
         char str2[100];
         cin >> str2;

         cout << "After Concatinating The String is: \n"
              << strcat(str, str2) << endl;
      }

      else if (task == 2)
      {
         char str[100];
         char str2[100];
         cout << "Insert a string: " << endl;
         cin >> str;
         cout << "Insert another string to compare: " << endl;

         cin >> str2;
         int n = strcmp(str, str2);
         if (n > 0)
         {
            cout << "Your First string is getter than the second string" << endl;
         }
         else if (n < 0)
            cout << "Your Second String is getter than first string" << endl;
         else if (n == 0)
         {
            cout << "Both strings are same" << endl;
         }
      }
      else if (task == 3)
      {
         char str[100];
         char str2[100];
         cout << "Input First String" << endl;
         cin >> str;
         cout << "Input Second String to copy in first one" << endl;
         cin >> str2;
         cout << "The copied string is: " << endl;
         cout << strcpy(str, str2) << endl;
      }

      else if (task == 4)
      {
         int c = 0;
         cout << "Insert a string: " << endl;
         char str[100], sub[100];
         cin >> str;
         cout << "Insert two index number where you want to get a substrin:" << endl;
         int firstvalue, secondvalue;
         cout << "First Position: ";
         cin >> firstvalue;
         cout << "Second Position: ";
         cin >> secondvalue;

         while (c < secondvalue)
         {
            sub[c] = str[firstvalue + c - 1];
            c++;
         }
         sub[c] = '\0';
         cout << sub << endl;
      }
      else if (task == 5)
      {
         char str1[100], str2[100];
         int i, k, j;
         cout << "Input your string to reverse: " << str1 << endl;
         scanf("%s", &str1);
         for (i = 0; str1[i] != '\0'; i++)

            j = i - 1;
         for (k = 0; k <= i; k++)
         {
            str2[k] = str1[j];
            j--;
         }
         cout << "Your reverse string is: " << endl;
         for (k = 0; k < i; k++)

            cout << str2[k];
      }
      else if (task == 0)
      {
         cout << "Are you sure you want to quit the program? then: " << endl;
         getch();
         return 0;
      }
   }
}
