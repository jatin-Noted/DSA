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

void altSwap(int * arr, int n){
    for(int i = 0; i<n; i+=2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }
}
 
int main (){
  
    int arr[11] = {78,45,56,12,32,98,84,95,16,82, 10};

    altSwap(arr, 11);
    printArray(arr, 11);
    
    return 0;
}