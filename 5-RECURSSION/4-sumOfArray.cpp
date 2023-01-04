#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int sum(int * arr, int n){
    if(n == 1){
        return arr[0];
    }
    else{
        return sum(arr + 1, n-1) + arr[0];
    }
}
 
int main (){
  
    int arr[4] = {10,20,30,40};
    cout<<sum(arr, 4);
  
    return 0;
}