#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void duplicate(int *arr, int n)
{
    int lastDup = INT_MIN;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] != lastDup)
        {
            cout << arr[i] << " ";
            lastDup = arr[i];
        }
    }
    cout << endl;
}

void numberOfDuplicate(int *arr, int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n)
        {
            if (arr[i] == arr[i + 1])
            {
                int j = i + 1;
                while (arr[i] == arr[j])
                {
                    j++;
                }
                cout<<arr[i]<<" "<<j-i<<endl;

                i = j-1; 
            }
        }
    }
    cout << endl;
}

int main()
{

    int arr[10] = {3, 1, 4, 4, 4, 10, 7, 7, 4, 4};
    duplicate(arr, 10);

    numberOfDuplicate(arr, 10);

    return 0;
}