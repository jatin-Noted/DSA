#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int * arr, int n){
    for(int i = 0; i<n; i++){
        if((i + 1) < n){
            if(arr[i] > arr[i+1]){
                return 0;
            }
        }
        
    }
    return 1;
}
 
int main (){
  
    int arr[5] = {12,45,56,78,89};

    if( isSorted(arr, 5) ){
        cout<<"Sorted";
    }
    else{
        cout<<"Not Sorted";
    }
  
    return 0;
}