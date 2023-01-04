#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int largestSum(int * arr, int n){
    int ans = INT_MIN;
    for(int i = 0; i<n; i++){
        int sum = arr[i];
        for(int j = i+1; j<n; j++){
            sum += arr[j];
            if(sum > ans){
                ans = sum;
            } 
        }
    }
    return ans;
}

int kadaneAlgorithm(int * arr, int n){
    int ans = INT_MIN;
    int sum = 0;

    for(int i = 0; i<n; i++){
        sum += arr[i];
        if(sum > ans){
            ans = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return ans;
}
 
int main (){
  
    int arr[] = {-2, -3, -1, -2, -3};
    int n = sizeof(arr)/sizeof(int);

    // int ans = largestSum(arr, n);
    // cout<<ans<<endl;

    int ans_2 = kadaneAlgorithm(arr, n);
    cout<<ans_2<<endl;
  
    return 0;
}