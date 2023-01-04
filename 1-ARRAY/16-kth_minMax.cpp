#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int kthMin(int * arr, int n, int k){
    sort(arr, arr+n);
    return arr[k-1];
}

int kthMax(int * arr, int n, int k){
    sort(arr, arr+n);
    return arr[n-k];
}
 
int main (){
  
    // Input: arr[] = {7, 10, 4, 3, 20, 15}, k = 4 
    // Output: 10 

    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr)/sizeof(int);

    int ans = kthMin(arr, n, 4);
    cout<<ans<<endl;

    int ans_2 = kthMax(arr, n, 4);
    cout<<ans_2<<endl;
  
    return 0;
}