#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void merge(int * arr, int s, int mid, int e){

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int * arr1 = new int[len1];
    int * arr2 = new int[len2];

    for(int i = 0; i < len1; i++){
        arr1[i] = arr[s + i];
    }

    for(int i = 0; i < len2; i++){
        arr2[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0;
    int k = s;

    while(i < len1 && j < len2){
        if(arr1[i] < arr2[j]){
            arr[k++] = arr1[i++];
        }
        else{
            arr[k++] = arr2[j++];
        }
    }

    while(i<len1){
        arr[k++] = arr1[i++];
    }

    while(j<len2){
        arr[k++] = arr2[j++];
    }

    delete[] arr1;
    delete[] arr2;
}

void mergeSort(int arr[], int s, int e){
    if(s < e){
        int mid = (s+e)/2;

        mergeSort(arr, s, mid);
        mergeSort(arr, mid+1, e);

        merge(arr, s, mid, e);
    }
    
}
 
void printArray(int * arr, int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {4, 2, 8, 3, 1, 5, 7, 11, 6};
    int size = sizeof(arr)/sizeof(int);
    
    mergeSort(arr, 0, size-1);
    printArray(arr, size);

    return 0;
}