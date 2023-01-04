#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void printArray(int * arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reArranage(int * arr, int n){
    int s = 0, e = n-1;
    while(s<=e){
        if(arr[s] < 0){
            s++;
        }
        else if(arr[e] > 0){
            e--;
        }
        else{
            swap(arr[s++], arr[e--]);
        }
    }
}
 
int main (){
  
    int arr[10] = {0,48,-8,-54,12,15,23,-56,-48,-37};
    printArray(arr, 10);

    reArranage(arr, 10);
    printArray(arr, 10);
  
    return 0;
}