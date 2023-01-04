#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void distinct(int * arr, int n){
    sort(arr, arr+n);
    for(int i = 0; i<n; i++){
        if(arr[i] != arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
}
 
int main (){
  
    int arr[10] = {3,3,4,4,1,1,7,7,4,4};
    distinct(arr, 10);
  
    return 0;
}