#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

vector<int> missing(int * arr, int n){
    int size = *max_element(arr, arr + n) + 1;
    int H[size] = {0};

    vector<int>ans;

    for(int i = 0; i<n; i++){
        H[arr[i]]++;
    }
    
    H[0]++; //for natural numbers

    for(int i = 0; i<size; i++){
        if(H[i] == 0){
            ans.push_back(i);
        }
    }
    return ans;
} 

int main (){
  
    int arr[] = {3,7,4,9,12,6,1,11,2,10};
    int size = sizeof(arr)/sizeof(int);

    vector<int> result = missing(arr, size);
    for(int i = 0; i<result.size(); i++){
        cout<<result.at(i)<<" ";
    }
  
    return 0;
}