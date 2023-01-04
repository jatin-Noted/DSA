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

void sort(int arr[], int n){
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            count_0++;
        }
        else if(arr[i] == 1){
            count_1++;
        }
        else{
            count_2++;
        }
    }
    for(int i = 0; i<count_0; i++){
        arr[i] = 0;
    }
    for(int i = count_0; i<count_0 + count_1; i++){
        arr[i] = 1;
    }
    for(int i = count_0 + count_1; i<count_0 + count_1 + count_2; i++){
        arr[i] = 2;
    }
}
 
int main (){
  
    int arr[] = {0, 1, 2, 0, 1, 2};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, n);
    printArray(arr, n);
  
    return 0;
}