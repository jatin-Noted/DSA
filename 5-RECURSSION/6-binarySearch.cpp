#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int * arr, int s, int e, int element){
    int mid = (s + e)/2;

    if(s > e){
        return false;
    }

    if(arr[mid] == element){
        return true;
    }
    else if(arr[mid] > element){
        return binarySearch(arr, s, mid-1, element);
    }
    else{
        return binarySearch(arr, mid+1, e, element);
    }
}
 
int main (){
  
    int arr[5] = {1,2,3,4,5};

    if(binarySearch(arr, 0, 4, 4)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
  
    return 0;
}