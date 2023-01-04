#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int isPossible(int arr[], int n, int k, int mid){
    int painterCount = 1;
    int timeSum = 0;

    for(int i=0; i<n; i++){
        timeSum += arr[i];
        if(timeSum > mid){
            painterCount++;
            timeSum = arr[i];
        }
    }
    return painterCount;
}

int painter(int arr[], int n, int k){
    int s = *max_element(arr, arr+n);
    int e = 0;
    for(int i = 0; i<n; i++){
        e += arr[i];
    }
    int ans = -1;


    while(s<=e){

        int mid = (s+e)/2;

        int painterCount = isPossible(arr, n, k, mid);

        if(painterCount <=k ){ // it is an important line...
            e = mid-1;
            ans = mid;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}
 
int main (){
  
    int arr[] = {10,10,10,10};
    int n = sizeof(arr)/sizeof(int);
    int students = 2;

    int time = painter(arr, n, students);
    cout<<time;
  
    return 0;
}