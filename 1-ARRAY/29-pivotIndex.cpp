#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int n){
    int l = 0, h = n-1;

    while(l<=h){
        int mid = (l+h)/2;

        if(arr[mid] > arr[0]){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    return l;
}
 
int main (){
  
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr)/sizeof(int);

    int index = getPivot(arr, n);
    cout<<index;
  
    return 0;
}