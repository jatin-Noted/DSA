#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void triplet(int * arr, int n, int sum){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if(arr[i] + arr[j] + arr[k] == sum){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }            
        }        
    }    
}
 
int main (){
  
    //Input: array = {12, 3, 4, 1, 6, 9}, sum = 24; 

    int arr[] = {12,3,4,1,6,9};
    int n = sizeof(arr)/sizeof(int);

    int sum = 24;

    triplet(arr, n, sum);
  
    return 0;
}