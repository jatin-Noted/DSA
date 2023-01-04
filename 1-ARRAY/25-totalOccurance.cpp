#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int lastPos(int * arr, int n, int key){
    int s = 0, e = n-1;
    int ans = -1;

    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] > key){
            e = mid -1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int firstPos(int * arr, int n, int key){
    int s = 0, e = n-1;
    int ans = -1;

    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] > key){
            e = mid -1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}
 
int main (){
  
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};   
    int n = sizeof(arr)/sizeof(int);

    int key = 5;

    int last = lastPos(arr, n, key);
    int first = firstPos(arr, n, key);

    cout<<"Total Occurance = "<<last-first+1;
  
    return 0;
}