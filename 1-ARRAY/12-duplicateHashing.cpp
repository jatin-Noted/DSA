#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;


void hashDuplicate(int * arr, int n){
    int max = *max_element(arr, arr+n);
    int H[max+1] = {0};

    //NOTE THAT --> sorting not needed

    for (int i = 0; i < n; i++)
    {
        H[arr[i]]++;
    }
    for (int i = 0; i < max+1; i++)
    {
        if(H[i] > 1){
            cout<<i<<" "<<H[i]<<endl;
        }
    }
    
    
}
 
int main (){
  
    int arr[10] = {3, 1, 4, 4, 4, 10, 7, 7, 4, 4};
    hashDuplicate(arr, 10);
  
    return 0;
}