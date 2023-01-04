#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(int * arr, int n, int k, int mid){

    int pageSum = 0, studentCount = 1;

    for(int i = 0; i<n; i++){
        if(arr[i] > mid){
            return false;
        }
        else if(arr[i] + pageSum <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            pageSum = arr[i];
            if(studentCount > k){
                return false;
            }
        }
    }
    return true;
}

int bookAllocation(int * arr, int n, int k){
    int s = *max_element(arr, arr+n);
    int e = 0;
    for (int i = 0; i < n; i++)
    {
        e += arr[i];
    }
    
    int ans = -1;
    
    while(s <= e){
        int mid = s + (e-s) / 2;

        if(isPossible(arr, n, k, mid)){
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
  
    int arr[] = {12, 34, 67, 90};
    int n = sizeof(arr)/sizeof(int);
    int students = 2;

    int page = bookAllocation(arr, n, students);
    cout<<page;
  
    return 0;
}