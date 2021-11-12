#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int getMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int CountingSort(int arr[], int size, int div)
{
    int output[size];
    int count[10] = {0};

    for (int i = 0; i < size; i++)
        count[(arr[i] / div) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = size - 1; i >= 0; i--)
    {
        output[count[(arr[i] / div) % 10] - 1] = arr[i];
        count[(arr[i] / div) % 10]--;
    }

    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}
//Shorting and Searching Starts from here//
int bubble_short(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Shorting with Bubble short:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int insertion_sort(int arr[], int size)
{
    int i = 0, key = 0, position = 0;
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        position = i;

        while (position >= 0 && arr[position - 1] > key)
        {
            arr[position] = arr[position - 1];
            position = position - 1;
        }
        arr[position] = key;
    }
    cout << "Shorting with insnertion shorting method:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
// int getMax();
// void CountingSort();

int radix_short(int arr[], int size)
{
    int m = getMax(arr, size);
    for (int div = 1; m / div > 0; div *= 10)
        CountingSort(arr, size, div);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int linear_search(int arr[], int size)
{
    int search;
    printf("Enter a number to search\n");
    cin >> search;
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            printf("%d is present at location %d.\n", search, i + 1);
            break;
        }
    }
    if (i == size)
        printf("%d isn't present in the array.\n", search);
}
int binery_search(int arr[], int size)
{
    int middle = 0;
    int left = 0;
    int right = size - 1;
    //int right = 0;
    int item;
    cout << "Type The item you wanna search: ";
    cin >> item;

    while (left <= right)
    {
        //middle = (left + right) / 2;
        middle = left + (right - left) / 2;
        if (arr[middle] == item)
        {
            cout << "Item found at position:  " << middle + 1 << endl;
            return 0;
        }
        else if (arr[middle] < item)
        {
            left = middle + 1;
        }
        else
            right = middle - 1;
    }
    cout << "Item not found";
}
int main()
{

    int size;
    cout << "Input Your Array Size: " << endl;
    cin >> size;
    cout << "Input Your Array Element: " << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Press 1 for Bubble shorting your array" << endl;
    cout << "Press 2 for Insertion shorting your array" << endl;
    cout << "Press 3 for Radix shorting your array" << endl;
    cout << "Press 4 for Binery Search your array" << endl;
    cout << "Press 5 for Linear Search your array" << endl;
    cout << "Press 0 to exit the program" << endl;
    int task;

    while (cin >> task && task)
    {
        if (task == 1)
        {
            bubble_short(arr, size);
        }
        else if (task == 2)
        {
            insertion_sort(arr, size);
        }
        else if (task == 3)
        {
            radix_short(arr, size);
        }
        else if (task == 4)
        {
            binery_search(arr, size);
        }
        else if (task == 5)
        {
            linear_search(arr, size);
        }
    }
}
