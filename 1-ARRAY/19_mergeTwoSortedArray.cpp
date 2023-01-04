#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void merge(int * arr1, int * arr2, int n, int m){
    int i=0, j=0;
    
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);

    vector<int>ans;

    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        ans.push_back(arr1[i]);
        i++;
    }

    while(j<m){
        ans.push_back(arr2[j]);
        j++;
    }

    for(int i = 0; i<ans.size(); i++){
        cout<<ans.at(i)<<" ";
    }
    cout<<endl;
}
 
int main (){
  
    int arr1[] = { 1, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5, 8};

    int n = sizeof(arr1)/sizeof(int);
    int m = sizeof(arr2)/sizeof(int);

    merge(arr1, arr2, n, m);

    return 0;
}