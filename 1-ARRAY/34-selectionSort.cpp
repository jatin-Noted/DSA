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

void swap(int & a, int & b){
    int temp = a;
    a = b;
    b = temp;
}

void selection(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
        
    }    
}
 
int main (){
  
    int arr[] = {45,23,19,34,67,31};
    int n = sizeof(arr)/sizeof(int);

    selection(arr, n);
    printArray(arr, n);
  
    return 0;
}