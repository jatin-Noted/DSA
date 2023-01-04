#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool isSR(int * arr, int n){
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] < arr[i-1]){
            count++;
        }
    }
    if(arr[0] < arr[n-1]){
        count++;
    }
    if(count <= 1){
        return true;
    }
    return false;
    
}
 
int main (){
  
    int arr[] = { 4,5,6,7,1,2,3};
    int n = sizeof(arr)/sizeof(int);

    if(isSR(arr, n)){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
  
    return 0;
}