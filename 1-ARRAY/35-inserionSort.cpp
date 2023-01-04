#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Insertion(int arr[], int n){
    for(int i = 1; i<n; i++){
        int j = i-1;
        int key = arr[i];
        while(j>=0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
 
int main (){
  
    int arr[] = {45,23,19,34,67,31};
    int n = sizeof(arr)/sizeof(int);

    Insertion(arr, n);
    printArray(arr, n);
  
    return 0;
}