#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int pivotInd(int arr[], int n){

    int leftSum = 0;
    for(int i = 0; i<n; i++){
        leftSum+=arr[i];
    }

    int rightSum = 0;
    for(int i = n-1; i>=0; i--){

        leftSum -= arr[i];

        if(leftSum == rightSum){
            return i;
        }
        else{
            rightSum += arr[i];
        }
    }
    return -1;
}
 
int main (){
  
    int nums[] = {1,7,3,6,5,6};
    int n = sizeof(nums)/ sizeof(int);

    int pivot = pivotInd(nums, n);
    cout<<pivot;
  
    return 0;
}