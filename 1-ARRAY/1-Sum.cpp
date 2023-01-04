#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int sum(int  * arr, int n){
    int sum = 0;
    for(int i = 0; i<n ; i++){
        sum+=arr[i];
    }
    return sum;
}
 
int main (){
  
    int arr[5] = {45,78,56,12,48};
    int result = sum(arr, 5);

    cout<<result;
  
    return 0;
}