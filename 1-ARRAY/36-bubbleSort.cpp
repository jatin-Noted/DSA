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

void bubble(int * arr, int n){

    for(int i = 0; i<n-1; i++){

        bool swapping = false;

        for(int j = 0; j<n-1-i; j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swapping = true;
            }
        }
        if(swapping == false){
            break;
        }
    }
    
}
 
int main (){
  
    int arr[] = {45,23,19,34,67,31};
    int n = sizeof(arr)/sizeof(int);

    bubble(arr, n);
    printArray(arr, n);
  
    return 0;
}