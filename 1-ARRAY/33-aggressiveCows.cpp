#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int isPossible(int arr[], int n, int k, int mid){
    int lastPosition = arr[0];
    int cowCount = 0;

    for(int i = 1; i<n; i++){
        if((abs(arr[i] - lastPosition)) > mid){
            cowCount++;
            lastPosition = arr[i];
        }
    }
    return cowCount;
}

int aggressiveCow(int arr[], int n, int k){
    int s = 0;
    int e = *max_element(arr, arr+n) - *min_element(arr, arr+n);
    int ans = -1;

    while(s<=e){
        int mid = (s+e) / 2;
        int cows = isPossible(arr, n, k, mid);
        if(cows<=k){
            s = mid + 1;
            ans = mid;
        }
        else{
            e = mid - 1;
        }
        
    }
    return ans;
}
 
int main (){
  
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(int);
    int k = 2;

    int cows = aggressiveCow(arr, n, k);
    cout<<cows;
  
    return 0;
}