#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void printArray(int * arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertSorted(int * arr, int & n, int element){
    sort(arr, arr+n);
    
    int i = n-1;
    while(i >= 0 && arr[i] > element){
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = element;
    n++;
}
 
int main (){
  
    int arr[5] = {56,12,45,89,78};
    int n = 5;
    printArray(arr, n);

    insertSorted(arr, n, 100);
    printArray(arr, n);

    insertSorted(arr, n, 55);
    printArray(arr, n);

    insertSorted(arr, n, 1);
    printArray(arr, n);
  
    return 0;
}