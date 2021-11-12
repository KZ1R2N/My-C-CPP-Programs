#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lenth, task;

    cout << "Please insert how many elemnt do you wanna input? " << endl;
    cin >> lenth;
    int array[lenth];
    cout << "Please insert your array element" << endl;
    for (int i = 0; i < lenth; i++)
    {
        cin >> array[i];
    }
    while (true)
    {

        cout << "Please tell us what do you want to do? " << endl;
        cout << "1. Add New Array Element" << endl;
        cout << "2. Delete existing array element" << endl;
        cout << "3. Find average of my array" << endl;
        cout << "4. Show my array" << endl;
        cout << "5. search array" << endl;
        cin >> task;
        if (task == 2)
        {
            int removelement, itemsfound = 0;
            cout << "which ELEMENT do you wanna delete?" << endl; //2 5 8   9
            cin >> removelement;

            for (int i = 0; i < lenth; i++)
            {
                if (array[i] == removelement)
                {
                    for (int j = i; j < lenth; j++)
                    {
                        array[j] = array[j + 1];
                        itemsfound++;
                        i--;
                        lenth--;
                    }
                }
            }
            if (itemsfound == 0)
            {
                cout << "Items not found, invalid input" << endl;
            }
            else
                cout << "Items you entered succesfully deleted" << endl;
        }
        else if (task == 1)
        {
            int newelement;
            int position;
            cout << "enter position of new element" << endl;
            cin >> position;
            cout << "Enter new element" << endl;
            cin >> newelement;
            if (position > lenth + 1 || position <= 0)
            {
                cout << "Invalid position" << endl;
            }
            else
            {
                for (int i = lenth; i >= position; i--)
                {
                    array[i] = array[i - 1];
                }
                array[position - 1] = newelement;
                lenth++;
            }
        }
        else if (task == 4)
        {
            cout << "Your current array is: " << endl;

            cout << "Lenth of your array: " << lenth << endl;
            for (int i = 0; i < lenth; i++)
            {

                cout << array[i] << " " << endl;
            }
        }
        else if (task == 3)
        {
            int sum = 0, average = 0;
            for (int i = 0; i < lenth; i++)
            {
                sum += array[i];
            }
            average = (float)sum / lenth;
            cout << "Your average of array is: " << endl
                 << endl;
            cout << average << endl;
        }
        else if (task == 5)
        {
            int cnt = 0, num, pos = 0;
            cout << " Enter Element to be Searched : " << endl;
            cin >> num;
            for (int i = 0; i < lenth; i++)
            {
                if (array[i] == num)
                {
                    cnt = 1;
                    pos = i + 1;
                    break;
                }
            }
            if (cnt == 0)
            {
                cout << "Element Not Found..!!" << endl;
            }
            else
            {
                cout << "Element " << num << " Found At Position " << pos << endl;
            }
        }

        else
            cout << "Invalid Entry, Please try again!!!" << endl
                 << endl;
    }

    return 0;
}