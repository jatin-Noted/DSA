#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int BS(int arr[], int n, int key){
    int s = 0, e = n-1;
    while(s<=e){
        int mid = s+(e/2-s/2);
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
}
 
int main (){
  
    int arr[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170};
    int n = sizeof(arr)/sizeof(int);
    int key = 110;
    
    int index = BS(arr, n, key);
    cout<<index;
  
    return 0;
}