#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int n){
    int l = 0, h = n-1;

    while(l<=h){
        int mid = (l+h)/2;

        if(arr[mid] > arr[0]){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    return l;
}

int binarySearch(int arr[], int n, int s, int e, int key){

    while(s<=e){

        int mid = s + (e - s) / 2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int search(int * arr, int n, int key){

    int pivotIndex = getPivot(arr, n);

    if(arr[pivotIndex] == key){
        return pivotIndex;
    }
    else if(arr[pivotIndex] < key && arr[n-1] >= key){ //it is important to add '>=' sign instead of '>' sign...
        return binarySearch(arr, n, pivotIndex +1, n-1, key);
    }
    else{ //arr[pivotIndex] < key && arr[n-1] < key;
        return binarySearch(arr, n, 0, pivotIndex-1, key);
    }

    return -1;
}
 
int main (){
  
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr)/sizeof(int);
    int key = 3;

    int index = search(arr, n, key);
    cout<<index;
  
    return 0;
}