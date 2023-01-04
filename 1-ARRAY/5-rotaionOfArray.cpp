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

void leftRotateByOne(int * arr, int n){
    int temp = arr[0];
    for(int i =0; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

void leftRotate(int *arr, int n, int cycle){
    for(int i = 1; i<=cycle; i++){
        leftRotateByOne(arr, n);
    }
}

void rightRotateByOne(int * arr, int n){
    int temp = arr[n-1];
    for(int i = n-1; i>=0; i--){
        if(i+1 < n)
            arr[i+1] = arr[i];
    }
    arr[0] = temp;
}

void rightRotate(int * arr, int n, int cycle){
    for(int i = 1; i<=cycle; i++){
        rightRotateByOne(arr, n);
    }
}

void rotation(int * arr, int n, int k){

    int temp[n];

    for(int i= 0; i<n; i++){
        temp[(i+k) % n]= arr[i];
    }

    for(int i= 0; i<n; i++){
        arr[i] = temp[i];
    }
    
}
 
int main (){
  
    int arr[10] = {12,56,98,87,54,53,86,95,15,30};

    printArray(arr, 10);

    leftRotate(arr, 10, 3);
    printArray(arr, 10);

    rightRotate(arr, 10, 3);
    printArray(arr, 10);

    rotation(arr, 10, 3);
    printArray(arr, 10);
  
    return 0;
}