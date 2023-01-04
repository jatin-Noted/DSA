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

void sort_1(int * arr, int n){
    int s = 0, e = n-1;
    while(s<=e){
        if(arr[s] == 0){
            s++;
        }
        else if(arr[e] == 1){
            e--;
        }
        else{
            swap(arr[s++], arr[e--]);
        }
    }
}

void sort_2(int * arr, int n){
    sort(arr, arr+n);
}
 
int main (){
  
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int n = sizeof(arr)/sizeof(int);

    sort_1(arr, n);
    printArray(arr, n);

    sort_2(arr, n);
    printArray(arr, n);
  
    return 0;
}