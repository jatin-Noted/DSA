#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int Max(int * arr, int n){
    int max = INT_MIN;
    for(int i= 0;i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int Min(int * arr, int n){
    int min = INT_MAX;
    for(int i= 0;i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
 
int main (){
  
    int arr[] = {12,3,4,1,6,9};
    int n = sizeof(arr)/sizeof(int);

    int max = Max(arr, n);
    int min = Min(arr, n);

    cout<<max<<endl;
    cout<<min<<endl;

    cout<<*max_element(arr, arr+n)<<endl;
    cout<<*min_element(arr, arr+n)<<endl;
  
    return 0;
}