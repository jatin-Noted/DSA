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

void insert(int  * arr, int &n, int cap, int index, int element){
    if(cap<=n){
        return;
    }
    else{
        for(int i = n-1; i>=index; i--){
            arr[i+1] = arr[i];
        }
        arr[index] = element;
        n++;
    }
}

int Delete(int * arr, int &n, int index){
    int temp = arr[index];
    for(int i = index; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
    return temp;
}
 
int main (){
  
    int arr[12] = {1,2,3,4,5,6,7,8,9,10};

    int n = 10;

    insert(arr, n ,12,5,100);
    printArray(arr, n);

    int del = Delete(arr, n, 3);
    cout<<del<<endl;
    printArray(arr, n);
  
    return 0;
}