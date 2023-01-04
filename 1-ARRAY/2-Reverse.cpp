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

void reverse_1(int * arr, int n){
    for(int i = 0; i<n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }
}

void reverse_2(int * arr, int n){
    int s = 0, e = n-1;

    while(s<=e){
        swap(arr[s++], arr[e--]);
    }
}
 
int main (){
  
    int arr[6] = {78,56,12,32,98,100};

    reverse_1(arr, 6);
    printArray(arr, 6);

    reverse_2(arr, 6);
    printArray(arr, 6);
  
    return 0;
}