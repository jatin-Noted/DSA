#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void unique(int * arr, int n){
    for(int i = 0; i<n; i++){
        int count = 0;
        for(int j = 0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}

void unique_2(int * arr, int n){
    cout<<"Function CALLED"<<endl;
    int max = *max_element(arr, arr + n);
    int H[max + 1] = {0};
    for(int i = 0; i < n; i++){
        H[arr[i]]++;
    }
    for(int i = 0; i < (max + 1); i++){
        if(H[i] == 1){
            cout<<i<<" "<<endl;
        }
    }
}
 
int main (){
  
    int arr[10] = {3,1,4,4,4,10,7,7,4,4};
    unique(arr, 10);
    unique_2(arr, 10);
  
    return 0;
}