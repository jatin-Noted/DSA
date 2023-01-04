#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int * arr, int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1, n-1);
    }
}
 
int main (){
  
    int arr[10] = {1,2,3,4,5,6,7,18,9,10};
    if(isSorted(arr, 10)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
  
    return 0;
}