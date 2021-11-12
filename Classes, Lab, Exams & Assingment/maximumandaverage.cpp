#include <bits/stdc++.h>
using namespace std;

class maxmum_average
{
public:
    void maximum(int count, int arr[])
        {

                int value2=0;
                
                for(int i=0; i<count; i++)
                {
                    if(arr[i]>value2)
                        value2=arr[i];
                }

                cout<<"Maximum = "<<value2<<endl;

            }
    void average(int count, int arr[])
    {

        int value=0;
        float average_value=0;
        for (int i = 0; i < count; ++i)
        {

            value += arr[i];
        }
        average_value=float(value)/count;

        printf("Average = %.2f\n",average_value);
    }

    };

    int main()
    {
        maxmum_average rat;

        int count, arr[1000];

        cin>>count;

        for(int i=0; i<count; i++)
        {

            cin>>arr[i];
        }
        rat.maximum(count,arr);
        rat.average(count,arr);


        return 0;
    }