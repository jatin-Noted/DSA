#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivotElement = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        if (arr[i] < pivotElement)
        {
            i++;
        }
        else if (arr[j] > pivotElement)
        {
            j--;
        }
        else
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    if (s <= e)
    {
        int pi = partition(arr, s, e);
        quickSort(arr, s, pi - 1);
        quickSort(arr, pi + 1, e);
    }
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {20,25,57,48,37,12,92,86,33};
    int size = sizeof(arr) / sizeof(int);

    quickSort(arr, 0, size - 1);
    printArray(arr, size);

    return 0;
}
